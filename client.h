#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include <vector>
class Client {
    private :
        std:: string name_;
        std:: string mail_;
        int id_;
        std::vector< int > livresEmpruntes_; // je cree une  liste de variable avec des id de livre empruntés
    public : 
        Client ( const std::string& name , const std :: string&mail , int id);
        const std:: string& getName() const;
        const  std ::  string& getMail() const ; 
        int getId () const ; 
        const std::vector<int>& getLivresEmpruntes() const;
        void modifierlivresEmpruntes( int idLivre );






};

#endif