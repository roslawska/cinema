//
// Created by User on 02.02.2020.
//

#include "Film.hpp"

Film::Film( std::string tytul, int czasTrwania,  std::string typFilmu,  std::string gatunek) :
        tytul(tytul),czasTrwania(czasTrwania), typFilmu(typFilmu), gatunek(gatunek) {
}

Film::~Film() {
}

std::string Film::getTytul()  {
    return tytul;
}
int Film::getCzasTrwania()  {
    return czasTrwania;
}
std::string Film::getTypFilmu()  {
    return typFilmu;
}
std::string Film::getGatunek()  {
    return gatunek;
}

std::string Film::toString(){
    std::stringstream tekst;
    tekst<<"\nTytul: "<<tytul<<"\nCzas trwania: "<<czasTrwania<<"\nTyp filmu: "<<typFilmu<<"\nGatunek: "<<gatunek;
    return tekst.str();
}