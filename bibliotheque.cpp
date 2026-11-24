#include "bibliotheque.h"
#include <vector>
#include <string>
#include <stdexcept>
#include "client.h"
#include "livre.h"

Bibliotheque::Bibliotheque(  const std::string& name, const std::string& adresse) : name_(name), adresse_(adresse) {
    if ( name.empty() || adresse.empty()){
        throw std::invalid_argument("Le nom et l'adresse de la bibliothèque ne peuvent pas être vides.");
    }
    
}
const std:: string& Bibliotheque:: getName() const {
    return name_;
}
const std:: string& Bibliotheque :: getAdresse() const{
    return adresse_;
}
const std:: vector<Client>& Bibliotheque:: getClients() const {
    return clients_;
}
const std :: vector<Livre>& Bibliotheque:: getLivres() const {
    return livres_ ; 
}
void  Bibliotheque ::addClient (const Client& client){
    clients_.push_back(client);
}
void  Bibliotheque :: addLivre (const Livre& livre){
    livres_.push_back (livre);
}
bool  Bibliotheque :: emprunterLivre (Client& client , Livre& livre){ 
    if ( livre.getStatut() == true ){
        return false;  //livre déja empruntée
    }
    else {
         livre.modifierStatut( true); // on modifie la valeur du statut du livre si on peut l'emprunter 
         client.modifierlivresEmpruntes( livre.getId() ); // on ajoute le livre à la liste des livres empruntés du client
         return true;
    }
    }
    bool retournerLivre ( Client& client , Livre& livre){
        livre.modifierStatut( false); // on modifie la valeur du statut du livre
        client.modifierlivresEmpruntes( livre.getId() ); // on retire le livre de la liste des livres empruntés du client
        return true;
    }
    
    
    

      
    


    
