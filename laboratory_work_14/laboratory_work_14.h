//
// Created by Artyom on 13.10.2023.
//

#ifndef BASICS_OF_PROGRAMMING_LABORATORY_WORK_14_H
#define BASICS_OF_PROGRAMMING_LABORATORY_WORK_14_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>

#include "../matrix/matrix.h"
#include "../sorting/sorting.h"

/*
 * Задача №1.
 * Дана квадратная матрица, все элементы которой различны. Поменять местами строки, в которых
 * находятся максимальный и минимальный элементы.
 */
void swap_the_rows_of_the_matrix_with_the_max_and_min(Matrix a);

/*
 * Задача №6.
 * Даны две квадратные матрицы A и B. Определить, являются ли они взаимно обратными (A = B^(-1)).
 */
bool is_mutually_inverse_matrices(Matrix m1, Matrix m2);

/*
 * Задача №7.
 * Дана прямоугольная матрица. Назовем псевдодиагональю множество элементов этой матрицы, лежащих
 * на прямой, параллельной прямой, содержащей элементы a_(i,i). Найти сумму максимальных элементов
 * всех псевдодиагоналей данной матрицы.
 */
long long find_sum_of_maxes_of_pseudo_diagonal(Matrix m);

/*
 * Задача №10.
 * Определить количество классов эквивалентных строк данной прямоугольной матрицы. Строки
 * считать эквивалентными, если равны суммы их элементов.
 */
long long count_eq_classes_by_rows_sum(Matrix m);

/*
 * Задача №13.
 * Дан массив матриц одного размера. Определить число матриц, строки которых упорядочены по
 * неубыванию элементов.
 */
long long count_non_descending_rows_matrices(Matrix *ms, long long n_matrix);

#endif //BASICS_OF_PROGRAMMING_LABORATORY_WORK_14_H
