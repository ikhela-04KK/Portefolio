<?php 

    //ecrire la base de donnée  :ok 


    // essayer d'envoyer à une base de donner les informations que l'on vas rentrer ici  : ok 
    // apprendre Ajax c'est primordiale : ok 
    // faire un syteme graphique ou l'email et le numero pourront safficher :ok
  if(isset($_POST["Connexion"])){
    $email = $_POST["email"];
    $number = $_POST["tel"];
    $time = date("Y-m-d H:i:s");
    try {
        //creation de la base de donnée 
        $db = new PDO ("sqlite:database.db");

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

