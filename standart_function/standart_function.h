//
// Created by Artyom on 09.10.2023.
//

#ifndef BASICS_OF_PROGRAMMING_STANDART_FUNCTION_H
#define BASICS_OF_PROGRAMMING_STANDART_FUNCTION_H

// Возвращает максимальное из двух int'ов
int max2(int a, int b);

// Возвращает максимальное из двух long long'ов
long long ll_max2(long long a, long long b);

// Возвращает минимальное из двух int'ов
int min2(int a, int b);

// Возвращает минимальное из двух long long'ов
long long ll_min2(long long a, long long b);

// Обменивает size байт по адресам a и b
void swap(void *a, void *b, int size);

// Возвращает число типа long long с округлением вверх
long long ll_ceil_frac(long long a, long long b);

// Возводит число a типа long long в степень b типа long long
long long power(long long a, long long b);

#endif //BASICS_OF_PROGRAMMING_STANDART_FUNCTION_H
