//
// Created by Artyom on 11.10.2023.
//

#include "laboratory_work_4.h"

void the_max_of_the_sequence_n() {
    printf("Number of input numbers: ");
    long long n;
    scanf("%lld", &n);

    printf("Sequence: ");
    long long max;
    scanf("%lld", &max);

    for (int i = 1; i < n; i++) {
        long long x;
        scanf("%lld", &x);

        max = ll_max2(x, max);
    }

    printf("Maximum: %lld", max);
}

void the_max_of_the_sequence() {
    SetConsoleOutputCP(CP_UTF8);

    printf("Введите 0, чтобы завершить\n");

    long long x;
    scanf("%lld", &x);

    if (x) {
        long long max = x;

        while (x) {
            max = ll_max2(x, max);

            scanf("%lld", &x);
        }

        printf("Максимум: %lld", max);
    } else
        printf("Последовательность пуста");
}

void index_of_the_1st_min_of_n() {
    printf("Number of input numbers: ");
    long long n;
    scanf("%lld", &n);

    printf("Sequence: ");
    long long min;
    scanf("%lld", &min);

    long long index = 1;
    long long first_min_index = 0;
    for (int i = 1; i < n; i++) {
        long long x;
        scanf("%lld", &x);

        if (x < min) {
            first_min_index = index;
            min = x;
        }

        index++;
    }

    printf("Index of the first minimum number: %lld", first_min_index);
}

void index_of_the_last_max_of_n() {
    printf("Number of input numbers: ");
    long long n;
    scanf("%lld", &n);

    printf("Sequence: ");
    long long max;
    scanf("%lld", &max);

    long long index = 1;
    long long last_max_index = 0;
    for (int i = 1; i < n; i++) {
        long long x;
        scanf("%lld", &x);

        if (x >= max) {
            last_max_index = index;
            max = x;
        }

        index++;
    }

    printf("Index of the last maximum number: %lld", last_max_index);
}

void finding_the_number_of_min_values_from_n() {
    printf("Number of input numbers: ");
    long long n;
    scanf("%lld", &n);

    printf("Sequence: ");
    long long min;
    scanf("%lld", &min);

    long long min_counter = 1;
    for (int i = 1; i < n; i++) {
        long long x;
        scanf("%lld", &x);

        if (x < min) {
            min = x;
            min_counter = 1;
        } else if (x == min)
            min_counter++;
    }

    printf("Number of minimum numbers in sequence: %lld", min_counter);
}

void the_difference_between_the_max_and_min_of_n() {
    printf("Number of input numbers: ");
    long long n;
    scanf("%lld", &n);

    printf("Sequence: ");
    long long min;
    scanf("%lld", &min);
    long long max = min;

    for (int i = 1; i < n; i++) {
        long long x;
        scanf("%lld", &x);

        if (x < min)
            min = x;
        else if (x > max)
            max = x;
    }

    long long the_difference_between_the_max_and_min = max - min;

    printf("Difference between maximum and minimum: %lld",
           the_difference_between_the_max_and_min);
}

void sum_of_even_numbers() {
    printf("Enter 0 to end\n");

    long long even_sum = 0;

    long long x;
    scanf("%lld", &x);

    while (x) {
        if (!(x % 2))
            even_sum += x;

        scanf("%lld", &x);
    }

    printf("The sum of all even numbers in the sequence: %lld", even_sum);
}

void the_max_digit_in_the_record_of_a_number_of_size_n() {
    printf("Enter the number: ");
    long long n;
    scanf("%lld", &n);

    int max = (int) n % 10;
    n /= 10;

    while (n) {
        max = max2(max, (int) n % 10);
        n /= 10;
    }

    printf("The maximum digit in a number: %d", max);
}

