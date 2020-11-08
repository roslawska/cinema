//
// Created by User on 02.02.2020.
//

#include <boost/test/unit_test.hpp>
#include "Ulgowy2D.hpp"
#include "Repozytorium.hpp"
#include "RBilet.hpp"
#include "RFilm.hpp"
#include "Film.hpp"
#include "Sala.hpp"
#include "RSala.hpp"

BOOST_AUTO_TEST_SUITE(RepozytoriumBiletTest1)

    BOOST_AUTO_TEST_CASE(dodajBiletDoRepozytorium) {
    biletPtr ulgowy1(new Ulgowy2D(1,10.0));
    repozytoriumBiletPtr repoBilet(new RBilet());
    repoBilet->dodaj(ulgowy1);
    BOOST_CHECK_EQUAL(repoBilet->liczbaElementow(),1);
    }
BOOST_AUTO_TEST_SUITE_END()


BOOST_AUTO_TEST_SUITE(RepozytoriumBiletTest2)

    BOOST_AUTO_TEST_CASE(usunBiletZRepozytorium) {
        biletPtr ulgowy1(new Ulgowy2D(1,10.0));
        repozytoriumBiletPtr repoBilet(new RBilet());
        repoBilet->dodaj(ulgowy1);
        BOOST_CHECK_EQUAL(repoBilet->liczbaElementow(),1);
        repoBilet->usun(ulgowy1);
        BOOST_CHECK_EQUAL(repoBilet->liczbaElementow(),0);
    }
BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE(RepozytoriumFilmTest1)

    BOOST_AUTO_TEST_CASE(dodajBiletDoRepozytorium) {
        filmPtr film1(new Film("Harry Potter",120,"2D","przygodowy"));
        filmPtr film2(new Film("Szczeki",89,"3D","thriller"));
        repozytoriumFilmPtr repoFilm(new RFilm());
        repoFilm->dodaj(film1);
        repoFilm->dodaj(film2);
        BOOST_CHECK_EQUAL(repoFilm->liczbaElementow(),2);
    }
BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE(RepozytoriumFilmTest2)

    BOOST_AUTO_TEST_CASE(usunBiletZRepozytorium) {
        filmPtr film1(new Film("Harry Potter",120,"2D","przygodowy"));
        filmPtr film2(new Film("Szczeki",89,"3D","thriller"));
        repozytoriumFilmPtr repoFilm(new RFilm());
        repoFilm->dodaj(film1);
        repoFilm->dodaj(film2);
        BOOST_CHECK_EQUAL(repoFilm->liczbaElementow(),2);
        repoFilm->usun(film1);
        BOOST_CHECK_EQUAL(repoFilm->liczbaElementow(),1);
    }
BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE(RepozytoriumSalaTest1)

    BOOST_AUTO_TEST_CASE(dodajSalaDoRepozytorium) {
        salaPtr sala1(new Sala("Baltyk",10,1));
        salaPtr sala2(new Sala("Polonia",25,1));
        repozytoriumSalaPtr repoSala(new RSala());
        repoSala->dodaj(sala1);
        repoSala->dodaj(sala2);
        BOOST_CHECK_EQUAL(repoSala->liczbaElementow(),2);
    }
BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE(RepozytoriumFilmTest2)

    BOOST_AUTO_TEST_CASE(usunSalaZRepozytorium) {
        salaPtr sala1(new Sala("Baltyk",10,1));
        salaPtr sala2(new Sala("Polonia",25,1));
        repozytoriumSalaPtr repoSala(new RSala());
        repoSala->dodaj(sala1);
        repoSala->dodaj(sala2);
        BOOST_CHECK_EQUAL(repoSala->liczbaElementow(),2);
        repoSala->usun(sala1);
        BOOST_CHECK_EQUAL(repoSala->liczbaElementow(),1);
    }
BOOST_AUTO_TEST_SUITE_END()