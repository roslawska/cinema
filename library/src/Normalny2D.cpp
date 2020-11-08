//
// Created by User on 02.02.2020.
//

#include "Normalny2D.hpp"

Normalny2D::Normalny2D(int iloscBiletow, float cenaZaBilet, float oplataRodzajBiletu) :
        Bilet( iloscBiletow, cenaZaBilet), oplataRodzajBiletu(oplataRodzajBiletu) {
}
Normalny2D::~Normalny2D() {
}

float Normalny2D::getOplataRodzajBiletu()  {
    return oplataRodzajBiletu;
}
float Normalny2D::getCenaZaBilet()  {
    float cena=Bilet::getCenaZaBilet()+this->getOplataRodzajBiletu();
    return cena;
}


std::string Normalny2D::toString() {
    std::stringstream tekst;
    tekst<<"\nBilety normalne na film 2D "<<Bilet::toString();
    return tekst.str();
}


