//
// Created by Artyom on 09.10.2023.
//

#include "laboratory_work_2.h"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "../standart_function/standart_function.h"

void save_luke() {
    float d, L, v1, v2;
    scanf("%f %f %f %f", &d, &L, &v1, &v2);

    float m = (L - d) / (v1 + v2);

    printf("%f", m);
}

void polycarp_and_coins() {
    long long t;
    scanf("%lld", &t);

    for (int i = 0; i < t; i++) {
        long long n;
        scanf("%lld", &n);

        switch (n % 3) {
            case 0:
                printf("%lld %lld\n", n / 3, n / 3);
                break;
            case 1:
                printf("%lld %lld\n", n / 3 + 1, n / 3);
                break;
            case 2:
                printf("%lld %lld\n", n / 3, n / 3 + 1);
                break;
        }
    }
}

void floor_number() {
    long long t;
    scanf("%lld", &t);

    for (int i = 0; i < t; i++) {
        long long n, x;
        scanf("%lld %lld", &n, &x);

        long long floor = (n - 3) / x + 2;

        printf(n == 1 || n == 2 ? "1\n" : "%lld\n", floor);
    }
}

void two_rabbits() {
    long long t;
    scanf("%lld", &t);

    for (int i = 0; i < t; i++) {
        long long x, y, a, b;
        scanf("%lld %lld %lld %lld", &x, &y, &a, &b);

        long long distance = y - x;
        long long approach_speed = a + b;

        long long tm = (distance % approach_speed == 0 ? distance / approach_speed : -1); //tm is time

        printf("%lld\n", tm);
    }
}

void cake_is_a_lie() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n, m, k;
        scanf("%d %d %d", &n, &m, &k);

        int max = max2(n, m);
        int min = min2(n, m);

        int s1 = (1 + min) * min / 2;
        int s2 = (2 + (min - 1)) * (min - 2) / 2;

        int price = s1 + s2;

        if (min != max)
            price += (min * (max - min));

        if (price == k)
            printf("YES\n");
        else
            printf("NO\n");
    }
}

void sequence_separation() {
    long long n;
    scanf("%lld", &n);

    printf(!(n % 4) || !((n + 1) % 4) ? "0" : "1");
}

void not_np() {
    long long l, r;
    scanf("%lld %lld", &l, &r);

    printf(l != r ? "2" : "%lld", l);
}

void by_elevator_or_by_stairs() {
    long long x, y, z, t1, t2, t3;
    scanf("%lld %lld %lld %lld %lld %lld", &x, &y, &z, &t1, &t2, &t3);

    long long stairs_time = llabs(x - y) * t1;
    long long lift_time = llabs(z - x) * t2 + llabs(x - y) * t2 + 3 * t3;

    printf(lift_time <= stairs_time ? "YES" : "NO");
}

void pasha_and_the_stick() {
    long long n;
    scanf("%lld", &n);

    long long answer;
    long long n_dived_by_4 = n / 4;

    if (!(n % 2)) {
        if (!(n % 4))
            answer = n_dived_by_4 - 1;
        else
            answer = n_dived_by_4;
    } else
        answer = 0;

    printf("%lld", answer);
}

void exab_and_node() {
    long long t;
    scanf("%lld", &t);

    for (int i = 0; i < t; i++) {
        long long n;
        scanf("%lld", &n);

        printf("1 %lld\n", n - 1);
    }
}

void three_piles_of_candy() {
    long long q;
    scanf("%lld", &q);

    for (int i = 0; i < q; i++) {
        long long a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);

        printf("%lld\n", (a + b + c) / 2);
    }
}

void theater_square() {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);

    long long new_n = ll_ceil_frac(n, a) * a;
    long long new_m = ll_ceil_frac(m, a) * a;
    long long answer = (new_n * new_m) / (a * a);

    printf("%lld", answer);
}

void find_amir() {
    long long n;
    scanf("%lld", &n);

    long long answer = n / 2 - 1 + n % 2;

    printf("%lld", answer);
}

void pizza_pizza_pizza() {
    long long n;
    scanf("%lld", &n);

    long long answer;
    long long number_of_persons = n++;

    if (!(number_of_persons % 2))
        answer = number_of_persons / 2;
    else if (!n)
        answer = 0;
    else
        answer = number_of_persons;

    printf("%lld", answer);
}

void minimum_number() {
    long long q;
    scanf("%lld", &q);

    for (int i = 0; i < q; i++) {
        long long l, r, d;
        scanf("%lld %lld %lld", &l, &r, &d);

        long long number = (d < l ? d : (r / d + 1) * d);

        printf("%lld\n", number);
    }
}

void payment_without_change() {
    long long q;
    scanf("%lld", &q);

    for (int i = 0; i < q; i++) {
        long long a, b, n, S;
        scanf("%lld %lld %lld %lld", &a, &b, &n, &S);

        long long x = S / n;
        if (x > a)
            x = a;

        printf((S - x * n) <= b ? "YES\n" : "NO\n");
    }
}

void donut_shops() {
    long long t;
    scanf("%lld", &t);

    for (int i = 0; i < t; i++) {
        long long a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);

        long long first_benefit = (a >= c ? -1 : 1);
        long long second_benefit = (c >= (a * b) ? -1 : b);

        printf("%lld %lld\n", first_benefit, second_benefit);
    }
}

void sum_of_odd_numbers() {
    long long t;
    scanf("%lld", &t);

    for (int i = 0; i < t; i++) {
        long long n, k;
        scanf("%lld %lld", &n, &k);

        printf((n % 2) == (k % 2) && (k * k) <= n ? "YES\n" : "NO\n");
    }
}

void vasily_the_bear_and_the_triangle() {
    long long x, y;
    scanf("%lld %lld", &x, &y);

    long long abs_side = llabs(x) + llabs(y);

    long long x1, y1, x2, y2;
    if (x > 0 && y > 0) {
        x1 = y2 = 0;
        x2 = y1 = abs_side;
    }
    else if (x < 0 && y > 0) {
        x1 = - abs_side;
        y2 = abs_side;
        x2 = y1 = 0;
    }
    else if (x > 0 && y < 0) {
        x1 = y2 = 0;
        x2 = abs_side;
        y1 = - abs_side;
    }
    else {
        x2 = y1 = 0;
        x1 = - abs_side;
        y2 = - abs_side;
    }

    printf("%lld %lld %lld %lld\n", x1, y1, x2, y2);
}