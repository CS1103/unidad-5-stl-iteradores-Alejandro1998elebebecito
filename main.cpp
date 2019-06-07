//
// Created by albin on 05/06/2019.
//
#include <iostream>
#include "ArithProgression.h"
#include "GeoProgression.h"
#include "FibonacciProgression.h"
using namespace std;

int main() {

    GeoProgression r{3, 90, 3};
    for (auto i = r.begin(); i != r.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;

    ArithProgression s{1,16,2};
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    FibonacciProgression s1{1, 2, 21};
     for (auto i = s1.begin(); i != s1.end(); i++)
     {
         cout << *i << " ";
     }
     cout << endl;

    return 0;
}