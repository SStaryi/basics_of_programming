//
// Created by Artyom on 09.10.2023.
//

#include "standart_function.h"

int max2(int a, int b) {
    return a >= b ? a : b;
}

int min2(int a, int b) {
    return a >= b ? b : a;
}

long long ll_ceil_frac(long long a, long long b) {
    return a % b ? a / b + 1 : a / b;
}
