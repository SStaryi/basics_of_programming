//
// Created by Artyom on 12.10.2023.
//

#include "sorting.h"


void sorting_by_choice(int *a, const size_t n) {
    for (int i = 0; i < n; i++) {
        int max = a[i];
        int index = i;

        for (int j = i + 1; j < n; j++)
            if (a[j] > max) {
                max = a[j];
                index = j;
            }

        if (i != index)
            swap(&a[i], &a[index], sizeof(int));
    }
}