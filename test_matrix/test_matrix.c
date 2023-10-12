//
// Created by Artyom on 12.10.2023.
//

#include "test_matrix.h"

void test_swap_rows() {
    long long m_[] = {
            1, 2, 3, 4,
            5, 6, 7, 8,
            9, 10, 11, 12
    };
    Matrix m = create_matrix_from_array(m_, 3, 4);

    swap_rows(m, 0, 2);

    long long expected_array_[] = {
            9, 10, 11, 12,
            5, 6, 7, 8,
            1, 2, 3, 4
    };
    Matrix expected_array = create_matrix_from_array(expected_array_, 3, 4);

    assert(are_two_matrices_equal(expected_array, m));

    free_matrix(m);
    free_matrix(expected_array);
}

void test_swap_cols() {
    long long m_[] = {
            1, 2, 3, 4,
            5, 6, 7, 8,
            9, 10, 11, 12
    };
    Matrix m = create_matrix_from_array(m_, 3, 4);

    swap_cols(m, 0, 2);

    long long expected_array_[] = {
            3, 2, 1, 4,
            7, 6, 5, 8,
            11, 10, 9, 12
    };
    Matrix expected_array = create_matrix_from_array(expected_array_, 3, 4);

    assert(are_two_matrices_equal(expected_array, m));

    free_matrix(m);
    free_matrix(expected_array);
}

// Поиск суммы элементов в строке массива
long long get_sum(const long long *a, const long long n) {
    long long sum = 0;

    for (size_t i = 0; i < n; i++)
        sum += a[i];

    return sum;
}

void test_sort_rows_by_criteria() {
    long long m_[] = {
            5, 6, 7, 8,
            1, 2, 3, 4,
            9, 10, 11, 12
    };
    Matrix m = create_matrix_from_array(m_, 3, 4);

    sort_rows_by_criteria(m, get_sum);

    long long expected_array_[] = {
            1, 2, 3, 4,
            5, 6, 7, 8,
            9, 10, 11, 12
    };
    Matrix expected_array = create_matrix_from_array(expected_array_, 3, 4);

    assert(are_two_matrices_equal(expected_array, m));

    free_matrix(m);
    free_matrix(expected_array);
}

void test_sort_cols_by_criteria() {
    long long m_[] = {
            6, 5, 7, 8,
            2, 1, 3, 4,
            10, 9, 11, 12
    };
    Matrix m = create_matrix_from_array(m_, 3, 4);

    sort_cols_by_criteria(m, get_sum);

    long long expected_array_[] = {
            5, 6, 7, 8,
            1, 2, 3, 4,
            9, 10, 11, 12
    };
    Matrix expected_array = create_matrix_from_array(expected_array_, 3, 4);

    assert(are_two_matrices_equal(expected_array, m));

    free_matrix(m);
    free_matrix(expected_array);
}

void test_are_two_matrices_equal() {
    long long m_[] = {
            1, 2, 3, 4,
            5, 6, 7, 8,
            9, 10, 11, 12
    };
    Matrix m = create_matrix_from_array(m_, 3, 4);

    long long m1_[] = {
            1, 2, 3, 4,
            5, 6, 7, 8,
            9, 10, 11, 12
    };
    Matrix m1 = create_matrix_from_array(m1_, 3, 4);

    assert(are_two_matrices_equal(m, m1));

    free_matrix(m);
    free_matrix(m1);
}

void test_is_square_matrix() {
    long long m_[] = {
            6, 5, 7,
            2, 1, 3,
            10, 9, 11
    };
    Matrix m = create_matrix_from_array(m_, 3, 3);

    assert(is_square_matrix(m));

    free_matrix(m);
}

void test_is_e_matrix() {
    long long m_[] = {
            1, 0, 0,
            0, 1, 0,
            0, 0, 1
    };
    Matrix m = create_matrix_from_array(m_, 3, 3);

    assert(is_e_matrix(m));

    free_matrix(m);
}

void test_transpose_square_matrix() {
    long long m_[] = {
            6, 5, 7,
            2, 1, 3,
            10, 9, 11
    };
    Matrix m = create_matrix_from_array(m_, 3, 3);

    transpose_square_matrix(&m);

    long long expected_array_[] = {
            6, 2, 10,
            5, 1, 9,
            7, 3, 11
    };
    Matrix expected_array = create_matrix_from_array(expected_array_, 3, 3);

    assert(are_two_matrices_equal(expected_array, m));

    free_matrix(m);
    free_matrix(expected_array);
}

void test_transpose_matrix() {
    long long m_[] = {
            6, 5, 7, 8,
            2, 1, 3, 4,
            10, 9, 11, 12
    };
    Matrix m = create_matrix_from_array(m_, 3, 4);

    transpose_matrix(&m);

    long long expected_array_[] = {
            6, 2, 10,
            5, 1, 9,
            7, 3, 11,
            8, 4, 12
    };
    Matrix expected_array = create_matrix_from_array(expected_array_, 4, 3);

    assert(are_two_matrices_equal(expected_array, m));

    free_matrix(m);
    free_matrix(expected_array);
}

void test_is_symmetric_matrix() {
    long long m_[] = {
            1, 0, 0,
            0, 1, 0,
            0, 0, 1
    };
    Matrix m = create_matrix_from_array(m_, 3, 3);

    assert(is_symmetric_matrix(m));

    free_matrix(m);
}

void test_get_min_value_pos() {
    long long m_[] = {
            6, 2, 10,
            5, 1, 9,
            7, 3, 11,
            8, 4, 12
    };
    Matrix m = create_matrix_from_array(m_, 4, 3);

    Position min_pos = get_min_value_pos(m);

    assert(min_pos.row_pos == 1 && min_pos.col_pos == 1);

    free_matrix(m);
}

void test_get_max_value_pos() {
    long long m_[] = {
            6, 2, 10,
            5, 1, 9,
            7, 3, 11,
            8, 4, 12
    };
    Matrix m = create_matrix_from_array(m_, 4, 3);

    Position min_pos = get_max_value_pos(m);

    assert(min_pos.row_pos == 3 && min_pos.col_pos == 2);

    free_matrix(m);
}