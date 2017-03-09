#include <iostream>
#include "head1.h"


int main()
    double sr;
    int y=5;
    int liczby[5]={1,2,3,4,5};
    y-=2;
    std::cout<<"y="<<y<<std::endl;
    std::cout << "Hello world!" <<std::endl;
    //pobierz_liczby(liczby, 5);
    sr=srednia(liczby, 5);
    std::cout<<"srednia "<<sr<<std::endl;
    std::cin>>sr;
    return 0;
}
