//
// Created by User on 02.02.2020.
//

#include <boost/test/unit_test.hpp>
#include "Sala.hpp"
#include "Film.hpp"

//#include "Student.h"

BOOST_AUTO_TEST_SUITE(FilmTest1)

BOOST_AUTO_TEST_CASE(dodajFilm) {
          salaPtr sala1(new Sala("Baltyk",10,1));
        filmPtr film1(new Film("Harry Potter",120,"2D","przygodowy"));

        BOOST_CHECK_EQUAL(sala1->dodajFilm(film1),true);
        BOOST_CHECK_EQUAL(sala1->pobierzIloscFilmow(),1);

}
BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE(FilmTest2)

    BOOST_AUTO_TEST_CASE(usunFilm) {
        salaPtr sala1(new Sala("Baltyk",10,1));
        filmPtr film1(new Film("Harry Potter",120,"2D","przygodowy"));

        BOOST_CHECK_EQUAL(sala1->dodajFilm(film1),true);
        BOOST_CHECK_EQUAL(sala1->pobierzIloscFilmow(),1);
        BOOST_CHECK_EQUAL(sala1->usunFilm(film1),true);
        BOOST_CHECK_EQUAL(sala1->pobierzIloscFilmow(),0);
    }
BOOST_AUTO_TEST_SUITE_END()