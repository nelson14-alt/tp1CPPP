#include "livre.h"
#include <stdexcept>
Livre::Livre(const std::string& title , const std::string& author , bool statut , int id )
    : title_(title), author_(author), statut_(statut), id_(id) {
        if  (title_.empty() || author_.empty() || id_< 0 ){
            throw std::invalid_argument("  erreur ");
        }
    }
    
    const std::string& Livre::getTitle() const {
        return title_;
    }
     const std::string& Livre:: getAuthor() const {
        return author_;

     }
     bool Livre:: getStatut() const{
        return statut_;
     }
     int Livre:: getId() const{
        return  id_;
     }