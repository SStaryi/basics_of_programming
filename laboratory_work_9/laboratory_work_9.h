//
// Created by Artyom on 12.10.2023.
//

#ifndef BASICS_OF_PROGRAMMING_LABORATORY_WORK_9_H
#define BASICS_OF_PROGRAMMING_LABORATORY_WORK_9_H

#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
#include <limits.h>
#include <math.h>

#include "../standart_function/standart_function.h"
#include "../sorting/sorting.h"

//Структура описывающая 2 максимальноблизких к x по значению элемента массива
typedef struct min_to_x {
    int max_left;
    int min_right;
} min_to_x;

/*
 * Задача №1.
 * Если возможно, то упорядочить данный массив размера n по убыванию, иначе массив оставить без
 * изменения.
 */
void ordering_an_array(int *a, size_t n);

/*
 * Задача №2.
 * Дана целочисленная последовательность. Упорядочить по неубыванию часть последовательности,
 * заключённую между первым вхождением максимального значения и последним вхождением минимального.
 */
void sorting_by_selection_between_1st_max_and_last_min(int *a, size_t n);

/*
 * Задача №3.
 * Если данная последовательность не упорядочена ни по неубыванию, ни по невозрастанию, найти
 * среднее геометрическое положительных членов.
 */
double the_geometric_mean_of_the_positive_elems_of_the_array(int *a, size_t n);

/*
 * Задача №4.
 * Если число x встречается в данной целочисленной последовательности, то упорядочить по неубыванию
 * часть последовательности после первого вхождения x.
 */
void sorting_items_after_x(int *a, const size_t n, const int x);

/*
 * Задача №5.
 * Даны две последовательности. Получить упорядоченную по невозрастанию последовательность состоящую
 * из тех членов первой последовательности, которых нет во второй.
 */
void unique_elems_of_2_arrays(int *a, size_t size_a, int *b, size_t size_b, int **c, size_t *size_c);

/*
 * Задача №6.
 * Дана целочисленная последовательность, содержащая как положительные, так и отрицательные
 * числа. Упорядочить последовательность следующим образом: сначала идут отрицательные
 * числа, упорядоченные по невозрастанию, потом положительные, упорядоченные по неубыванию.
 */
void sorting_1st_negative_in_descending_order_then_positive_in_ascending_order(int *a, size_t n);

/*
 * Задача №7.
 * Дана целочисленная последовательность и целое число x. Определить, есть ли x среди
 * членов последовательности, и если нет, то найти члены последовательности, ближайшие к x снизу
 * и сверху.
 */
min_to_x the_numbers_closests_to_x_in_the_array(int *a, const size_t n, const int x);

/*
 * Задача №8.
 * Дана целочисленная последовательность. Получить массив из уникальных элементов последовательности.
 */
void unique_array_elems(int *a, const size_t size_a, int **b, size_t *size_b);

/*
 * Задача №9.
 * Определить, можно ли, переставив члены данной целочисленной последовательности длины n,
 * получить геометрическую прогрессию со знаменателем q. Разрешимое допущение: знаменатель
 * прогрессии – целое число.
 */
bool is_geometric_progression(int *a, const size_t n);

#endif //BASICS_OF_PROGRAMMING_LABORATORY_WORK_9_H
