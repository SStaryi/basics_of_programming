//
// Created by Artyom on 12.10.2023.
//

#include "laboratory_work_12.h"

int binary_search_the_max_index_is_no_more_then_x(const int *const a, const size_t n, const int x) {
    int left = -1;
    int right = n;

    while (right - left > 1) {
        int middle = (right + left) / 2;

        if (a[middle] <= x)
            left = middle;
        else
            right = middle;
    }

    return ++left;
}

void nearest_on_the_left() {
    int n, k;
    scanf("%d %d", &n, &k);

    int *a = (int *) malloc(n * sizeof(int));
    input_array(a, n);

    for (int i = 0; i < k; i++) {
        int request;
        scanf("%d", &request);

        printf("%d\n", binary_search_the_max_index_is_no_more_then_x(a, n, request));
    }
}

int binary_search_the_min_index_is_at_least_x(const int *const a, const size_t n, const int x) {
    int left = -1;
    int right = n;

    while (right - left > 1) {
        int middle = (right + left) / 2;

        if (a[middle] < x)
            left = middle;
        else
            right = middle;
    }

    return ++right;
}

void the_nearest_one_on_the_right() {
    int n, k;
    scanf("%d %d", &n, &k);

    int *a = (int *) malloc(n * sizeof(int));
    input_array(a, n);

    for (int i = 0; i < k; i++) {
        int request;
        scanf("%d", &request);

        printf("%d\n", binary_search_the_min_index_is_at_least_x(a, n, request));
    }
}

void quick_array_search() {
    int n;
    scanf("%d", &n);

    int *a = (int *) malloc(n * sizeof(int));
    input_array(a, n);

    qsort(a, n, sizeof(int), compare_ints);

    int k;
    scanf("%d", &k);

    for (int i = 0; i < k; i++) {
        int l_request, r_request;
        scanf("%d %d", &l_request, &r_request);

        int min_left = binary_search_the_min_index_is_at_least_x(a, n, l_request);
        int max_right = binary_search_the_max_index_is_no_more_then_x(a, n, r_request);
        int result = max_right - min_left + 1;

        printf("%d ", result);
    }
}

#define EPS 1e-7

long long count_ropes(int *rope_lengths, size_t n, double one_rope_length) {
    long long count = 0;

    for (size_t i = 0; i < n; i++)
        count += rope_lengths[i] / one_rope_length;

    return count;
}

double max_len_of_pieces(const int *const rope_lengths, const size_t n, const int k) {
    double left = 0;
    double right = 1e7;

    while (right - left > EPS) {
        double middle = (right + left) / 2;

        if (count_ropes(rope_lengths, n, middle) >= k)
            left = middle;
        else
            right = middle;
    }

    return left;
}

void ropes() {
    int n, k;
    scanf("%d %d", &n, &k);

    int *rope_lengths = (int *) malloc(n * sizeof(int));
    input_array(rope_lengths, n);

    printf("%f", max_len_of_pieces(rope_lengths, n, k));
}

long long count_copies(long long first_xerox_time, long long second_xerox_time,
                       const long long sum_time) {
    sort2(&first_xerox_time, &second_xerox_time);

    return sum_time / first_xerox_time + (sum_time - first_xerox_time) / second_xerox_time;
}

long long time_for_n_copies(const long long n, const long long x, const long long y) {
    long long left = 0;
    long long right = 1e18;

    while (right - left > 1) {
        long long middle = (right + left) / 2;

        if (count_copies(x, y, middle) >= n)
            right = middle;
        else
            left = middle;
    }

    return right;
}

void a_very_easy_task() {
    long long n, x, y;
    scanf("%lld %lld %lld", &n, &x, &y);

    printf("%lld", time_for_n_copies(n, x, y));
}

long long sum_counter(long long n, long long middle, long long k) {
    long long sum = middle;
    long long multiplier_k = k;

    while (sum <= n && k <= middle) {
        sum += (middle / k);
        k *= multiplier_k;
    }

    return sum;
}

long long binary_search_(long long n, long long k) {
    if (n < k)
        return n;

    long long left = k - 1;
    long long right = n + 1;

    while ((right - left) > 1) {
        long long middle = (left + right) / 2;

        if (sum_counter(n, middle, k) >= n)
            right = middle;
        else
            left = middle;
    }

    return right;
}

void night_work() {
    long long n, k;
    scanf("%lld %lld", &n, &k);

    printf("%lld", binary_search_(n, k));
}

void computer_game() {
    long long q;
    scanf("%lld", &q);

    for (int i = 0; i < q; i++) {
        long long k, n, a, b;
        scanf("%lld %lld %lld %lld", &k, &n, &a, &b);

        k -= n * a;

        if (k > 0)
            printf("%lld\n", n);
        else {
            k = -k + 1;

            long long difference = a - b;
            long long turns = (k + difference - 1) / difference;

            if (turns > n)
                printf("-1\n");
            else
                printf("%lld\n", n - turns);
        }
    }
}

