#pragma once
#ifndef PASAZER_H
#define PASAZER_H
#include <iostream>

class Pasazer
{
public:
    Pasazer();
    Pasazer(std::string nazwisko);
    ~Pasazer();
    static int liczba_pasazerow;
    std::string nazwisko;
    void wpiszDane(std::string nazwisko);
    std::string pokazDane();

};

#endif // PASAZER_H
