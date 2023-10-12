//
// Created by Artyom on 09.10.2023.
//

#ifndef BASICS_OF_PROGRAMMING_STANDART_FUNCTION_H
#define BASICS_OF_PROGRAMMING_STANDART_FUNCTION_H

#include <math.h>
#include <stdbool.h>
#include <stdio.h>

// Возвращает максимальное из двух int'ов
int max2(int a, int b);

// Возвращает максимальное значение из трёх целочисленных переменных типа int
int max3(int a, int b, int c);

// Возвращает максимальное из двух long long'ов
long long ll_max2(long long a, long long b);

// Возвращает минимальное из двух int'ов
int min2(int a, int b);

// Возвращает минимальное из двух long long'ов
long long ll_min2(long long a, long long b);

// Обменивает size байт по адресам a и b
void swap(void *a, void *b, int size);

// Сортирует 2 числа a и b типа int по возрастанию
void sort2(int *a, int *b);

// Сортирует 3 числа a, b и c типа int по возрастанию
void sort3(int *a, int *b, int *c);

// Сортирует 2 числа a и b типа float по возрастанию
void f_sort2(float *a, float *b);

// Сортирует 3 числа a, b и c типа float по возрастанию
void f_sort3(float *a, float *b, float *c);

// Возвращает число типа long long с округлением вверх
long long ll_ceil_frac(long long a, long long b);

// Возводит число a типа long long в степень b типа long long
long long power(long long a, long long b);

// abs для вычисления модуля вещественного числа
long double ld_abs(long double a);

// Возвращает знак числа
int sign(long long a);

// Возвращает расстояние от точки A с координатой (x1, y1) до точки B (x2, y2)
double get_distance(int x1, int y1, int x2, int y2);

// Возвращает ‘истину’, если x является числом, иначе ‘ложь’
bool is_digit(char x);

// Возвращает ‘истину’, если число a простое, или ‘ложь’ в обратном случае
bool is_prime(long long a);

// Ввод массива a размера n
void input_array(long long *a, const size_t n);

// Вывод массива a размера n
void output_array(const int *a, const size_t n);

//Вставка элемента в массив с сохранением относительного порядка других элементов
void inserting_an_elem_into_an_array(int *a, size_t *n, const size_t position, const int value);

//Вставка элемента в конец массива
void adding_an_elem_to_the_end_of_the_array(int *a, size_t *n, int value);

//Удаление элемента с сохранением относительного порядка других элементов
void deletin_an_item_while_maintaining_order(int *a, size_t *n, size_t position);

//Удаление элемента без сохранения относительного порядка других элементов
void deleting_an_item_without_preserving_the_order(int *a, size_t *n, size_t position);

//Изменение порядка элементов массива на обратный
void reverse_array(int *a, const size_t n);

// Поиск индекса минимального эллемента в массиве линейно рекрсивно
long long min_index(long long *a, long long i, long long j);

#endif //BASICS_OF_PROGRAMMING_STANDART_FUNCTION_H