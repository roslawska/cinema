#include <iostream>
#include "Bilet.hpp"
#include "Ulgowy3D.hpp"
#include "Ulgowy2D.hpp"
#include "Normalny2D.hpp"
#include "Normalny3D.hpp"
#include "Sala.hpp"
#include "Film.hpp"
#include "Repozytorium.hpp"
#include "RBilet.hpp"
#include "RSala.hpp"
#include "RFilm.hpp"
#include <bits/stdc++.h>

using namespace std;

int main() {
    salaPtr sala1(new Sala("Baltyk",10,1));
    filmPtr film1(new Film("Harry Potter",120,"2D","przygodowy"));
    biletPtr ulgowy1(new Ulgowy2D(2,10.0));
    biletPtr normalny1(new Normalny2D(1,10.0,2.0));
    sala1->dodajBilet(ulgowy1);
    sala1->dodajBilet(normalny1);
    sala1->dodajFilm(film1);
    cout<<sala1->toString();
    cout<<"\nIlosc zajetych miejsc na sali: "<<sala1->pobierzIloscZajetych();
    cout<<"\nPozostalo "<<sala1->iloscWolnych()<< " wolnych miejsc na sali "<<sala1->getNazwaSali();
    cout<<"\nW sali "<<sala1->getNazwaSali()<<" grany jest "<<sala1->pobierzIloscFilmow()<<" film pt. "<<film1->getTytul();
    RSala *rSala=new RSala;
    RBilet *rBilet=new RBilet;
    rSala->dodaj(sala1);
    rBilet->dodaj(ulgowy1);
    rBilet->dodaj(normalny1);
    cout<<"\n W repozytorium znajduje sie: "<<rBilet->liczbaElementow()<<" rezerwacji";

    return 0;
}