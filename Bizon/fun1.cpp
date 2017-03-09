#include <iostream>
#include "head1.h"
void pobierz_liczby(int * a, int n)
{
int i;
for(i=0;i<n;i++)
    {
    std::cout<<"Podaj "<<i+1<<" liczbe"<<std::endl;
    std::cin>>a[i];
    }
}
double srednia(int *b, int t)
{
int i;
int suma;
double srednia;
for(i=0, suma=0;i<t;i++)
    {
    suma+=b[i];
    }
srednia=suma/t;
return srednia;
}
