//
// Created by albin on 07/06/2019.
//

#ifndef UNIDAD_5_STL_ITERADORES_ALEJANDRO1998ELEBEBECITO_ARITHPROGRESSION_H
#define UNIDAD_5_STL_ITERADORES_ALEJANDRO1998ELEBEBECITO_ARITHPROGRESSION_H
/////Arith Progression Iterator/////
class ArithProgression_iterator {
    int curr;
    int step;
    friend class ArithProgression;
    ArithProgression_iterator(int curr, int step):
            curr{curr}, step{step} {}
public:
    bool operator==(const ArithProgression_iterator& other) const;
    bool operator!=(const ArithProgression_iterator& other) const;
    int& operator*();
    ArithProgression_iterator& operator++();
    ArithProgression_iterator& operator++(int);
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

bool ArithProgression_iterator::operator==(const ArithProgression_iterator &other) const {
    return curr == other.curr;
}

bool ArithProgression_iterator::operator!=(const ArithProgression_iterator &other) const {
    return curr < other.curr;
}

int &ArithProgression_iterator::operator*() {
    return curr;
}

ArithProgression_iterator &ArithProgression_iterator::operator++() {
    curr += step;
    return *this;
}

ArithProgression_iterator &ArithProgression_iterator::operator++(int) {
    auto it = this;
    ++(*this);
    return *it;
}
#endif //UNIDAD_5_STL_ITERADORES_ALEJANDRO1998ELEBEBECITO_ARITHPROGRESSION_H
