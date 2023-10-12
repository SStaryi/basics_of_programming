//
// Created by Artyom on 12.10.2023.
//

#ifndef BASICS_OF_PROGRAMMING_LABORATORY_WORK_11_H
#define BASICS_OF_PROGRAMMING_LABORATORY_WORK_11_H

#include <stdio.h>
#include <assert.h>

#include "../standart_function/standart_function.h"

//
typedef struct Fraction {
    int numerator;      // числитель
    int denumerator;     // знаменатель
} Fraction;

/*
 * Задача a.
 * Реализуйте функцию input_fraction ввода структуры Fraction. Пример ввода, который должен
 * обрабатываться программой: ‘5/7’, ‘2/17’.
 */
void input_fraction(Fraction *f);

/*
 * Задача b.
 * Реализуйте функцию input_fractions ввода массива структур Fraction.
 */
void input_fractions(Fraction *f, size_t n);

/*
 * Задача с.
 * Реализуйте функцию output_fraction вsвода структурs Fraction в формате ‘5/7’.
 */
void output_fraction(Fraction f);

/*
 * Задача d.
 * Реализуйте функцию output_fractions вывода массива структур Fraction.
 */
void output_fractions(Fraction *f, size_t n);

/*
 * Задача g.
 * Реализуйте функцию simple_fraction для сокращения дроби a.
 */
void simple_fraction(Fraction *f);

/*
 * Задача h.
 * Реализуйте функцию mul_fraction умножения двух дробей a и b.
 */
Fraction mul_fraction(Fraction f1, Fraction f2);

/*
 * Задача i.
 * Реализуйте функцию div_fraction деления двух дробей a и b.
 */
Fraction div_fraction(Fraction f1, Fraction f2);

/*
 * Задача j.
 * Реализуйте функцию add_fraction сложения двух дробей a и b.
 */
Fraction add_fraction(Fraction f1, Fraction f2);

/*
 * Задача k.
 * Реализуйте функцию sub_fraction вычитания двух дробей a и b.
 */
Fraction sub_fraction(Fraction f1, Fraction f2);

/*
 * Задача l.
 * Реализуйте функцию для поиска суммы n дробей.
 */
Fraction sum_fractions(Fraction *f, size_t n);

#endif //BASICS_OF_PROGRAMMING_LABORATORY_WORK_11_H
