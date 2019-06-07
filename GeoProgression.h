//
// Created by albin on 07/06/2019.
//

#ifndef UNIDAD_5_STL_ITERADORES_ALEJANDRO1998ELEBEBECITO_GEOPROGRESSION_H
#define UNIDAD_5_STL_ITERADORES_ALEJANDRO1998ELEBEBECITO_GEOPROGRESSION_H

#include <math.h>
class GeoProgression_iterator
{
    int curr;
    int base;

    friend class GeoProgression;
    GeoProgression_iterator(int curr, int base):
           curr{curr}, base{base} {}
public:
    bool operator==(const GeoProgression_iterator& other) const;
    bool operator!=(const GeoProgression_iterator& other) const;
    int& operator*();
    GeoProgression_iterator& operator++();
    GeoProgression_iterator& operator++(int);
};
class GeoProgression{
    long int start;
    long int stop;
    long int base;
public:
    GeoProgression(int start, int stop, int base):start{start}, stop{stop}, base{base}{}
    using iterator = GeoProgression_iterator;
    iterator begin() const {
        return GeoProgression::iterator(start, base);
    }

    iterator end() const {
        return GeoProgression::iterator(stop, 0);
    }
};

bool GeoProgression_iterator::operator==(const GeoProgression_iterator &other) const {
    return curr == other.curr;
}

bool GeoProgression_iterator::operator!=(const GeoProgression_iterator &other) const {
    return curr < other.curr*base;
}

int &GeoProgression_iterator::operator*() {
    return curr;
}

GeoProgression_iterator &GeoProgression_iterator::operator++() {
    long temp = curr*base;
    curr = temp;
    return *this;

}

GeoProgression_iterator &GeoProgression_iterator::operator++(int) {
    auto it = this;
    ++(*this);
    return *it;
}


#endif //UNIDAD_5_STL_ITERADORES_ALEJANDRO1998ELEBEBECITO_GEOPROGRESSION_H
