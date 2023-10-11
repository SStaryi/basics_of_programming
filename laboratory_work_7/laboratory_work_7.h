//
// Created by Artyom on 11.10.2023.
//

#ifndef BASICS_OF_PROGRAMMING_LABORATORY_WORK_7_H
#define BASICS_OF_PROGRAMMING_LABORATORY_WORK_7_H

#include <stdio.h>
#include <stdbool.h>

#include "../standart_function/standart_function.h"

/*
 * Задача №1.
 * Вывести восьмеричное представление записи числа x.
 */
void print_oct(long long unsigned x);

/*
 * Задача №2.
 * Напишите функцию delete_oct_number, которая удаляет цифру digit в записи данного восьмеричного числа x.
 * Вывод результата можно произвести в любой системе счисления.
 */
void delete_oct_number(long long unsigned x, unsigned digit);

/*
 * Задача №3.
 * Напишите функцию swap_pair_bites, которая меняет местами соседние цифры пар в двоичной записи
 * данного натурального числа. Обмен начинается с младших разрядов. Непарная старшая цифра остается
 * без изменения.
 */
void swap_pair_bites(long long unsigned x);

/*
 * Задача №4.
 * Напишите функцию invert_hex, которая преобразует число x, переставляя в обратном порядке цифры
 * в шестнадцатеричном представлении данного натурального числа.
 */
void invert_hex(unsigned int x);

/*
 * Задача №5.
 * Напишите функцию is_bin_poly, которая возвращает значение ’истина’, если число x является палиндромом
 * в двоичном представлении, иначе - ’ложь’.
 */
bool is_bin_poly(long long x);

/*
 * Задача №6.
 * Даны два двухбайтовых целых sh1 и sh2. Получить целое число, последовательность четных битов
 * которого представляет собой значение sh1, а последовательность нечетных – значение sh2.
 */
long long sequence_of_two_bin(long long sh1, long long sh2);

/*
 * Задача №7.
 * Определить максимальную длину последовательности подряд идущих битов, равных единице в
 * двоичном представлении данного целого числа.
 */
long long max_number_of_contractors_1(long long x);

#endif //BASICS_OF_PROGRAMMING_LABORATORY_WORK_7_H
