//
// Created by User on 02.02.2020.
//

#include "Normalny3D.hpp"


Normalny3D::Normalny3D( int iloscBiletow, float cenaZaBilet, float oplataRodzajBiletu, float dodatkowaOplata) :
        Bilet( iloscBiletow, cenaZaBilet), oplataRodzajBiletu(oplataRodzajBiletu),dodatkowaOplata(dodatkowaOplata) {
}
Normalny3D::~Normalny3D() {
}

float Normalny3D::getOplataRodzajBiletu()  {
    return oplataRodzajBiletu;
}

float Normalny3D::getDodatkowaOplata()  {
    return dodatkowaOplata;
}
float Normalny3D::getCenaZaBilet()  {
    float cena=Bilet::getCenaZaBilet()+getOplataRodzajBiletu()+getDodatkowaOplata();
    return cena;
}


std::string Normalny3D::toString() {
    std::stringstream tekst;
    tekst<<"\nBilety normalne na film 3D "<<Bilet::toString();
    return tekst.str();
}
