//
// Created by User on 02.02.2020.
//

#ifndef OOPPROJECT_ULGOWY3D_HPP
#define OOPPROJECT_ULGOWY3D_HPP

#include <bits/stdc++.h>
#include "Bilet.hpp"


class Ulgowy3D : public Bilet {
private:
    double dodatkowaOplata;
public:
    Ulgowy3D(int iloscBiletow, float cenaZaBilet, float dodatkowaOplata);
    virtual ~Ulgowy3D();

    float getCenaZaBilet()  ;
    float getDodatkowaOplata() ;

    std::string toString();

};


#endif //OOPPROJECT_ULGOWY3D_HPP
