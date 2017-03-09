#include <iostream>
#include "head1.h"
#include "head2.h"

int main()
{
    double sr;
    double del;
    int y=5;
    int liczby[5]={1,2,3,4,5};
    y-=2;
    std::cout<<"y="<<y<<std::endl;
    std::cout << "Hello world!" <<std::endl;
    //pobierz_liczby(liczby, 5);
    sr=srednia(liczby, 5);
    std::cout<<"srednia "<<sr<<std::endl;
    del=delta(1,2,1);
    std::cout<<"delta funkcji x^2+2x+1 wynosi:"<<del<<std::endl;
    return 0;
}
