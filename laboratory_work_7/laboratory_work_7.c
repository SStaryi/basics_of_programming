//
// Created by Artyom on 11.10.2023.
//

#include "laboratory_work_7.h"

#define BINARY_DIGITS_IN_ONE_OCT_DIGIT 3U

// Возвращает количество символов в восьмеричном представлении числа x
long long count_oct_digits(long long unsigned x) {
    long long count = 0;

    while (x) {
        x >>= BINARY_DIGITS_IN_ONE_OCT_DIGIT;
        count++;
    }

    return count;
}

void print_oct(long long unsigned x) {
    long long n_oct_digits = count_oct_digits(x);
    long long shift = (n_oct_digits - 1) * BINARY_DIGITS_IN_ONE_OCT_DIGIT;

    while (shift >= 0) {
        long long oct_digit = x >> shift & 7;

        printf("%lld", oct_digit);

        shift -= BINARY_DIGITS_IN_ONE_OCT_DIGIT;
    }
}

void delete_oct_number(long long unsigned x, unsigned digit) {
    long long n_oct_digits = count_oct_digits(x);
    long long shift = (n_oct_digits - 1) * BINARY_DIGITS_IN_ONE_OCT_DIGIT;
    long long unsigned count = 0;

    while (shift >= 0) {
        long long oct_digit = x >> shift & 7;

        if (oct_digit != digit)
            printf("%lld", oct_digit);
        else
            count++;

        shift -= BINARY_DIGITS_IN_ONE_OCT_DIGIT;

        if (count == n_oct_digits)
            printf("0");
    }
}

void swap_pair_bites(long long unsigned x) {
    long long number = 0;
    long long unsigned shift = 0;
    int bin_digit_1, bin_digit_2;

    while (x >= 4) {
        bin_digit_1 = x & 1;
        x >>= 1;
        bin_digit_2 = x & 1;
        x >>= 1;
        number |= bin_digit_2 << shift;
        shift++;
        number |= bin_digit_1 << shift;
        shift++;
    }

    if (x == 2)
        number |= 1 << shift;
    else
        number |= x << shift;

    printf("%lld", number);
}

#define BINARY_DIGITS_IN_ONE_HEX_DIGIT 4U

// Возвращает количество элементов в 16-ричной записи числа x.
int count_hex_digits(unsigned int x) {
    int count = 0;

    while (x != 0) {
        x >>= BINARY_DIGITS_IN_ONE_HEX_DIGIT;
        count++;
    }

    return count;
}

void invert_hex(unsigned int x) {
    int n_hex_digits = count_hex_digits(x);
    int shift = (n_hex_digits - 1) * BINARY_DIGITS_IN_ONE_HEX_DIGIT;

    while (shift >= 0) {
        int hex_digit = x & 15;

        if (hex_digit < 10)
            printf("%d", hex_digit);
        else
            printf("%c", (hex_digit - 10 + 'A'));

        shift -= BINARY_DIGITS_IN_ONE_HEX_DIGIT;
        x /= 16;
    }
}

// Возвращает реверс двоичного представления числа x.
long long reverse_x(long long x) {
    long long number = 0;

    while (x) {
        number <<= 1;

        long long bin_digit = x & 1;

        x >>= 1;
        number |= bin_digit;
    }

    return number;
}

bool is_bin_poly(long long x) {
    return reverse_x(x) == x;
}

#define BINARY_DIGITS_IN_ONE_BIN_DIGIT 1U

long long sequence_of_two_bin(long long sh1, long long sh2) {
    char shift = 0;
    long long number = 0;
    char bin_digit;

    while (shift < 32) {
        bin_digit = sh1 & 1;
        sh1 >>= BINARY_DIGITS_IN_ONE_BIN_DIGIT;
        number |= bin_digit << shift;
        shift += BINARY_DIGITS_IN_ONE_BIN_DIGIT;

        bin_digit = sh2 & 1;
        sh2 >>= BINARY_DIGITS_IN_ONE_BIN_DIGIT;
        number |= bin_digit << shift;
        shift += BINARY_DIGITS_IN_ONE_BIN_DIGIT;
    }

    return number;
}

long long max_number_of_contractors_1(long long x) {
    long long max = 0;
    long long count = 0;

    while (x) {
        if (x & 1)
            count++;
        else {
            max = ll_max2(max, count);
            count = 0;
        }

        x >>= 1;
    }

    return ll_max2(max, count);
}