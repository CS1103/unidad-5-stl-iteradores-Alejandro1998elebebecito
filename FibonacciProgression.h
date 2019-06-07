//
// Created by albin on 07/06/2019.
//

#ifndef UNIDAD_5_STL_ITERADORES_ALEJANDRO1998ELEBEBECITO_FIBONACCIPROGRESSION_H
#define UNIDAD_5_STL_ITERADORES_ALEJANDRO1998ELEBEBECITO_FIBONACCIPROGRESSION_H
class FibonacciProgression_iterator {
    int curr;
    int step;
    friend class FibonacciProgression;
    FibonacciProgression_iterator(int curr, int step):
            curr{curr}, step{step} {}
public:
    bool operator==(const FibonacciProgression_iterator& other) const;
    bool operator!=(const FibonacciProgression_iterator& other) const;
    int& operator*();
    FibonacciProgression_iterator& operator++();
    FibonacciProgression_iterator& operator++(int);
};
class FibonacciProgression
{
    long int start;
    long int stop;
    long int prev;
public:
    FibonacciProgression(long int prev, long int start, long int stop):prev{prev}, start{start}, stop{stop}{}
    using iterator = FibonacciProgression_iterator;
    iterator begin() const {
        return FibonacciProgression::iterator(start, prev);
    }

    iterator end() const {
        return FibonacciProgression::iterator(stop, 0);
    }
};




bool FibonacciProgression_iterator::operator==(const FibonacciProgression_iterator &other) const {
    return curr == other.curr;
}

bool FibonacciProgression_iterator::operator!=(const FibonacciProgression_iterator &other) const {
    return curr < other.curr;
}

int &FibonacciProgression_iterator::operator*() {
    return curr;
}

FibonacciProgression_iterator &FibonacciProgression_iterator::operator++() {
    long output = step + curr;
    step = curr;
    curr = output;
    return *this;
}

FibonacciProgression_iterator &FibonacciProgression_iterator::operator++(int) {
    auto it = this;
    ++(*this);
    return *it;
}


#endif //UNIDAD_5_STL_ITERADORES_ALEJANDRO1998ELEBEBECITO_FIBONACCIPROGRESSION_H
