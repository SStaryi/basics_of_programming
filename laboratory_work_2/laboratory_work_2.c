//
// Created by Artyom on 09.10.2023.
//

#include "laboratory_work_2.h"

#include <stdio.h>

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