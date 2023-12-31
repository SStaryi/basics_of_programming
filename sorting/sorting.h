//
// Created by Artyom on 12.10.2023.
//

#ifndef BASICS_OF_PROGRAMMING_SORTING_H
#define BASICS_OF_PROGRAMMING_SORTING_H

#include "../standart_function/standart_function.h"

// Функция-компаратор для qsort
int compare_ints(const void *a, const void *b);

//Сортировка массива a размера n выбором
void sorting_by_choice(int *a, const size_t n);

//Рекурсивная сортировка выбором
void recursive_sorting_by_choice(long long *a, size_t size);

#endif //BASICS_OF_PROGRAMMING_SORTING_H
