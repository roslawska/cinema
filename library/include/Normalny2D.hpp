//
// Created by User on 02.02.2020.
//

#ifndef OOPPROJECT_NORMALNY2D_HPP
#define OOPPROJECT_NORMALNY2D_HPP

#include <bits/stdc++.h>
#include "Bilet.hpp"


class Normalny2D : public Bilet{
private:
    double oplataRodzajBiletu;
public:
    Normalny2D( int iloscBiletow, float cenaZaBilet, float oplataRodzajBiletu);
    virtual ~Normalny2D();

    float getOplataRodzajBiletu() ;
    float getCenaZaBilet() ;

    void setOplataRodzajBiletu(float oplataRodzajBiletu);

    std::string toString() override;
};



#endif //OOPPROJECT_NORMALNY2D_HPP
