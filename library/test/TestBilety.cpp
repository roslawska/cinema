//
// Created by User on 02.02.2020.
//

#include <boost/test/unit_test.hpp>

#include "Bilet.hpp"
#include "Ulgowy2D.hpp"
#include "Ulgowy3D.hpp"
#include "Normalny2D.hpp"
#include "Normalny3D.hpp"
#include "Sala.hpp"

BOOST_AUTO_TEST_SUITE(BiletyTest)

BOOST_AUTO_TEST_CASE(DodajBilety) {
    salaPtr sala1(new Sala("Baltyk",10,1));
    biletPtr ulgowy1(new Ulgowy2D(2,10.0));
    biletPtr normalny1(new Normalny2D(1,15.0,0.0));
    BOOST_CHECK_EQUAL(sala1->dodajBilet(ulgowy1),true);
    BOOST_CHECK_EQUAL(sala1->dodajBilet(normalny1),true);
    BOOST_CHECK_EQUAL(sala1->pobierzIloscZajetych(),3);
}

BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE(BiletyTest2)

BOOST_AUTO_TEST_CASE(UsunBilety) {
        salaPtr sala1(new Sala("Baltyk",10,1));
        biletPtr ulgowy1(new Ulgowy2D(2,10.0));
        biletPtr normalny1(new Normalny2D(1,15.0,0.0));
        BOOST_CHECK_EQUAL(sala1->dodajBilet(ulgowy1),true);
        BOOST_CHECK_EQUAL(sala1->dodajBilet(normalny1),true);
        BOOST_CHECK_EQUAL(sala1->usunBilet(ulgowy1),true);
        BOOST_CHECK_EQUAL(sala1->pobierzIloscZajetych(),1);

}
BOOST_AUTO_TEST_SUITE_END()
BOOST_AUTO_TEST_SUITE(BiletyTest3)

    BOOST_AUTO_TEST_CASE(CenaBiletow) {
        salaPtr sala1(new Sala("Baltyk",10,1));
        biletPtr ulgowy1(new Ulgowy2D(2,10.0));
        biletPtr normalny1(new Normalny2D(1,15.0,0.0));
        BOOST_CHECK_EQUAL(sala1->dodajBilet(ulgowy1),true);
        BOOST_CHECK_EQUAL(sala1->dodajBilet(normalny1),true);
        BOOST_CHECK_EQUAL(sala1->pobierzCenaCalkowita(),35.0);
    }

BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE(BiletyTest4)

    BOOST_AUTO_TEST_CASE(WolneMiejsca) {
        salaPtr sala1(new Sala("Baltyk",10,1));
        biletPtr ulgowy1(new Ulgowy2D(2,10.0));
        biletPtr normalny1(new Normalny2D(1,15.0,0.0));
        BOOST_CHECK_EQUAL(sala1->dodajBilet(ulgowy1),true);
        BOOST_CHECK_EQUAL(sala1->dodajBilet(normalny1),true);
        BOOST_CHECK_EQUAL(sala1->iloscWolnych(),7);
    }

BOOST_AUTO_TEST_SUITE_END()