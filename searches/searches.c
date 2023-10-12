//
// Created by Artyom on 12.10.2023.
//

#include "searches.h"

int binary_search(const int *const a, const size_t n, const int x) {
    int left = -1;
    int right = n;

    while (right - left > 1) {
        int middle = left + (right - left) / 2;

        if (a[middle] <= x)
            left = middle;
        else
            right = middle;
    }

    return (left != -1 && a[left] == x) ? left : -1;
}

int binary_search_criteria(const int *a, const int n, int (*fcriteria)(int)) {
    int left = -1;
    int right = n;

    while (right - left > 1) {
        int middle = (left + right) / 2;

        if (fcriteria(a[middle]))
            right = middle;
        else
            left = middle;
    }

    return right;
}