long long bin_search(const long long *const b, const size_t n, const long long limiter) {
    long long result = 0;

    for (long long start = 0; start < n; start++) {
        long long left = start;
        long long right = n + 1;

        while (right - left > 1) {
            long long middle = (left + right) / 2;

            if (b[middle] - b[start] <= limiter)
                left = middle;
            else
                right = middle;
        }

        result = ll_max2(result, left - start);
    }

    return result;
}

void books() {
    long long n, t;
    scanf("%lld %lld", &n, &t);

    long long *a = (long long *) malloc(sizeof(long long) * n);
    input_array(a, n);

    long long *b = (long long *) malloc(sizeof(long long) * (n + 1));
    b[0] = 0;

    for (long long i = 1; i <= n; i++)
        b[i] = a[i - 1] + b[i - 1];

    printf("%lld", bin_search(b, n, t));
}

void eugene_and_the_playlist() {
    long long n, m;
    scanf("%lld %lld", &n, &m);

    long long *a = (long long *) malloc(sizeof(long long) * n + 1);
    input_array(a, n);

    for (long long i = 0; i < m; i++) {
        long long v;
        scanf("%lld", &v);

        long long left = -1;
        long long right = n + 1;

        while (right - left > 1) {
            long long middle = (left + right) / 2;

            if (a[middle] < v)
                left = middle;
            else
                right = middle;
        }

        printf("%lld\n", right);
    }
}

void array_copy(long long *copy_a, const long long *a, size_t size) {
    while (size--)
        *copy_a++ = *a++;
}

long long sum_q_sort(long long *a, const long long middle, const long long limiter) {
    long long size = middle + 1;
    long long *q_sort_array = (long long *) malloc(sizeof(long long) * size);
    array_copy(q_sort_array, a, size);
    qsort(q_sort_array, size, sizeof(long long),
          compare_ints);
    reverse_array(q_sort_array, size);

    long long sum = 0;
    for (size_t i = 0; i < size; i += 2) {
        sum += q_sort_array[i];

        if (sum > limiter)
            return limiter + 1;
    }

    return sum;
}

long long bin_search_(long long *a, const size_t n, const long long limiter) {
    long long left = -1;
    long long right = n;

    while (right - left > 1) {
        long long middle = (left + right) / 2;

        if (sum_q_sort(a, middle, limiter) > limiter)
            right = middle;
        else
            left = middle;
    }

    return right;
}

void alyona_and_the_narrow_refrigerator() {
    long long n, h;
    scanf("%lld %lld", &n, &h);

    long long *a = (long long *) malloc(sizeof(long long) * n);
    input_array(a, n);

    long long answer = bin_search_(a, n, h);

    printf("%lld", answer);
}

void array_of_arithmetic_progression(long long **a, const long long n, size_t *size) {
    long long max_size = 2;
    long long size_count = 1;
    *a = (long long *) malloc(sizeof(long long) * max_size);

    (*a)[0] = 1;

    while ((*a)[size_count - 1] < n) {
        if (size_count == max_size) {
            max_size *= 2;
            *a = (long long *) realloc(*a, sizeof(long long) * max_size);
        }

        (*a)[size_count] = (*a)[size_count - 1] + size_count + 1;
        size_count++;
    }

    *a = (long long *) realloc(*a, sizeof(long long) * size_count);
    *size = size_count;
}

bool is_two_treangular_num_bin_search(const long long *const a, const long long size,
                                      const long long n) {
    for (long long i = size - 2; i >= 0; i--) {
        long long second_num = n - a[i];

        long long left = -1;
        long long right = i + 1;

        while (right - left > 1) {
            long long middle = (left + right) / 2;

            if (a[middle] > second_num)
                right = middle;
            else
                left = middle;
        }

        if (a[left] == second_num)
            return true;
    }

    return false;
}

void fashionable_numbers() {
    long long n;
    scanf("%lld", &n);

    long long *a;
    size_t size_a;
    array_of_arithmetic_progression(&a, n, &size_a);

    printf(is_two_treangular_num_bin_search(a, size_a, n) ? "YES" : "NO");
}

void completion_differences_array(long long *diff, size_t n, const long long *a, const long long *b) {
    while (n--)
        *diff++ = (*a++) - (*b++);
}

long long lessons_counter(const long long *const a, const size_t n) {
    long long counter = 0;

    for (size_t i = 0; i < n && a[i] > 0; i++) {
        long long left = i;
        long long right = n;

        while (right - left > 1) {
            long long middle = (right + left) / 2;

            if (-a[middle] >= a[i])
                right = middle;
            else
                left = middle;
        }

        counter += left - i;
    }

    return counter;
}

void a_couple_of_topics() {
    long long n;
    scanf("%lld", &n);

    long long *a = (long long *) malloc(sizeof(long long) * n);
    input_array(a, n);
    long long *b = (long long *) malloc(sizeof(long long) * n);
    input_array(b, n);

    long long *differences = (long long *) malloc(sizeof(long long) * n);
    completion_differences_array(differences, n, a, b);
    qsort(differences, n, sizeof(long long), compare_ints);
    reverse_array(differences, n);

    long long answer = lessons_counter(differences, n);
    printf("%lld", answer);
}