//
// Created by Artyom on 12.10.2023.
//

#include "laboratory_work_10.h"

long long the_n_term_of_the_geometric_progression(const long long first_term, const long long denominator,
                                                  long long n) {
    if ((n--) == 1)
        return first_term;

    return the_n_term_of_the_geometric_progression
                   (first_term, denominator, n) * denominator;
}

// Функция-обёртка для search_in_sorted_sequence
long long search_in_sorted_sequence_(const long long *const a, const long long x, const long long i) {
    if (a[i] <= x)
        return i;

    return search_in_sorted_sequence_(a, x, i + 1);
}

long long search_in_sorted_sequence(long long *a, const long long x) {
    long long index = search_in_sorted_sequence_(a, x, 0);

    return a[index] == x ? index : -1;
}

// Функция-обёртка для is_fib_sum
bool is_fib_sum_(long long sum_ab, long long acc_sum, long long last_fib2, long long last_fib1) {
    acc_sum += last_fib1;

    if (acc_sum >= sum_ab)
        return acc_sum == sum_ab;

    return is_fib_sum_(sum_ab, acc_sum, last_fib1, last_fib1 + last_fib2);
}

bool is_fib_sum(long long a, long long b) {
    return is_fib_sum_(a + b, 1, 0, 1);
}