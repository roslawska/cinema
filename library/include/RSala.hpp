//
// Created by User on 02.02.2020.
//

#ifndef OOPPROJECT_RSALA_HPP
#define OOPPROJECT_RSALA_HPP
#include <bits/stdc++.h>
#include "Sala.hpp"
#include "Repozytorium.hpp"

class RSala: public Repozytorium<Sala>{};

typedef std::shared_ptr<RSala> repozytoriumSalaPtr;

#endif //OOPPROJECT_RSALA_HPP
