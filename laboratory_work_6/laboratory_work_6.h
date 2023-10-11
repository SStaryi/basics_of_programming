//
// Created by Artyom on 11.10.2023.
//

#ifndef BASICS_OF_PROGRAMMING_LABORATORY_WORK_6_H
#define BASICS_OF_PROGRAMMING_LABORATORY_WORK_6_H

#include <math.h>
#include <stdio.h>

#include "../standart_function/standart_function.h"

/*
 * Задача №6.
 * Напишите функцию solve_x_2, которая выводит корни квадратного уравнения: ax^2 + bx + c = 0 (a ≠ 0)
 * Найденные корни должны быть выведены в теле функции. Если действительных корней нет,
 * выведите соответствующее сообщение.
 */
void solve_x_2(long long a, long long b, long long c);

/*
 * Задача №11.
 * Написать функцию, которая возвращает значение ’истина’, если можно составить треугольник
 * с целочисленными сторонами a, b, c (a, b, c ∈ N), ’ложь’ - в противном случае.
 */
bool is_triangle(int a, int b, int c);

/*
 * Задача №12.
 * Напишите функцию get_triangle_type_length, которая возвращает значение 0, если треугольник со
 * сторонами 𝑎, 𝑏, 𝑐 является остроугольным, 1 – если прямоугольным, 2 – тупоугольным, -1 –
 * если треугольник с такими сторонами не существует.
 */
int get_triangle_type_length(int a, int b, int c);

#endif //BASICS_OF_PROGRAMMING_LABORATORY_WORK_6_H
