//
// Created by User on 02.02.2020.
//

#include "Ulgowy3D.hpp"


Ulgowy3D::Ulgowy3D( int iloscBiletow, float cenaZaBilet, float dodatkowaOplata) :
        Bilet( iloscBiletow, cenaZaBilet), dodatkowaOplata(dodatkowaOplata){
}
Ulgowy3D::~Ulgowy3D() {
}

float Ulgowy3D::getDodatkowaOplata()  {
    return dodatkowaOplata;
}
float Ulgowy3D::getCenaZaBilet()  {
    float cena=Bilet::getCenaZaBilet()+getDodatkowaOplata();
    return cena;
}

std::string Ulgowy3D::toString() {
    std::stringstream tekst;
    tekst<<"\nBilety ulgowe na film 3D "<<Bilet::toString();
    return tekst.str();
}
