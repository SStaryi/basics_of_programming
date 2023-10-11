//
// Created by Artyom on 12.10.2023.
//

#ifndef BASICS_OF_PROGRAMMING_LABORATORY_WORK_8_H
#define BASICS_OF_PROGRAMMING_LABORATORY_WORK_8_H

#include <stdio.h>
#include <stdbool.h>

#include "../standart_function/standart_function.h"

//Поиск позиции элемента со значением 𝑥 с начала массива
size_t get_1st_x_index(int *a, const size_t n, int x);

//Поиск позиции первого отрицательного элемента
size_t get_1st_negative_index(int *a, const size_t n);

//Поиск позиции последнего четного элемента
int get_last_even_index(int *a, const size_t n);

//Подсчёт количества отрицательных элементов
long long count_negative(int *a, const size_t n);

//Изменение порядка элементов массива на обратный
void reverse_array(int *a, const size_t n);

//Проверка массива на палиндром
bool is_array_poly(int *a, const size_t n);

//Сортировка массива выбором
void sorting_by_choice(int *a, const size_t n);

//Удаление всех нечётных элементов массива
void removing_odd_elems(int *a, size_t *n);

#endif //BASICS_OF_PROGRAMMING_LABORATORY_WORK_8_H
