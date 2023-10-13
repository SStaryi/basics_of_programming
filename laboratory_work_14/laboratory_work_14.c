//
// Created by Artyom on 13.10.2023.
//

#include "laboratory_work_14.h"

void swap_the_rows_of_the_matrix_with_the_max_and_min(Matrix a) {
    Position max_value = get_max_value_pos(a);
    Position min_value = get_min_value_pos(a);

    swap_rows(a, max_value.row_pos, min_value.row_pos);
}

// Возвращает единичную матрицу размера n x n
Matrix identity_matrix(long long n) {
    Matrix matrix;
    matrix.n_rows = n;
    matrix.n_cols = n;
    matrix.values = (long long **) malloc(n * sizeof(long long *));

    for (long long i = 0; i < n; i++) {
        matrix.values[i] = (long long *) malloc(n * sizeof(long long));

        for (long long j = 0; j < n; j++)
            if (i == j)
                matrix.values[i][j] = 1;
            else
                matrix.values[i][j] = 0;
    }

    return matrix;
}

// Возвращает обратную матрицу к матрице matrix
Matrix invert_matrix(Matrix matrix) {
    Matrix identity = identity_matrix(matrix.n_rows);
    Matrix augmented = get_matrix(matrix.n_rows, 2 * matrix.n_cols);

    for (long long i = 0; i < matrix.n_rows; i++)
        for (long long j = 0; j < matrix.n_cols; j++) {
            augmented.values[i][j] = matrix.values[i][j];
            augmented.values[i][j + matrix.n_cols] = identity.values[i][j];
        }

    for (long long i = 0; i < matrix.n_rows; i++) {
        long long pivot_row = i;

        while (augmented.values[pivot_row][i] == 0) {
            pivot_row++;

            if (pivot_row == matrix.n_rows) {
                printf("Matrix is not invertible\n");

                free_matrix(identity);
                free_matrix(augmented);

                return get_matrix(0, 0);
            }
        }

        if (pivot_row != i) {
            long long *temp_row = augmented.values[i];

            augmented.values[i] = augmented.values[pivot_row];
            augmented.values[pivot_row] = temp_row;
        }

        long long pivot = augmented.values[i][i];

        for (long long j = 0; j < 2 * matrix.n_cols; j++)
            augmented.values[i][j] /= pivot;

        for (long long j = 0; j < matrix.n_rows; j++)
            if (j != i) {
                long long factor = augmented.values[j][i];

                for (long long k = 0; k < 2 * matrix.n_cols; k++)
                    augmented.values[j][k] -= factor * augmented.values[i][k];
            }
    }

    Matrix inverse = get_matrix(matrix.n_rows, matrix.n_cols);

    for (long long i = 0; i < matrix.n_rows; i++)
        for (long long j = 0; j < matrix.n_cols; j++)
            inverse.values[i][j] = augmented.values[i][j + matrix.n_cols];

    free_matrix(identity);
    free_matrix(augmented);

    return inverse;
}

bool is_mutually_inverse_matrices(Matrix m1, Matrix m2) {
    Matrix invert_m1 = get_matrix(m1.n_rows, m1.n_rows);
    invert_m1 = invert_matrix(m1);

    return are_two_matrices_equal(invert_m1, m2);
}

long long find_sum_of_maxes_of_pseudo_diagonal(Matrix m) {
    long long *max_values = (long long *) malloc((m.n_rows + m.n_cols - 1) * sizeof(long long));

    for (long long i = 0; i < m.n_rows + m.n_cols - 1; i++)
        max_values[i] = LLONG_MIN;

    for (long long i = 0; i < m.n_rows; i++)
        for (long long j = 0; j < m.n_cols; j++) {
            long long pseudo_diagonal_index = i - j + m.n_cols - 1;

            max_values[pseudo_diagonal_index] = ll_max2(max_values[pseudo_diagonal_index],
                                                        m.values[i][j]);
        }

    long long sum_of_maxes = 0;

    for (long long i = 0; i < m.n_rows + m.n_cols - 1; i++)
        sum_of_maxes += max_values[i];

    free(max_values);

    return sum_of_maxes;
}

long long count_n_unique(long long *a, long long n) {
    if (!n)
        return 0;

    qsort(a, n, sizeof(long long), compare_ints);

    long long count = 1;

    for (long long i = 1; i < n; i++)
        if (a[i] != a[i - 1])
            count++;

    return count;
}


long long count_eq_classes_by_rows_sum(Matrix m) {
    if (!m.n_rows)
        return 0;

    long long *row_sums = (long long *) malloc(m.n_rows * sizeof(long long));

    for (long long i = 0; i < m.n_rows; i++) {
        row_sums[i] = 0;

        for (long long j = 0; j < m.n_cols; j++)
            row_sums[i] += m.values[i][j];
    }

    long long n_unique = count_n_unique(row_sums, m.n_rows);

    free(row_sums);

    return n_unique;
}

bool is_non_descending_sorted(long long *a, long long n) {
    for (long long i = 1; i < n; i++)
        if (a[i] < a[i - 1])
            return false;

    return true;
}

bool has_all_non_descending_rows(Matrix m) {
    for (long long i = 0; i < m.n_rows; i++)
        if (!is_non_descending_sorted(m.values[i], m.n_cols))
            return false;

    return true;
}

long long count_non_descending_rows_matrices(Matrix *ms, long long n_matrix) {
    long long count = 0;

    for (long long i = 0; i < n_matrix; i++)
        if (has_all_non_descending_rows(ms[i]))
            count++;

    return count;
}