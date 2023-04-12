<?php 
  require_once("vendor/autoload.php");

  //initialiser les librairies 
  $basic  = new \Vonage\Client\Credentials\Basic("1e96e35a", "2rR18dnx7hJulHVR");
  $client = new \Vonage\Client($basic);     

  //ecriture du code 
  $response = $client->sms()->send(
    new \Vonage\SMS\Message\SMS("+2250102840890", BRAND_NAME, 'coucou voici votre code de confirmation: 0410')
  );

  $message = $response->current();

  if ($message->getStatus() == 0) {
      echo "The message was sent successfully\n";
  } else {
      echo "The message failed with status: " . $message->getStatus() . "\n";
  }



?>