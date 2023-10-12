//
// Created by Artyom on 12.10.2023.
//

#ifndef BASICS_OF_PROGRAMMING_MATRIX_H
#define BASICS_OF_PROGRAMMING_MATRIX_H

#include <stdio.h>
#include <malloc.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>

#include "../standart_function/standart_function.h"

// Структура описывающая матрицу
typedef struct Matrix {
    long long **values; // значения
    long long n_rows;   // кол-во строк
    long long n_cols;   // кол-во столбцов
} Matrix;

// Структура описывающая позицию элемента в матрице
typedef struct Position {
    long long row_pos;  // номер строки
    long long col_pos;  // номер столбца
} Position;

// Выделение памяти для матрицы a размера m * n
Matrix get_matrix(const long long n_rows, const long long n_cols);

// Освобождение памяти выделенной под матрицу
void free_matrix(Matrix a);

// Выделение памяти для массива матриц a размера k, каждвя из которых имеет размер n * m
Matrix *get_array_of_matrix(const long long k, const long long n, const long long m);

// Освобождение памяти для массива матриц a размера k, каждая из которых имеет размер n * m
void free_array_of_matrix(Matrix *a, const long long k);

// Ввод матрицы a размера n * m
void input_matrix(Matrix a);

// Вывод матрицы a размера n * m
void output_matrix(Matrix a);

// Ввод массива матриц a размера n
void input_array_of_matrix(const Matrix *a, const long long n);

// Вывод массива матриц a размера k, каждая из которых n * m
void output_array_of_matrix(const Matrix *a, const long long n);

// Обмен 2-ух строк в матрице
void swap_rows(Matrix a, const long long i1, const long long i2);

// Обмен 2-ух столбцов в матрице
void swap_cols(Matrix a, long long j1, long long j2);

// Сортировка строк матрицы по критерию
void sort_rows_by_criteria(Matrix a, long long (*criteria)(const long long *, long long));

// Сортировка столбцов матрицы по критерию
void sort_cols_by_criteria(Matrix a, long long (*criteria)(const long long *, long long));

// Возвращает значение 'истина', если матрица m квадратная
bool is_square_matrix(Matrix m);

// Возвращает 'истина', если матрицы m1 и m2 равны
bool are_two_matrices_equal(Matrix m1, Matrix m2);

// Возвращает 'истина', если матрица является единичной
bool is_e_matrix(Matrix m);

// Транспонирует квадратную матрицу m
void transpose_square_matrix(Matrix *m);

// Транспонирует матрицу m
void transpose_matrix(Matrix *m);

// Возвращает 'истина', если матрица m симметричная
bool is_symmetric_matrix(Matrix m);

// Позиция минимума в матрице
Position get_min_value_pos(Matrix a);

// Позиция максимума в матрице
Position get_max_value_pos(Matrix a);

// Преобразовывает одномерный массив в двумерный (матрицу)
Matrix create_matrix_from_array(const long long *a, long long n_rows, long long n_cols);

// Возвращает указатель на нулевую матрицу массива из n_matrices матриц, размещённых в
// динамической памяти, построенных из массива a
Matrix *create_array_of_matrix_from_array(const long long *values, size_t n_matrices, size_t n_rows,
                                          size_t n_cols);

#endif //BASICS_OF_PROGRAMMING_MATRIX_H
