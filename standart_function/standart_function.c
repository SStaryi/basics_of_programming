//
// Created by Artyom on 09.10.2023.
//

#include "standart_function.h"

int max2(int a, int b) {
    return a > b ? a : b;
}

int max3(int a, int b, int c) {
    return max2(max2(a, b), c);
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

void sort2(int *a, int *b) {
    if (*a > *b)
        swap(a, b, sizeof(int));
}

void sort3(int *a, int *b, int *c) {
    sort2(a, b);
    sort2(b, c);
    sort2(a, b);
}

void f_sort2(float *a, float *b) {
    if (*a > *b)
        swap(a, b, sizeof(float));
}

void f_sort3(float *a, float *b, float *c) {
    f_sort2(a, b);
    f_sort2(b, c);
    f_sort2(a, b);
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

long double ld_abs(long double a) {
    return a < 0 ? -a : a;
}

int sign(long long a) {
    return a ? a / abs(a) : 0;
}

double get_distance(int x1, int y1, int x2, int y2) {
    return (double) sqrt((double) pow(x2 - x1, 2) + (double) pow(y2 - y1, 2));
}

#define CODE_0 48

bool is_digit(char x) {
    int code = x - CODE_0;

    return 0 <= code && code <= 9;
}

bool is_prime(long long a) {
    long long d = 3;
    long long max_potential_divider = (long long) sqrt((double) a);
    long long is_prime_number = !(a == 1 || !(a % 2) && a != 2);

    while (d <= max_potential_divider && is_prime_number) {
        is_prime_number = a % d;
        d += 2;
    }

    return is_prime_number;
}

void input_array(long long *a, const size_t n) {
    for (size_t i = 0; i < n; i++)
        scanf("%lld", &a[i]);
}

void output_array(const int *a, const size_t n) {
    for (size_t i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
}

void inserting_an_elem_into_an_array(int *a, size_t *n, const size_t position, const int value) {
    for (size_t i = *n - 1; i >= position; i--)
        a[i + 1] = a[i];

    a[position] = value;
    (*n)++;
}

void adding_an_elem_to_the_end_of_the_array(int *a, size_t *n, int value) {
    a[*n] = value;
    (*n)++;
}

void deletin_an_item_while_maintaining_order(int *a, size_t *n, size_t position) {
    for (size_t i = position; i < *n; i++)
        a[i] = a[i + 1];

    (*n)--;
}

void deleting_an_item_without_preserving_the_order(int *a, size_t *n, size_t position) {
    (*n)--;
    a[position] = a[*n];
}