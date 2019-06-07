//
// Created by albin on 05/06/2019.
//

#ifndef UNIDAD_5_STL_ITERADORES_ALEJANDRO1998ELEBEBECITO_PROGRESSION_H
#define UNIDAD_5_STL_ITERADORES_ALEJANDRO1998ELEBEBECITO_PROGRESSION_H

class Progression
{
protected:
    long start;
    long stop;
public:
    Progression();
    virtual long firstValue();
    virtual long nextValue() = 0;
};

///////////////////////GEO PROGRESSION//////
class GeoProgression
{
    long base;
public:
    GeoProgression();
    GeoProgression(long base);
    long nextValue();
};

class FibonacciProgression
{
    long prev;
public:
    FibonacciProgression();
    FibonacciProgression(long prev, long first);
    long nextValue();S
};

#endif //UNIDAD_5_STL_ITERADORES_ALEJANDRO1998ELEBEBECITO_PROGRESSION_H
