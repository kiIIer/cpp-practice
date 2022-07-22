//
// Created by Michael Molchanov on 22.07.2022.
//

#ifndef SORTING_BUBBLESORTER_H
#define SORTING_BUBBLESORTER_H


#include "ISorter.h"

class BubbleSorter : public ISorter {
public:
    void sort(int len, int *array) override {
        int temp = 0;

        for (int i = 0; i < len; i++) {
            for (int j = i; j < len - 1; j++) {
                if (array[i] > array[j]) {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
    }
};


#endif //SORTING_BUBBLESORTER_H
