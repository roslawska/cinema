//
// Created by User on 02.02.2020.
//

#ifndef OOPPROJECT_ULGOWY2D_HPP
#define OOPPROJECT_ULGOWY2D_HPP
#include <bits/stdc++.h>
#include "Bilet.hpp"


class Ulgowy2D : public Bilet {
public:
    Ulgowy2D( int iloscBiletow, float cenaZaBilet);
    virtual ~Ulgowy2D();

    std::string toString() override;
};


#endif //OOPPROJECT_ULGOWY2D_HPP
