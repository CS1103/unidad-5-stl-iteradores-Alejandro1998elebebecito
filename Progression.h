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

//////Arith Progression Iterator/////
class ArithProgression_iterator {
    int curr;
    int step;
    friend class ArithProgression;
    range_iterator(int curr, int step):
            curr{curr}, step{step} {}
public:
    bool operator==(const range_iterator& other) const;
    bool operator!=(const range_iterator& other) const;
    int& operator*();
    range_iterator& operator++();
    range_iterator& operator++(int);
};
class ArithProgression
{
    long int start;
    long int stop;
    long int step;
public:
    ArithProgression(int stop):start{0}, stop{stop}, step{1} {}
    ArithProgression(int start, int stop):start{start},
                               stop{stop}, step{1} {}
    ArithProgression(int start, int stop, int step):start{start},
                                         stop{stop}, step{step} {}
    using iterator = ArithProgression_iterator;
    iterator begin() const {
        return ArithProgression::iterator(start, step);
    }

    iterator end() const {
        return ArithProgression::iterator(stop, step);
    }
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
