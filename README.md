# Projet-Systeme-Reseaux

Le but de ce projet est de réaliser en C une application client/serveur TCP/IP simplifiée.
Représentation des informations disponibles.
Les trains disponibles seront caractérisés principalement par : un numéro de train, une ville de départ, une ville d'arrivée, les horaires de départ et d'arrivée, et le prix usuel (on ne se préoccupe pas de la date, les trains sont supposés circuler tous les jours).
Ces informations seront rassemblées dans un fichier de texte sur le serveur, au format suivant : une ligne par train, avec des champs représentant les caractéristiques listées ci-dessus, séparés par un ";"
On pourra avoir un dernier champ optionnel, de valeur "REDUC" ou "SUPPL" :
- le mot-clé "REDUC" indiquera que le train fait l'objet d'une action promotionnelle
exceptionnelle et donc bénéficie de 20% de réduction
- le mot-clé "SUPPL" indiquera que le train fait l'objet d'un supplément exceptionnel et donc
que le prix est augmenté de 10%.
Un petit exemple d’un tel fichier de texte est fourni en Annexe.
Interrogations possibles de la part des clients.
Les utilisateurs du service utiliseront votre application client afin d'émettre des requêtes auprès du serveur. Pour tout affichage de résultat à l’utilisateur (un ou plusieurs trains satisfaisant la requête), on n'oubliera pas d'afficher également la durée du trajet proposé, et son prix, calculé en prenant en compte la réduction ou le supplément éventuel.
/!\ Attention à ne pas faire de confusion entre ce que le serveur et le client s'échangent et ce que l'utilisateur saisit ou voit à l'affichage ! (le client peut formater ses requêtes vers le serveur selon le besoin, il peut aussi formater des réponses brutes du serveur pour un affichage convivial à l'utilisateur)
L'application devra offrir à l'utilisateur les possibilités d’interrogation suivantes :
- soumettre une ville de départ, une ville d'arrivée, et un horaire de départ, et obtenir l'affichage du train satisfaisant ces critères, ou à défaut du premier train possible à partir
de l'horaire de départ demandé,
- soumettre une ville de départ, une ville d'arrivée, et une tranche horaire pour l'horaire de
départ, et obtenir l'affichage des trains possibles dans cette tranche horaire (attention, il
peut ne pas y en avoir !),
- soumettreunevillededépartetunevilled'arrivéeetobtenirl'affichagedelalistedetous
les trains satisfaisant ces critères,
puis dans ce cas demander à l'application d’indiquer un train parmi cette liste de résultats, sélectionné selon l'un des critères suivants :
- letrajetaumeilleurprix,
- ouletrajetdeduréeoptimum.
Nous allons réaliser une application client/serveur permettant à des utilisateurs de consulter des listes de trains disponibles entre deux villes données, voire de les sélectionner suivant des critères (attention : afin de simplifier le problème, il n'est pas question de procéder à des réserva- tions, mais juste de consulter des informations).
Les informations sur les trains existants seront rassemblées sur un serveur, que les clients interrogeront selon les besoins des utilisateurs.
        
/!\ Remarques importantes.
Le client doit être en mesure de délivrer à l'utilisateur un message clair dans les cas où il n’y a pas de réponse (quel choix efficace ferez-vous pour ce qui sera renvoyé au client ?).
Pour gérer les cas où plusieurs données peuvent avoir à être transmises du client au serveur, et/ou plusieurs résultats peuvent être fournis par le serveur, vous devrez commencer par décider du protocole d'échange que le serveur et le client utiliseront pour ces transmissions multiples : envoi en une seule fois (comment les données seront-elles distinguées dans le tampon d’envoi ?), ou envoi en plusieurs fois (comment ?).
Vous êtes libres de vos choix et ils devront être expliqués dans le rapport joint.
Pour les interrogations ci-dessus, il faudra bien sûr réfléchir à mettre en œuvre au préalable toutes les fonctionnalités de base nécessaires, en favorisant un maximum de réutilisabilité. Vous devez concevoir cela, et l'intégration de ces fonctionnalités, avant de coder.
Les choix d'organisation logicielle ici devront être clairement expliqués dans le rapport joint.
