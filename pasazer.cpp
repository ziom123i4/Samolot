#pragma once
#include "pasazer.h"
#include <iostream>

int Pasazer::liczba_pasazerow=0;

Pasazer::Pasazer()
{
#ifdef _DEBUG
        std::cout<<"Pasazer()";

#endif
        nazwisko = "nazwisko";
        liczba_pasazerow++;
}
Pasazer::Pasazer(std::string nazwisko)
{
#ifdef _DEBUG
        std::cout<<"Pasazer(std::string nazwisko)";
#endif
        this->nazwisko = nazwisko;
        liczba_pasazerow++;
}
Pasazer::~Pasazer()
{
#ifdef _DEBUG
        std::cout<<"~Pasazer()";
#endif
        liczba_pasazerow--;
}

void Pasazer::wpiszDane(std::string nazwisko)
{
    this->nazwisko = nazwisko;
}
std::string Pasazer::pokazDane()
{

    return this->nazwisko;
}
