#include "client.h"
#include <string>
#include <stdexcept>
Client :: Client ( const std::string& name , const std :: string&mail , int id): name_(name), mail_(mail), id_(id){
    if ( name.empty() || mail.empty()|| id < 0){
        throw std::invalid_argument( "le mail et le nom ne peuvent pas etre vide et l'identifiant doit etre un entier poitif ")
    }
const std::string& Client::getName() const{
    return  name_;

}
const std:: string& Client :: getMail() const {
    return mail_;
}      
