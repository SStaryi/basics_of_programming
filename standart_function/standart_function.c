//
// Created by Artyom on 09.10.2023.
//

#include "standart_function.h"

int max2(int a, int b) {
    return a > b ? a : b;
}

long long ll_max2(long long a, long long b) {
    return a > b ? a : b;
}

int min2(int a, int b) {
    return a > b ? b : a;
}

long long ll_min2(long long a, long long b) {
    return a > b ? b : a;
}

void swap(void *a, void *b, int size) {
    char *pa = a;
    char *pb = b;
    for (int i = 0; i < size; i++, pa++, pb++) {
        char t = *pa;
        *pa = *pb;
        *pb = t;
    }
}

long long ll_ceil_frac(long long a, long long b) {
    return a % b ? a / b + 1 : a / b;
}

long long power(long long a, long long n) {
    long long x = a;
    long long result = 1;

    while (n) {
        if (n % 2)
            result *= x;

        n /= 2;
        x *= x;
    }

    return result;
}