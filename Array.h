//
// Created by szyns on 03.12.2023.
//

#ifndef CWICZENIAB_ARRAY_H
#define CWICZENIAB_ARRAY_H
#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

template <typename T>
class Array {
private:
    T* tablica;
    int maxSize;
    int firstFreeIndex=0;
public:
    explicit Array(int max)
    {
        maxSize = max;
        tablica = new T[maxSize];
    }
    Array()
        {
            maxSize=10;
            tablica = new T[10];

        }

    virtual ~Array()
    {
        delete[]tablica;
    }
    void sortowanieRosnaco() {

        sort(&tablica[0], &tablica[maxSize]);
    }
    T maxElem(){
            T najwiekszy = tablica[0];
            for(int i=0;i<maxSize;i++)
            {
                if(tablica[i]>najwiekszy)
                {
                    najwiekszy=tablica[i];
                }
            }

            cout<<"\nNajwiekszym elementem tablicy jest "<<najwiekszy<<endl;
            return najwiekszy;

    }
    void showTablica()
    {
        cout<<"\nElementy tablicy: "<<endl;
        for(int i=0;i< maxSize;i++)
        {
            cout<<tablica[i]<<",";
        }
    }
    void addElem(T elem)
    {
        if(firstFreeIndex<maxSize)
        {
            tablica[firstFreeIndex]=elem;
            firstFreeIndex++;
        }
    }
    T getElem(int inx)
    {
        if (inx >= 0 && inx < maxSize) {
            cout<<"Element znajdujacy sie na "<<inx<<". indeksie tablicy to: "<<tablica[inx];
            return tablica[inx];
        } else {
            cout << "Podany index znajduje sie poza tablica" << endl;
            return tablica[0];
        }
    }
};

template<>
class Array<string>
{
private:
    string* tablica;
    int maxSize;
    int firstFreeIndex;
public:
    explicit Array(int max)
    {
        maxSize =  max;
        tablica = new string[maxSize];
        firstFreeIndex=0;
    }
    Array()
    {
        maxSize=10;
        tablica = new string[10];
        firstFreeIndex=0;

    }

    virtual ~Array()
    {
        delete[]tablica;
    }
    static bool compare(const string &a, const string &b)
    {
        return a.length()<b.length();
    }
    void sortowanieRosnaco()
    {
        cout<<"\nPo sortowaniu"<<endl;
        sort(&tablica[0],&tablica[maxSize], compare);

    }
    string maxElem()
    {
        string najdluzszy = tablica[0];
        for(int i=0;i<maxSize-1;i++)
        {
            if(tablica[i].length()>najdluzszy.length())
            {
                najdluzszy = tablica[i];
            }
        }
        cout<<"Najdluzsze slowo: "<<najdluzszy<<endl;
        return najdluzszy;
    }
    void showTablica()
    {
        cout<<"\nElementy tablicy: "<<endl;
        for(int i=0;i< maxSize;i++)
        {
            cout<<tablica[i]<<",";

        }
    }
    void addElem(string elem)
    {
        if(firstFreeIndex<maxSize)
        {
            tablica[firstFreeIndex]=elem;
            firstFreeIndex++;
        }
    }
    string getElem(int inx)
    {
        if (inx >= 0 && inx < maxSize) {
            cout<<"\nElement znajdujacy sie na "<<inx<<". indeksie tablicy to: "<<tablica[inx]<<"\n";
            return tablica[inx];
        } else {
            cout << "\nPodany index znajduje sie poza tablica\n" << endl;
            return tablica[0];
        }
    }
};



#endif //CWICZENIAB_ARRAY_H
