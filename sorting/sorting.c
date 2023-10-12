//
// Created by Artyom on 12.10.2023.
//

#include "sorting.h"

int compare_ints(const void *a, const void *b) {
    int arg1 = *(const int *) a;
    int arg2 = *(const int *) b;

    if (arg1 < arg2)
        return -1;

    if (arg1 > arg2)
        return 1;

    return 0;
}

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

// Функция-обёртка для recursive_sorting_by_choice
void recursive_sorting_by_choice_(long long *a, size_t size, long long index) {
    if (index == size)
        return;

    long long minimal_index = min_index(a, index, size - 1);

    if (minimal_index != index)
        swap(&a[minimal_index], &a[index], sizeof(long long));

    recursive_sorting_by_choice_(a, size, index + 1);
}

void recursive_sorting_by_choice(long long *a, size_t size) {
    recursive_sorting_by_choice_(a, size, 0);
}
