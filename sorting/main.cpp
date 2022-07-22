#include <iostream>
#include "ISorter.h"
#include "BubbleSorter.h"

int main() {
    const int size = 9;
    int array[size] = {9, 1, 5, 4, 2, 3, 6, 7, 8};

    ISorter *sorter = new BubbleSorter;

    sorter->sort(size, array);

    for (int i: array) {
        std::cout << i;
    }

    free(sorter);

    return 0;
}
