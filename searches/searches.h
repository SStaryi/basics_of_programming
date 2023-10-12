//
// Created by Artyom on 12.10.2023.
//

#ifndef BASICS_OF_PROGRAMMING_SEARCHES_H
#define BASICS_OF_PROGRAMMING_SEARCHES_H

#include <stdio.h>

// Бинарный поиск
int binary_search(const int *const a, const size_t n, const int x);

// Бинарный поиск по критерию. Вернёт значение n, если все элементы не удовлетворяет критерию
int binary_search_criteria(const int *a, const int n, int (*fcriteria)(int));

#endif //BASICS_OF_PROGRAMMING_SEARCHES_H
