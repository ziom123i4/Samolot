#ifndef SILNIK_H
#define SILNIK_H
#pragma once

class Silnik
{
public:
    Silnik();
    Silnik(int moc);
    ~Silnik();
    static int liczba_silnikow;
    int moc;
    void ustawienieMocy();


};

#endif // SILNIK_H
