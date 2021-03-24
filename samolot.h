#ifndef SAMOLOT_H
#define SAMOLOT_H
#include <iostream>
#include "pasazer.h"
#include "silnik.h"
#pragma once


class Samolot
{
public:
    static int liczba_samolotow;
    int rok_produkcji;
    std::string miejsce_wylotu;
    std::string miejsce_przylotu;
    Samolot();
    ~Samolot();



};

#endif // SAMOLOT_H
