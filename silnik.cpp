#include "silnik.h"
int Silnik::liczba_silnikow=0;
Silnik::Silnik()
{
#ifdef _DEBUG
        std::cout<<"Silnik()";

#endif
        moc = 5;
        liczba_silnikow++;
}
Silnik::Silnik(int moc)
{
#ifdef _DEBUG
        std::cout<<"Silnik(int moc)";

#endif
        this->moc=moc;
        liczba_silnikow++;
}
Silnik::~Silnik()
{
#ifdef _DEBUG
        std::cout<<"~Silnik()";

#endif

        liczba_silnikow--;
}
