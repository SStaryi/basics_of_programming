//
// Created by Artyom on 12.10.2023.
//

#ifndef BASICS_OF_PROGRAMMING_LABORATORY_WORK_10_H
#define BASICS_OF_PROGRAMMING_LABORATORY_WORK_10_H

#include <stdbool.h>

/*
 * Задача №3.
 * Дан знаменатель и первый член геометрической прогрессии. Вычислить n-й член прогрессии.
 */
long long the_n_term_of_the_geometric_progression(const long long first_term, const long long denominator,
                                                  long long n);

/*
 * Задача №4.
 * Дана упорядоченная по убыванию последовательность целых чисел, записанная в массив. Определить, есть
 * ли среди членов данной последовательности число x, и если есть, найти номер этого члена.
 * Бинарным поиском не пользоваться.
 */
long long search_in_sorted_sequence(long long *a, const long long x);

/*
 * Задача №7.
 * Даны натуральные числа a и b. Определить, могут ли эти числа быть соседними членами
 * последовательности Фибоначчи.
 */
bool is_fib_sum(long long a, long long b);

#endif //BASICS_OF_PROGRAMMING_LABORATORY_WORK_10_H
