//
// Created by albin on 05/06/2019.
//ALUMNO ALEJANDRO MAMANI ANDIA// USER:ALEJANDRO1998ELEBEBECITO
#include <iostream>
#include "ArithProgression.h"
#include "GeoProgression.h"
#include "FibonacciProgression.h"
using namespace std;

int main() {

    GeoProgression r{5, 3125 , 5};
    cout<< "Progresion Geometrica:";
    for (auto i = r.begin(); i != r.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
    cout<< "Progresion Aritmetica:";
    ArithProgression s{1,16,2};
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    cout<< "Progresion de Fibbonacci:";
    FibonacciProgression s1{0, 1, 21};
     for (auto i = s1.begin(); i != s1.end(); i++)
     {
         cout << *i << " ";
     }
     cout << endl;

    return 0;
}