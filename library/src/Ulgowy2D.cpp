//
// Created by User on 02.02.2020.
//

#include "Ulgowy2D.hpp"

Ulgowy2D::Ulgowy2D( int iloscBiletow, float cenaZaBilet) :
        Bilet( iloscBiletow, cenaZaBilet){
}
Ulgowy2D::~Ulgowy2D() {
}

std::string Ulgowy2D::toString() {
    std::stringstream tekst;
    tekst<<"\nBilety ulgowe na film 2D "<<Bilet::toString();
    return tekst.str();
}
