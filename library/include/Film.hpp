//
// Created by User on 02.02.2020.
//

#ifndef OOPPROJECT_FILM_HPP
#define OOPPROJECT_FILM_HPP
#include <bits/stdc++.h>



class Film
{
private:
    std::string tytul;
    int czasTrwania;
    std::string typFilmu;
    std::string gatunek;

public:
    Film( std::string tytul, int czasTrwania, std::string typFilmu,  std::string gatunek);
    virtual ~Film();

    std::string getTytul() ;
    int getCzasTrwania() ;
    std::string getTypFilmu() ;
    std::string getGatunek() ;
    std::string toString();

};

typedef std::shared_ptr<Film>filmPtr;



#endif //OOPPROJECT_FILM_HPP
