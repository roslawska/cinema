//
// Created by User on 02.02.2020.
//

#ifndef OOPPROJECT_NORMALNY3D_HPP
#define OOPPROJECT_NORMALNY3D_HPP

#include <bits/stdc++.h>
#include "Bilet.hpp"


class Normalny3D : public Bilet {
private:
    float oplataRodzajBiletu;
    float dodatkowaOplata;
public:
    Normalny3D(int iloscBiletow, float cenaZaBilet, float oplataRodzajBiletu,
               float dodatkowaOplata);
    virtual ~Normalny3D();

    float getOplataRodzajBiletu() ;
    float getDodatkowaOplata() ;
    float getCenaZaBilet()  ;

    void setDodatkowaOplata(double dodOplata);
    void setOplataRodzajBiletu(double rodzOplata);

    std::string toString() override;
};



#endif //OOPPROJECT_NORMALNY3D_HPP
