//
// Created by User on 02.02.2020.
//

#ifndef OOPPROJECT_BILET_HPP
#define OOPPROJECT_BILET_HPP
#include <bits/stdc++.h>



class Bilet {
private:
    int iloscBiletow;
    float cenaZaBilet;

public:
    Bilet(int iloscBiletow, float cenaZaBilet);
    virtual ~Bilet();


    float getCenaZaBilet();
    int getIloscBiletow();
    virtual std::string toString() = 0;

};
typedef std::shared_ptr<Bilet>biletPtr;



#endif //OOPPROJECT_BILET_HPP