void the_number_of_even_and_odd() {
    printf("Enter 0 to end\n");

    long long x;
    scanf("%lld", &x);

    long long odd = 0;
    long long even = 0;
    while (x) {
        if (x % 2)
            odd++;
        else
            even++;

        scanf("%lld", &x);
    }

    printf("The number of even elements in the sequence: %lld\n", even);
    printf("Number of odd elements in sequence: %lld", odd);
}

void the_product_of_nonzero_numbers_from_n() {
    printf("Enter the number: ");

    long long n;
    scanf("%lld", &n);

    int product_of_numbers_other_than_0 = 1;
    while (n) {
        if (n % 10)
            product_of_numbers_other_than_0 *= (int) (n % 10);

        n /= 10;
    }

    printf("Product of all digits other than 0: %d", product_of_numbers_other_than_0);
}

void does_n_digit_enter_k_times() {
    printf("Enter the number, the digit of interest and the number of occurrences: ");

    long long n, digit, k;
    scanf("%lld %lld %lld", &n, &digit, &k);

    long long count = 0;

    while (n) {
        if (n % 10 == digit)
            count++;

        n /= 10;
    }

    printf(count == k ? "YES" : "NO");
}

void following_the_last_min() {
    printf("Enter 0 to end\n");

    long long x;
    scanf("%lld", &x);

    if (x) {
        long long min = x;
        long long elem_after_the_min;

        while (x) {
            if (x <= min) {
                min = x;

                scanf("%lld", &x);

                elem_after_the_min = x;
            } else
                scanf("%lld", &x);
        }

        printf(!elem_after_the_min ? "The last element is minimal" :
               "Next element after the last minimum: %lld", elem_after_the_min);
    } else
        printf("Sequence is empty");
}

void preceding_the_1st_max() {
    printf("Enter 0 to end\n");

    long long x;
    scanf("%lld", &x);

    if (x) {
        long long first_x = x;
        long long max = x;
        long long real_elem_before_max = 0;

        while (x) {
            long long elem_before_max = x;

            scanf("%lld", &x);

            if (x > max) {
                real_elem_before_max = elem_before_max;
                max = x;
            }
        }

        printf(max == first_x ? "The first element is the maximum" :
               "Element before the first maximum: %lld", real_elem_before_max);

    } else
        printf("Sequence is empty");
}

void number_of_letters() {
    long long count = 0;
    char x;

    while ((x = getchar()) != '\n')
        if (65 <= x && x <= 90 || 97 <= x && x <= 122)
            count++;

    printf("Number of characters per line: %lld", count);
}

void number_of_consonants() {
    long long consonants = 0;
    char x;

    while ((x = getchar()) != '\n')
        if (98 <= x && x <= 122 && x != 'e' && x != 'y' && x != 'u' && x != 'i' && x != 'o')
            consonants++;

    printf("Number of consonants: %lld", consonants);
}

void definition_of_orderliness() {
    printf("Enter 0 to end\n");

    long long x;
    scanf("%lld", &x);

    long long previous_elem = x;
    int flag = 1;

    if (x) {
        while (x) {
            scanf("%lld", &x);

            if (!x)
                break;

            if (x >= previous_elem && (flag == 1 || flag == 2)) {
                flag = 2;
                previous_elem = x;
            } else if (x <= previous_elem && (flag == 1 || flag == 3)) {
                flag = 3;
                previous_elem = x;
            } else {
                flag = 0;
                break;
            }
        }

        if (flag == 3)
            printf("Sequence non-increasing");
        else if (flag == 2)
            printf("The sequence is non-decreasing");
        else if (flag == 1)
            printf("All characters in a sequence are equal");
        else
            printf("In a sequence, characters do not constitute sequences");
    } else
        printf("Sequence is empty");
}

void sum_of_digits() {
    long long sum = 0;
    char x;

    while ((x = getchar()) != '.')
        if (x == '0' || x == '1' || x == '2' || x == '3' || x == '4' || x == '5' || x == '6' ||
            x == '7' || x == '8' || x == '9')
            sum += (x - 48);

    printf("Sum of digits in a string: %lld", sum);
}