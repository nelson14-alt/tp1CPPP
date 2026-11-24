#ifndef LIVRE_H
#define LIVRE_H
#include <string>

class Livre {
    private:
      std::string title_;
      std::string author_;
      bool statut_;
      int id_;
    public:
        Livre(  const std::string& title , const std::string& author , bool statut , int id   );
        const std::string& getTitle() const ;
        const std::string& getAuthor() const ;
        bool getStatut() const ; 
        int getId() const;
        void modifierStatut( bool valeur );
};
#endif
