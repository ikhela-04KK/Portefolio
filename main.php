<?php 
  // ajouter la configuration de l'api vonage pour envoyer des messages au mail qui a été enregistrer
  $mail = new Mail();
  $mail->setFrom('from@example.com', 'from');
  $mail->setSubject('test');
  $mail->addTo('to@example.com', 'to');
  $mail->setHTMLTemplate('template');
  $mail->setTextBody('text');
  $mail->setHTMLBody('html');
  $mail->setSubjectHeader('subject', 'header');
  $mail->setFromHeader('from@example.com', 'from@example.com');
  $mail->setReplyToHeader('replyto@example.com','replyto@example.com');
  $mail->setReturnPath('return@example.com','return@example.com');
  $mail->addAttachment('file.pdf', 'file.pdf', 'application/pdf');
  if(isset($_POST["Connexion"])){
    $email = $_POST["email"];
    $number = $_POST["tel"];
    $time = date("Y-m-d H:i:s");
    try {
        //creation de la base de donnée 
        $db = new PDO ("sqlite:database.db");// $db = new PDO("mysql:host=localhost", "dbname=formulaire", "root", "")

        // Configuration de la base donnée : en modifiant son mode recupération et la façon dont il gère les erreurs  
        $db -> setAttribute(PDO::ATTR_CASE, PDO::CASE_LOWER);
        $db -> setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

      
        $insert = $db -> prepare("INSERT INTO client (email,number,time) VALUES (:email,:number,:time)");
        $insert->bindValue(":email",$email, PDO::STR,PDO::CASE_LOWER);
        $insert->bindValue(":tel",$tel,PDO::PARAM_STR);
        $insert->bindValue(":time",$time,PDO::PARAM_STR);
      
        $insert -> execute();
        echo "l'email est: " .$email. " le numero est: " .$number;

    }
    catch (PDOException $e){
      die ( "Erreur ! : " .$e->getMessage() );
    }

  }
?>

