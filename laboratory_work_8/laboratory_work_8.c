//
// Created by Artyom on 12.10.2023.
//

#include "laboratory_work_8.h"

size_t get_1st_x_index(int *a, const size_t n, int x) {
    for (size_t i = 0; i < n; i++)
        if (a[i] == x)
            return i;

    return -1;
}

size_t get_1st_negative_index(int *a, const size_t n) {
    for (size_t i = 0; i < n; i++)
        if (a[i] < 0)
            return i;

    return -1;
}

int get_last_even_index(int *a, const size_t n) {
    for (int i = n - 1; i >= 0; i--)
        if (!(a[i] % 2))
            return i;

    return -1;
}

long long count_negative(int *a, const size_t n) {
    long long negative_count = 0;

    for (size_t i = 0; i < n; i++)
        negative_count += a[i] < 0;

    return negative_count;
}

void reverse_array(int *a, const size_t n) {
    for (size_t i = 0, j = n - 1; i < j; i++, j--)
        swap(&a[i], &a[j], sizeof(int));
}

bool is_array_poly(int *a, const size_t n) {
    for (size_t i = 0, j = n - 1; i < j; i++, j--)
        if (a[i] != a[j])
            return false;

    return true;
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

void removing_odd_elems(int *a, size_t *n) {
    size_t i_read = 0;

    while (i_read < *n && a[i_read] % 2 == 0)
        i_read++;

    size_t i_write = i_read;

    while (i_read < *n) {
        if (a[i_read] % 2 == 0) {
            a[i_write] = a[i_read];
            i_write++;
        }

        i_read++;
    }

    *n = i_write;
}