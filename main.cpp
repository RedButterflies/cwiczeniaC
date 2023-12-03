#include <iostream>
#include "Array.h"
#include "Array.cpp"
#include <algorithm>
using namespace std;



template <typename T>
T funkcja(T tab[], int size)
{
    T minimalny = tab [0];
    for(int i=0;i<size;i++)
    {
        if(tab[i]<minimalny)
        {
            minimalny = tab[i];
        }
    }
    cout<<"Element minimalny tablicy to "<<minimalny<<endl;
    return minimalny;
}

int main() {
    int tab[5] = {1,6,7,0,9};
    funkcja<int>(tab,5);

    string tabS[5] = {"Ola","Pola","Jane","Topola","Mary"};
    funkcja<string>(tabS,5);

    float tabF[5] = {4.4,1.7,1.9,1.3,8.6};
    funkcja<float>(tabF,5);

    double tab3 [3] = {3,5,1};
    funkcja<double>(tab3,3);


    Array<int> array1 = Array<int>(8);
   array1.showTablica();
   array1.addElem(1);
   array1.addElem(5);
    array1.addElem(6);
   array1.addElem(7);
    array1.addElem(8);
    array1.addElem(6);
   array1.addElem(9);
   array1.addElem(0);
   array1.showTablica();
   array1.sortowanieRosnaco();
    cout<<"\nPo posortowaniu: "<<endl;
   array1.showTablica();
   array1.maxElem();
   array1.getElem(4);


   Array<string> arrayB = Array<string>(10);
   arrayB.showTablica();
   arrayB.addElem("Sowa");
   arrayB.addElem("Kogut");
   arrayB.addElem("Pies");
   arrayB.addElem("Sikorka");
   arrayB.addElem("Salmonella");
   arrayB.addElem("Slowik");
   arrayB.addElem("Pirania");
   arrayB.addElem("Fish");
   arrayB.addElem("Sledzik");
   arrayB.addElem("Gwiazdka");
   arrayB.showTablica();
   arrayB.getElem(3);
   arrayB.maxElem();
   arrayB.sortowanieRosnaco();
   arrayB.showTablica();








    return 0;
}
