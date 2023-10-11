//
// Created by Artyom on 12.10.2023.
//

#include "laboratory_work_9.h"

//Проверка массива a размера n на уникальность
bool uniqueness_of_the_array(int *a, size_t n) {
    for (size_t i = 0; i < n - 1; i++)
        for (size_t j = i + 1; j < n; j++)
            if (a[i] == a[j])
                return false;

    return true;
}

void ordering_an_array(int *a, size_t n) {
    if (uniqueness_of_the_array(a, n))
        for (size_t i = 0; i < n - 1; i++)
            for (size_t j = i + 1; j < n; j++)
                if (a[i] < a[j])
                    swap(&a[i], &a[j], sizeof(int));
}

//Обратная сортировка выбором массива a размера n
void reverse_sorting_by_choice(int *a, const size_t init_index, const size_t final_index) {
    for (size_t i = init_index; i < final_index - 1; i++) {
        int min = INT_MAX;
        int index = 0;

        for (size_t j = i; j < final_index; j++)
            if (a[j] < min) {
                min = a[j];
                index = j;
            }

        if (i != index)
            swap(&a[i], &a[index], sizeof(int));
    }
}

//Возвращает индекс последнего минимального числа из массива a размера n
size_t search_for_the_last_min_index(int *a, size_t n) {
    size_t min_index;
    long long min_number = LLONG_MAX;

    for (size_t i = 0; i < n; i++) {
        if (a[i] <= min_number) {
            min_index = i;
            min_number = a[i];
        }
    }

    return min_index;
}

//Возвращает индекс первого максимального числа из массива a размера n
size_t search_for_the_1st_max_index(int *a, size_t n) {
    size_t max_index;
    long long max_number = LLONG_MIN;

    for (size_t i = 0; i < n; i++) {
        if (a[i] > max_number) {
            max_index = i;
            max_number = a[i];
        }
    }

    return max_index;
}

void sorting_by_selection_between_1st_max_and_last_min(int *a, size_t n) {
    size_t first_max = search_for_the_1st_max_index(a, n);
    size_t last_min = search_for_the_last_min_index(a, n);

    size_t init_index = ll_min2(first_max, last_min);
    size_t final_index = ll_max2(first_max, last_min);

    reverse_sorting_by_choice(a, ++init_index, final_index);
}

//Проверка массива a размера n на невозрастание
bool non_increasing_sequence(int *a, const size_t n) {
    for (int i = 0; i < n - 1; i++)
        if (a[i] < a[i + 1])
            return false;

    return true;
}

//Проверка массива a размера n на неубывание
bool non_decreasing_sequence(int *a, const size_t n) {
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1])
            return false;

    return true;
}

//Проверка массива a размера n на упорядоченность
bool ordering_of_the_array(int *a, size_t n) {
    return non_increasing_sequence(a, n) || non_decreasing_sequence(a, n);
}

double the_geometric_mean_of_the_positive_elems_of_the_array(int *a, size_t n) {
    if (!ordering_of_the_array(a, n)) {
        double multiply = 1.0;
        int power = 0;

        for (int i = 0; i < n; i++)
            if (a[i] > 0) {
                multiply *= a[i];
                power++;
            }

        if ((multiply - 1.0) < 0.000001)
            return 0;

        return pow(multiply, 1.0 / power);
    }

    return -1;
}

//Возвращает индекс первого вхождения элемента x в массиве a размера n
size_t searching_for_the_index_of_an_elem(int *a, const size_t n, const int x) {
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            return i;

    return -1;
}

//Обратная сортировка выбором массива a размера n начиная с элемента x
void reverse_sorting_by_choice_from_x(int *a, const size_t n, const int index_x) {
    for (int i = index_x + 1; i < n; i++) {
        int min = a[i];
        int index = i;

        for (int j = i + 1; j < n; j++)
            if (a[j] < min) {
                min = a[j];
                index = j;
            }

        if (i != index)
            swap(&a[i], &a[index], sizeof(int));
    }
}

