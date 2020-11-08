//
// Created by User on 02.02.2020.
//

#include "Sala.hpp"


Sala::Sala(std::string nazwaSali, int maxIloscMiejsc, int maxIloscFilmow) :
        nazwaSali(nazwaSali),maxIloscMiejsc(maxIloscMiejsc),maxIloscFilmow(maxIloscFilmow) {

}
Sala::~Sala() {
}

std::string Sala::getNazwaSali() {
    return nazwaSali;
}
int Sala::getMaxIloscMiejsc() {
    return maxIloscMiejsc;
}

int Sala::pobierzIloscZajetych() {
    int ilosc=0;
    for(auto it:bilety)
        ilosc+=it->getIloscBiletow();
    return ilosc;
}

bool Sala::dodajBilet(biletPtr Bilet) {
    if ((this->pobierzIloscZajetych()+Bilet->getIloscBiletow())>maxIloscMiejsc)
        return false;
    else
    {
        bilety.push_back(Bilet);
        return true;
    }
}
bool Sala::usunBilet(biletPtr Bilet) {
    for (int i=0; i<bilety.size(); i++)
        if(bilety[i]==Bilet){
            bilety.erase(bilety.begin()+i);
            return true;
        }
    return  false;
}

float Sala::pobierzCenaCalkowita() {
    float cena=0.0;
    for(auto it:bilety)
        cena+=it->getIloscBiletow()*it->getCenaZaBilet();
    return cena;
}
std::string Sala::toString() {
    std::stringstream tekst;
    for(auto it:bilety)
        tekst<<it->toString()<<"\n";
    return tekst.str();
}

int Sala::iloscWolnych() {
    int wolne=0;
    wolne=this->getMaxIloscMiejsc()-this->pobierzIloscZajetych();
    return wolne;
}

bool Sala::dodajFilm(filmPtr Film) {
    if (film.size()==maxIloscFilmow)
        return false;
    else
    {
        film.push_back(Film);
        return true;
    }
}

bool Sala::usunFilm(filmPtr Film) {
    for (int i=0; i<film.size(); i++)
        if(film[i]==Film){
            film.erase(film.begin()+i);
            return true;
        }
    return  false;
}

int Sala::getMaxIloscFilmow() {
    return maxIloscFilmow;
}

int Sala::pobierzIloscFilmow() {
    return film.size();
}

Sala::Sala() {
    maxIloscFilmow=1;
}
