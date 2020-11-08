//
// Created by User on 02.02.2020.
//

#ifndef OOPPROJECT_RBILET_HPP
#define OOPPROJECT_RBILET_HPP

#include <bits/stdc++.h>
#include "Bilet.hpp"
#include "Repozytorium.hpp"

class RBilet: public Repozytorium<Bilet>{};

typedef std::shared_ptr<RBilet> repozytoriumBiletPtr;



#endif //OOPPROJECT_RBILET_HPP
