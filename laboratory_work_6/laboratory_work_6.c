//
// Created by Artyom on 11.10.2023.
//

#include "laboratory_work_6.h"

#define EPS 0.0000001

void solve_x_2(long long a, long long b, long long c) {
    double d = pow((double) b, 2.0) - 4.0 * a * c;
    double x1, x2;

    if (d >= 0) {
        x1 = (-b + sqrt((double) d)) / (2 * a);
        x2 = (-b - sqrt((double) d)) / (2 * a);
    } else {
        printf("The quadratic equation has no roots");

        return;
    }

    if (fabs(x1 - x2) < EPS)
        printf("The root of the equation: %lf", x1);
    else
        printf("The first root: %lf,\nThe second root: %lf", x1, x2);
}

bool is_triangle(int a, int b, int c) {
    sort3(&a, &b, &c);

    return (a + b) > c;
}

#define ACUTE_ANGLED_TRIANGLE 0
#define RIGHT_TRIANGLE 1
#define OBTUSE_TRIANGLE 2
#define NOT_A_TRIANGLE (-1)

int get_triangle_type_length(int a, int b, int c) {
    sort3(&a, &b, &c);

    long long a2 = pow(a, 2);
    long long b2 = pow(b, 2);
    long long c2 = pow(c, 2);
    long long sum_of_the_squares_of_the_legs = a2 + b2;

    if ((a + b) < c)
        return NOT_A_TRIANGLE;

    if (c2 < sum_of_the_squares_of_the_legs)
        return ACUTE_ANGLED_TRIANGLE;
    else if (c2 == sum_of_the_squares_of_the_legs)
        return RIGHT_TRIANGLE;
    else
        return OBTUSE_TRIANGLE;
}