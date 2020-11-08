//
// Created by User on 02.02.2020.
//

#ifndef OOPPROJECT_RFILM_HPP
#define OOPPROJECT_RFILM_HPP
#include <bits/stdc++.h>
#include "Film.hpp"
#include "Repozytorium.hpp"

class RFilm: public Repozytorium<Film>{};

typedef std::shared_ptr<RFilm> repozytoriumFilmPtr;

#endif //OOPPROJECT_RFILM_HPP
