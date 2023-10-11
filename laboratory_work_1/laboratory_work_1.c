//
// Created by Artyom on 08.10.2023.
//

#include "laboratory_work_1.h"

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

void task_4() {
    int x;
    scanf("%d", &x);

    int steps = x / 5;

    if (x % 5)
        steps++;

    printf("%d", steps);
}

void task_5() {
    int w;
    scanf("%d", &w);

    if (w > 3 && !(w % 2))
        printf("YES");
    else
        printf("NO");
}

void task_6() {
    int q;
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        long long n, a, b;
        scanf("%lld %lld %lld", &n, &a, &b);

        long long answer;

        if ((2 * a) <= b)
            answer = n * a;
        else
            answer = n / 2 * b + (n % 2) * a;

        printf("%lld\n", answer);
    }
}

void task_7() {
    int a, b;
    scanf("%d %d", &a, &b);

    int n, first;

    if (a > b) {
        n = a - b;
        first = b;
    } else {
        n = b - a;
        first = a;
    }

    int second = n / 2;

    printf("%d %d", first, second);
}

void task_8() {
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);

    int s = (k + k * w) * w / 2;
    int duty = s - n;

    if (duty > 0)
        printf("%d", duty);
    else
        printf("0");
}

void task_9() {
    long long n;
    scanf("%lld", &n);

    long long answer;

    if (!(n % 2))
        answer = n / 2;
    else
        answer = (n / 2) - n;

    printf("%lld", answer);
}

void task_10() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        long long n, m;
        scanf("%lld %lld", &n, &m);

        long long square = n * m;

        long long answer;

        if (!(square % 2))
            answer = square / 2;
        else
            answer = (square + 1) / 2;

        printf("%lld\n", answer);
    }
}

void task_11() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int a, b, c, d, k;
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &k);

        int x;

        if (a % c)
            x = a / c + 1;
        else
            x = a / c;

        int y;

        if (b % d)
            y = b / d + 1;
        else
            y = b / d;

        if ((x + y) > k)
            printf("-1\n");
        else
            printf("%d %d\n", x, y);
    }
}

void task_12() {
    int n;
    scanf("%d", &n);

    int new_n = n - 10;

    if ((1 <= new_n && new_n <= 9) || new_n == 11)
        printf("4");
    else if (new_n == 10)
        printf("15");
    else
        printf("0");
}

void task_13() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max;

    if (a > b)
        max = a;
    else
        max = b;

    if (c > max)
        max = c;

    int the_sum_of_two = a + b + c - max;

    int answer;

    if (max < the_sum_of_two)
        answer = 0;
    else
        answer = max - the_sum_of_two + 1;

    printf("%d", answer);
}

void task_14() {
    long long n;
    scanf("%lld", &n);

    long long a = 9 * n;
    long long b = 8 * n;

    printf("%lld %lld", a, b);
}

void task_15() {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    long long max_a = a;
    long long max_b = b / 2;
    long long max_c = c / 4;

    long long min;
    if (max_a > max_b)
        min = max_b;
    else
        min = max_a;

    if (max_c < min)
        min = max_c;

    printf("%lld", min * 7);
}

void task_16() {
    long long s, v1, v2, t1, t2;
    scanf("%lld %lld %lld %lld %lld", &s, &v1, &v2, &t1, &t2);

    long long tm1 = s * v1 + 2 * t1; //tm is time
    long long tm2 = s * v2 + 2 * t2;

    if (tm1 < tm2)
        printf("First");
    else if (tm1 > tm2)
        printf("Second");
    else
        printf("Friendship");
}