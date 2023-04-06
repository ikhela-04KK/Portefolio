//Allons y

let form = document.querySelector('form');

form.addEventListener('submit', function(event){
  event.preventDefault();//pour recharger la page 

  let xhr = new XMLHttpRequest();//creation de l'objet XMLHttpRequest pour pouvoir faire des requêtes sans être obligé de recharger la page.

  let formData = new FormData(form);// Cette ligne de code crée un nouvel objet FormData qui contient les données du formulaire. 

  xhr.open('POST','./main.php'); //outside the script
  xhr.onload = function(){ //defins une fonction de rappelle quand la requête est exécuter

    if (xhr.status === 200){

      //pour mettre à blanc tous les éléments
      document.querySelector(".contacter").style.display = "none";
      document.querySelector("fieldset").style.display = "none";

      //Ajouter le message de bienvenue 
      form.innerHTML = "<p class='contacter' style='margin: 120px auto;'> Vous êtes le bienvenu</p>" + xhr.response;
    }
    
  };
  xhr.send(formData);//permet d'envoyer la requête au server

});
