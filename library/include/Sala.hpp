//
// Created by User on 02.02.2020.
//

#ifndef OOPPROJECT_SALA_HPP
#define OOPPROJECT_SALA_HPP

#include <bits/stdc++.h>
#include "Bilet.hpp"
#include "Film.hpp"

class Sala {
private:
    std::vector<biletPtr> bilety;
    std::vector<filmPtr> film;
    std::string nazwaSali;
    int maxIloscMiejsc;
    int maxIloscFilmow;

public:
    Sala(std::string nazwaSali, int maxIloscMiejsc, int maxIloscFilmow);
    Sala();
    virtual ~Sala();

    std::string getNazwaSali();
    int getMaxIloscMiejsc() ;

    int getMaxIloscFilmow();
    bool dodajBilet(biletPtr Bilet);
    bool usunBilet (biletPtr Bilet);
    bool dodajFilm(filmPtr Film);
    bool usunFilm(filmPtr Film);

    int pobierzIloscZajetych();
    float pobierzCenaCalkowita();
    int getBilety();
    int iloscWolnych();
    std::string toString();
    int pobierzIloscFilmow();
};
typedef std::shared_ptr<Sala>salaPtr;



#endif //OOPPROJECT_SALA_HPP
