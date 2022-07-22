//
// Created by Michael Molchanov on 22.07.2022.
//

#ifndef SORTING_ISORTER_H
#define SORTING_ISORTER_H


class ISorter {
public:
    virtual void sort(int len, int *array) = 0;
};


#endif //SORTING_ISORTER_H
