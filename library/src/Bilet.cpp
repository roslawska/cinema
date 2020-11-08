//
// Created by User on 02.02.2020.
//

#include "Bilet.hpp"
//
// Created by User on 19.01.2019.
//

#include "Bilet.hpp"
#include <bits/stdc++.h>

Bilet::Bilet(int iloscBiletow, float cenaZaBilet) :
        iloscBiletow(iloscBiletow), cenaZaBilet(cenaZaBilet){
}
Bilet::~Bilet() {
}

int Bilet::getIloscBiletow()  {
    return iloscBiletow;
}
float Bilet::getCenaZaBilet()  {
    return cenaZaBilet;
}

std::string Bilet::toString() {
    std::stringstream tekst;
    tekst<<"Ilosc biletow: "<<iloscBiletow<<"\nCena za jeden bilet: "<<cenaZaBilet<<" PLN";
    return tekst.str();
}
