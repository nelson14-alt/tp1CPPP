#ifndef BIOBLIOTHEQUE_H
#define BIOBLIOTHEQUE_H
#include <string>
#include <vector>
#include "client.h"
#include "livre.h"
class Bibliotheque {
    private :
        std:: string name_; //nom de la bibliotheque
        std:: string adresse_;// addresse de la bibliothèque
        std::vector<Client> clients_; // liste des clients de la bibliothèque
        std::vector<Livre> livres_; // liste des livres de la bibliothèque
    public : 
        Bibliotheque ( const std::string& name , const std :: string&adresse );
        const std:: string& getName() const;
        const std:: string& getAdresse() const;
        const std::vector<Client>& getClients() const;  
        const std::vector<Livre>& getLivres() const;
        void addClient (const Client& client);
        void addLivre (const Livre& livre);
        bool emprunterLivre (Client& client , Livre& livre);
        bool retournerLivre ( Client& client , Livre& livre);
};


#endif 