//
// Created by Artyom on 12.10.2023.
//

#include "matrix.h"

// Выделение памяти для матрицы a размера m * n
Matrix get_matrix(const long long n_rows, const long long n_cols) {
    long long **a = (long long **) malloc(sizeof(long long *) * n_rows);

    for (size_t i = 0; i < n_rows; i++)
        a[i] = (long long *) malloc(sizeof(long long) * n_cols);

    Matrix matrix = {
            a,
            n_rows,
            n_cols
    };
    return matrix;
}

// Освобождение памяти выделенной под матрицу
void free_matrix(Matrix a) {
    for (size_t i = 0; i < a.n_rows; i++)
        free(a.values[i]);

    free(a.values);
}

// Выделение памяти для массива матриц a размера k, каждвя из которых имеет размер n * m
Matrix *get_array_of_matrix(const long long k, const long long n, const long long m) {
    Matrix *a = (Matrix *) malloc(sizeof(Matrix) * k);

    for (size_t i = 0; i < k; i++)
        a[i] = get_matrix(n, m);

    return a;
}

// Освобождение памяти для массива матриц a размера k, каждвя из которых имеет размер n * m
void free_array_of_matrix(Matrix *a, const long long k) {
    for (size_t i = 0; i < k; i++)
        free_matrix(a[i]);

    free(a);
}

// Ввод матрицы a размера n * m
void input_matrix(Matrix a) {
    for (size_t i = 0; i < a.n_rows; i++)
        for (size_t j = 0; j < a.n_cols; j++)
            scanf("%lld", &a.values[i][j]);
}

// Вывод матрицы a размера n * m
void output_matrix(Matrix a) {
    for (size_t i = 0; i < a.n_rows; i++) {
        for (size_t j = 0; j < a.n_cols; j++)
            printf("%lld ", a.values[i][j]);

        printf("\n");
    }
}

// Ввод массива матриц a размера n
void input_array_of_matrix(const Matrix *a, const long long n) {
    for (size_t i = 0; i < n; i++)
        input_matrix(a[i]);
}

// Вывод массива матриц a размера k, каждая из которых n * m
void output_array_of_matrix(const Matrix *a, const long long n) {
    for (size_t i = 0; i < n; i++)
        output_matrix(a[i]);
}

void swap_pointers(long long **a, long long **b) {
    long long *t = *a;
    *a = *b;
    *b = t;
}

// Обмен 2-ух строк в матрице
void swap_rows(Matrix a, const long long i1, const long long i2) {
    assert(0 <= i1 && i1 <= a.n_rows);
    assert(0 <= i2 && i2 <= a.n_rows);

    swap_pointers(&a.values[i1], &a.values[i2]);
}

// Обмен 2-ух столбцов в матрице
void swap_cols(Matrix a, long long j1, long long j2) {
    assert(0 <= j1 && j1 <= a.n_cols);
    assert(0 <= j2 && j2 <= a.n_cols);

    for (size_t i = 0; i < a.n_rows; i++)
        swap(&a.values[i][j1], &a.values[i][j2], sizeof(a.values[i][j1]));
}

// Сортировка строк матрицы по критерию
void sort_rows_by_criteria(Matrix a, long long (*criteria)(const long long *, long long)) {
    long long *criteria_values = (long long *) malloc(sizeof(long long) * a.n_rows);

    for (size_t i = 0; i < a.n_rows; i++)
        criteria_values[i] = criteria(a.values[i], a.n_cols);

    for (size_t i = 0; i < a.n_rows; i++) {
        long long min_index = i;

        for (size_t j = i + 1; j < a.n_rows; j++)
            if (criteria_values[j] < criteria_values[min_index])
                min_index = j;

        if (i != min_index) {
            swap(&criteria_values[i], &criteria_values[min_index], sizeof(criteria_values[i]));
            swap_rows(a, i, min_index);
        }
    }

    free(criteria_values);
}

// Сортировка столбцов матрицы по критерию
void sort_cols_by_criteria(Matrix a, long long (*criteria)(const long long *, long long)) {
    long long *criteria_values = (long long *) malloc(sizeof(long long) * a.n_cols);
    long long *column = (long long *) malloc(sizeof(long long) * a.n_rows);

    for (size_t j = 0; j < a.n_cols; j++) {
        for (size_t i = 0; i < a.n_rows; i++)
            column[i] = a.values[i][j];

        criteria_values[j] = criteria(a.values[j], a.n_cols);
    }

    for (size_t i = 0; i < a.n_cols; i++) {
        long long min_index = i;

        for (size_t j = i + 1; j < a.n_rows; j++)
            if (criteria_values[j] < criteria_values[min_index])
                min_index = j;

        if (i != min_index) {
            swap(&criteria_values[i], &criteria_values[min_index], sizeof(criteria_values[i]));
            swap_cols(a, i, min_index);
        }
    }

    free(criteria_values);
    free(column);
}

