//
// Created by Artyom on 11.10.2023.
//

#include "laboratory_work_3.h"

void water_lily() {
    double H, L;
    scanf("%lf %lf", &H, &L);

    double A = (pow(H, 2) + pow(L, 2)) / (2 * H) - H;

    printf("%f", A);
}

void dasha_and_the_stairs() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    printf(llabs(a - b) <= 1 && (a + b) != 0 ? "YES\n" : "NO\n");
}

#define UTC_TIME_MULTIPLIER 60

void the_middle_of_the_contest() {
    int h1, m1, h2, m2;
    scanf("%d:%d\n %d:%d", &h1, &m1, &h2, &m2);

    int tm = ((h2 - h1) * UTC_TIME_MULTIPLIER + (m2 - m1)) / 2; // tm is time
    int hours = h1 + tm / UTC_TIME_MULTIPLIER;
    int minutes = m1 + tm % UTC_TIME_MULTIPLIER;

    if (minutes >= UTC_TIME_MULTIPLIER) {
        minutes -= UTC_TIME_MULTIPLIER;
        hours++;
    }

    printf("%02d:%02d\n", hours, minutes);
}

void chunga_changa() {
    long long x, y, z;
    scanf("%lld %lld %lld", &x, &y, &z);

    long long coconuts = x / z + y / z;
    long long remainder = x % z + y % z;
    long long money;

    if (remainder >= z) {
        coconuts++;
        money = ((x % z) > (y % z) ? z - x % z : z - y % z);
    } else
        money = 0;

    printf("%lld %lld", coconuts, money);
}

void heating() {
    long long n;
    scanf("%lld", &n);

    for (int i = 0; i < n; i++) {
        long long c, sum;
        scanf("%lld %lld", &c, &sum);

        long long max_section = sum / c;
        long long remainder = sum % c;
        long long answer = (c - remainder) * power(max_section, 2) + remainder *
                                                                     power(max_section + 1, 2);

        printf("%lld\n", answer);
    }
}

void commentator_booths() {
    long long n, m, a, b;
    scanf("%lld %lld %lld %lld", &n, &m, &a, &b);

    long long remainder = n % m;
    long long building_price = (m - remainder) * a;
    long long demolition_price = remainder * b;
    long long answer = (building_price > demolition_price ? demolition_price : building_price);

    printf("%lld", answer);
}

void retake() {
    long long A, B, C, N;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &N);

    long long answer = N - (A + B - C);

    if (answer < 1 || A > N || B > N || C > A || C > B)
        answer = -1;

    printf("%lld", answer);
}

void function_height() {
    long long n, k;
    scanf("%lld %lld", &n, &k);

    long long answer;
    if (n >= k)
        answer = 1;
    else
        answer = ll_ceil_frac(k, n);

    printf("%lld", answer);
}

void a_couple_of_toys() {
    long long n, k;
    scanf("%lld %lld", &n, &k);

    long long length_left = k / 2;
    long long length_right = n - length_left;

    if (!(k % 2))
        length_left--;

    long long min = (length_right > length_left ? length_left : length_right);
    long long answer = ((2 * n - 1) < k ? 0 : min);

    printf("%lld", answer);
}

void lets_watch_football() {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    long long time = ll_ceil_frac(c * a, b);
    long long answer = time - c;

    printf("%lld", answer);
}

void who_is_opposite() {
    long long int t;
    scanf("%llu", &t);

    for (int i = 0; i < t; i++) {
        long long a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);

        long long max = ll_max2(a, b);
        long long semicircle = llabs(a - b);

        long long d;
        if (max > (2 * semicircle) || c > (2 * semicircle))
            d = -1;
        else if (semicircle >= c)
            d = c + semicircle;
        else
            d = c - semicircle;

        printf("%lld\n", d);
    }
}