void sorting_items_after_x(int *a, const size_t n, const int x) {
    size_t index_x = searching_for_the_index_of_an_elem(a, n, x);

    if (index_x != -1)
        reverse_sorting_by_choice_from_x(a, n, index_x);
}

void unique_elems_of_2_arrays(int *a, size_t size_a, int *b, size_t size_b, int **c, size_t *size_c) {
    reverse_sorting_by_choice(a, 0, size_a);
    reverse_sorting_by_choice(b, 0, size_b);

    int max_size = size_a + size_b;
    int size_count = 0;
    *c = (int *) malloc(sizeof(int) * max_size);

    for (int i = 0; i < size_a; i++) {
        bool is_unique = false;

        for (int j = 0; j < size_b; j++)
            if (a[i] == b[j]) {
                is_unique = true;
                break;
            }

        if (!is_unique)
            (*c)[size_count++] = a[i];

    }

    *c = (int *) realloc(*c, sizeof(int) * size_count);
    *size_c = size_count;
}

//Возвращает индекс первого неотрицательного элемента массива a размера n
int get_index_1st_non_negative_number(int *a, size_t n) {
    int first_non_negative_index = 0;

    while (a[first_non_negative_index] < 0)
        first_non_negative_index++;

    return first_non_negative_index;
}

//Изменяет порядок отрицательных чисел отсортированного массива a размера n на обратный
void reverse_negative_values_in_array(int *a, size_t n) {
    if (a[0] < 0) {
        int first_non_negative_number = get_index_1st_non_negative_number(a, n);

        reverse_array(a, first_non_negative_number);
    }
}

void sorting_1st_negative_in_descending_order_then_positive_in_ascending_order(int *a, size_t n) {
    sorting_by_choice(a, n);
    reverse_array(a, n);
    reverse_negative_values_in_array(a, n);
}

min_to_x the_numbers_closests_to_x_in_the_array(int *a, const size_t n, const int x) {
    min_to_x numbers = {INT_MIN, INT_MAX};

    for (int i = 0; i < n; i++) {
        if (a[i] == x)
            return (min_to_x) {x, x};
        else if (a[i] < x)
            numbers.max_left = max2(numbers.max_left, a[i]);
        else
            numbers.min_right = min2(numbers.min_right, a[i]);
    }

    return numbers;
}

void unique_array_elems(int *a, const size_t size_a, int **b, size_t *size_b) {
    sorting_by_choice(a, size_a);

    int max_size = 1;
    int size_count = 0;
    *b = (int *) malloc(sizeof(int) * max_size);

    int black_list = a[size_a - 1];
    for (int i = 0; i < size_a; i++) {
        if (a[i] != black_list && a[i] != a[i + 1]) {
            if (size_count == max_size) {
                max_size *= 2;
                *b = (int *) realloc(*b, sizeof(int) * max_size);
            }

            (*b)[size_count++] = a[i];
        }

        black_list = a[i];
    }

    *b = (int *) realloc(*b, sizeof(int) * size_count);
    *size_b = size_count;
}

//Сортировка массива a размера n выбором при a[i] = abs(a[i])
void sorting_by_choice_by_abs(int *a, const size_t n) {
    for (int i = 0; i < n; i++) {
        int max = abs(a[i]);
        int index = i;

        for (int j = i + 1; j < n; j++)
            if (abs(a[j]) > max) {
                max = abs(a[j]);
                index = j;
            }

        if (i != index)
            swap(&a[i], &a[index], sizeof(int));
    }
}

bool is_geometric_progression(int *a, const size_t n) {
    reverse_array(a, n);

    if (!a[0])
        return false;

    int q = a[1] / a[0];

    if (abs(q) == 1)
        return false;

    for (int i = 1; i < n - 1; i++) {
        int newQ = a[i + 1] / a[i];

        if (abs(newQ - q) > 0.000001 || a[i + 1] % a[i])
            return false;
    }

    return true;
}