// Возвращает значение 'истина', если матрица m квадратная
bool is_square_matrix(Matrix m) {
    return m.n_cols == m.n_rows;
}

// Возвращает 'истина', если матрицы m1 и m2 равны
bool are_two_matrices_equal(Matrix m1, Matrix m2) {
    if (m1.n_cols != m2.n_cols || m1.n_rows != m2.n_rows)
        return false;

    for (size_t i = 0; i < m1.n_rows; i++)
        for (size_t j = 0; j < m1.n_cols; j++)
            if (m1.values[i][j] != m2.values[i][j])
                return false;

    return true;
}

// Возвращает 'истина', если матрица является единичной
bool is_e_matrix(Matrix m) {
    if (m.n_cols == m.n_rows)
        return false;

    long long n = m.n_rows;

    for (size_t i = 0; i < n; i++)
        for (size_t j = 0; j < n; j++)
            if ((i == j) != m.values[i][j])
                return false;

    return true;
}

// Транспонирует квадратную матрицу m
void transpose_square_matrix(Matrix *m) {
    assert(m->n_cols == m->n_rows);

    for (size_t i = 0; i < m->n_rows; i++)
        for (size_t j = i + 1; j < m->n_cols; j++)
            swap(&m->values[i][j], &m->values[j][i], sizeof(m->values[i][j]));
}

// Транспонирует матрицу m
void transpose_matrix(Matrix *m) {
    Matrix t = get_matrix(m->n_cols, m->n_rows);

    for (size_t i = 0; i < m->n_rows; i++)
        for (size_t j = 0; j < m->n_cols; j++)
            t.values[j][i] = m->values[i][j];

    free_matrix(*m);
    *m = t;
}

// Возвращает 'истина', если матрица m симметричная
bool is_symmetric_matrix(Matrix m) {
    if (m.n_cols != m.n_rows)
        return false;

    Matrix mt = get_matrix(m.n_rows, m.n_cols);

    for (size_t i = 0; i < m.n_rows; i++)
        for (size_t j = 0; j < m.n_cols; j++)
            mt.values[i][j] = m.values[i][j];

    transpose_square_matrix(&mt);

    return are_two_matrices_equal(m, mt);
}

// Позиция минимума в матрице
Position get_min_value_pos(Matrix a) {
    long long i_min = 0;
    long long j_min = 0;

    for (size_t i = 0; i < a.n_rows; i++)
        for (size_t j = 0; j < a.n_cols; j++)
            if (a.values[i][j] < a.values[i_min][j_min]) {
                i_min = i;
                j_min = j;
            }

    Position result = {i_min, j_min};
    return result;
}

// Позиция максимума в матрице
Position get_max_value_pos(Matrix a) {
    long long i_max = 0;
    long long j_max = 0;

    for (size_t i = 0; i < a.n_rows; i++)
        for (size_t j = 0; j < a.n_cols; j++)
            if (a.values[i][j] > a.values[i_max][j_max]) {
                i_max = i;
                j_max = j;
            }

    Position result = {i_max, j_max};
    return result;
}

// Преобразовывает одномерный массив в двумерный (матрицу)
Matrix create_matrix_from_array(const long long *a, long long n_rows, long long n_cols) {
    Matrix m = get_matrix(n_rows, n_cols);

    long long k = 0;

    for (size_t i = 0; i < n_rows; i++)
        for (size_t j = 0; j < n_cols; j++)
            m.values[i][j] = a[k++];

    return m;
}

Matrix *create_array_of_matrix_from_array(const long long *values, size_t n_matrices, size_t n_rows,
                                          size_t n_cols) {
    Matrix *ms = get_array_of_matrix(n_matrices, n_rows, n_cols);
    long long l = 0;

    for (size_t k = 0; k < n_matrices; k++)
        for (size_t i = 0; i < n_rows; i++)
            for (size_t j = 0; j < n_cols; j++)
                ms[k].values[i][j] = values[l++];

    return ms;
}