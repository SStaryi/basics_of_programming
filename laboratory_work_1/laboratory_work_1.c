//
// Created by Artyom on 08.10.2023.
//

#include "laboratory_work_1.h"

#include <stdio.h>

void task_1() {
    long long t;
    scanf("%lld", &t);

    for (long long i = 1; i <= t; i++) {
        long long h, m;
        scanf("%lld %lld", &h, &m);

        long long result = (23 - h) * 60 + (60 - m);

        printf("%lld\n", result);
    }
}

void task_2() {
    printf("25");
}

void task_3() {
    long long n1, n2, k1, k2;
    scanf("%lld %lld %lld %lld", &n1, &n2, &k1, &k2);

    if (n1 <= n2)
        printf("Second");
    else
        printf("First");
}