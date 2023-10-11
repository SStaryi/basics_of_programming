//
// Created by Artyom on 11.10.2023.
//

#include "laboratory_work_5.h"

void team() {
    long long n;
    scanf("%lld", &n);

    long long implemented_tasks = 0;

    for (int i = 0; i < n; i++) {
        int petyas_opinion, vasyas_opinion, tonyas_opinion;
        scanf("%d %d %d", &petyas_opinion, &vasyas_opinion, &tonyas_opinion);

        int t = petyas_opinion + vasyas_opinion + tonyas_opinion;

        if (t >= 2)
            implemented_tasks++;
    }

    printf("%lld", implemented_tasks);
}

void incorrect_subtraction() {
    long long n, k;
    scanf("%lld %lld", &n, &k);

    for (int i = 0; i < k; i++) {
        if (n % 10)
            n--;
        else
            n /= 10;
    }

    printf("%lld", n);
}

void tram() {
    long long n;
    scanf("%lld", &n);

    long long max_capacity = 0;
    long long number_of_people = 0;

    for (int i = 0; i < n; i++) {
        long long a, b;
        scanf("%lld %lld", &a, &b);

        number_of_people -= a;
        number_of_people += b;

        if (number_of_people > max_capacity)
            max_capacity = number_of_people;
    }

    printf("%lld", max_capacity);
}

void vanya_and_the_fence() {
    long long n, h;
    scanf("%lld %lld", &n, &h);

    long long road_width = 0;

    for (int i = 0; i < n; i++) {
        long long a;
        scanf("%lld", &a);

        road_width++;

        if (a > h)
            road_width++;
    }

    printf("%lld", road_width);
}

void jura_and_settlement() {
    long long n;
    scanf("%lld", &n);

    long long free_rooms = 0;

    for (int i = 0; i < n; i++) {
        long long p, q;
        scanf("%lld %lld", &p, &q);

        if ((q - p) >= 2)
            free_rooms++;
    }

    printf("%lld", free_rooms);
}

#define NUMBER_OF_COMPETITIONS 5
#define NUMBER_OF_PEOPLE_IN_THE_TEAM 3

void team_selection() {
    long long n, k;
    scanf("%lld %lld", &n, &k);

    long long suitable_people = 0;

    for (int i = 0; i < n; i++) {
        long long y;
        scanf("%lld", &y);

        if ((y + k) <= NUMBER_OF_COMPETITIONS)
            suitable_people++;
    }

    long long numberOfTeams = suitable_people / NUMBER_OF_PEOPLE_IN_THE_TEAM;

    printf("%lld", numberOfTeams);
}

void i_love_username() {
    long long n;
    scanf("%lld", &n);

    long long result;
    scanf("%lld", &result);

    long long max = result;
    long long min = result;

    long long amazing_performance = 0;

    for (int i = 0; i < (n - 1); i++) {
        scanf("%lld", &result);

        if (result > max) {
            amazing_performance++;
            max = result;
        } else if (result < min) {
            amazing_performance++;
            min = result;
        }
    }

    printf("%lld", amazing_performance);
}

void odd_set() {
    long long t;
    scanf("%lld", &t);

    long long odd = 0;

    for (int i = 0; i < t; i++) {
        long long n;
        scanf("%lld", &n);

        for (int i = 0; i < (2 * n); i++) {
            long long a;
            scanf("%lld", &a);

            if (a % 2)
                odd++;
        }

        printf(odd != n ? "No\n" : "Yes\n");

        odd = 0;
    }
}

void police_recruits() {
    long long n;
    scanf("%lld", &n);

    long long unsolved_crimes = 0;
    long long free_police_officers = 0;

    for (int i = 0; i < n; i++) {
        int event;
        scanf("%d", &event);

        if (event == -1 && !free_police_officers)
            unsolved_crimes++;
        else if (event == -1)
            free_police_officers--;
        else if (event != -1)
            free_police_officers += event;
    }

    printf("%lld", unsolved_crimes);
}

void bachgolds_task() {
    long long k;
    scanf("%lld", &k);

    long long quantity_2 = k / 2;

    if (!(k % 2)) {
        printf("%lld\n", quantity_2);

        for (int i = 0; i < quantity_2; i++)
            printf("2 ");
    } else {
        printf("%lld\n", quantity_2);

        for (int i = 0; i < (quantity_2 - 1); i++)
            printf("2 ");

        printf("3");
    }
}

void mishka_and_big_brother() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long limak_weight = a;
    long long bob_weight = b;
    int years = 0;

    while (limak_weight <= bob_weight) {
        limak_weight *= 3;
        bob_weight *= 2;
        years++;
    }

    printf("%d", years);
}

void postcards_for_friends() {
    long long t;
    scanf("%lld", &t);

    long long number_of_postcards = 1;

    for (int i = 0; i < t; i++) {
        long long w, h, n;
        scanf("%lld %lld %lld", &w, &h, &n);

        while (!(w % 2) || !(h % 2)) {
            if (!(w % 2))
                w /= 2;
            else
                h /= 2;

            number_of_postcards *= 2;

            if (number_of_postcards >= n)
                break;
        }

        printf(number_of_postcards >= n ? "YES\n" : "NO\n");

        number_of_postcards = 1;
    }
}

void vanya_and_the_cubes() {
    long long n;
    scanf("%lld", &n);

    long long number_of_cubes = n;
    long long floor = 0;
    long long sum = 0;

    for (int i = 1; number_of_cubes >= 0; i++) {
        sum += i;
        number_of_cubes -= sum;
        floor++;
    }

    long long answer = floor - 1;

    printf("%lld", answer);
}

void review_site() {
    long long t;
    scanf("%lld", &t);

    for (int i = 0; i < t; i++) {
        long long n;
        scanf("%lld", &n);

        long long likes = 0;
        for (int j = 0; j < n; j++) {
            int r;
            scanf("%d", &r);

            if (r != 2)
                likes++;
        }

        printf("%lld\n", likes);
    }
}

void system_administrator() {
    long long n;
    scanf("%lld", &n);

    long long received_information_on_a = 0;
    long long received_information_on_b = 0;

    for (long long i = 0; i < n; i++) {
        long long t, x, y;
        scanf("%lld %lld %lld", &t, &x, &y);

        if (t == 1)
            received_information_on_a += x - y;
        else
            received_information_on_b += x - y;
    }

    printf(received_information_on_a >= 0 ? "LIVE\n" : "DEAD\n");
    printf(received_information_on_b >= 0 ? "LIVE" : "DEAD");
}

void buying_food() {
    long long t;
    scanf("%lld", &t);

    long long answer = 0;

    for (int i = 0; i < t; i++) {
        long long s;
        scanf("%lld", &s);

        answer = s;

        while (s > 9) {
            answer += s / 10;
            s = s / 10 + s % 10;
        }

        printf("%lld\n", answer);
    }
}

void problem_lunches() {
    long long n, k;
    scanf("%lld %lld", &n, &k);

    long long max_pleasure = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        long long f, t;
        scanf("%lld %lld", &f, &t);

        long long pleasure = f;
        if (t > k)
            pleasure -= t - k;

        max_pleasure = ll_max2(max_pleasure, pleasure);
    }

    printf("%lld", max_pleasure);
}

void a_tricky_amount() {
    long long t;
    scanf("%lld", &t);

    for (int i = 0; i < t; i++) {
        long long n;
        scanf("%lld", &n);

        long long sum = (1 + n) * n / 2;
        long long degree_2 = 1;

        while (degree_2 <= n) {
            sum -= (2 * degree_2);
            degree_2 <<= 1;
        }

        printf("%lld\n", sum);
    }
}

#define MAX_CANDIES 8

void arya_and_bran() {
    long long n, k;
    scanf("%lld %lld", &n, &k);

    long long aryas_candy = 0;
    long long brans_candy = 0;
    long long day_counter = 0;

    for (long long i = 0; i < n; i++) {
        long long a;
        scanf("%lld", &a);

        aryas_candy += a;
        long long candyes_for_bran = min2(MAX_CANDIES, aryas_candy);
        brans_candy += candyes_for_bran;
        aryas_candy -= candyes_for_bran;
        day_counter++;

        if (brans_candy >= k)
            break;
    }

    printf(brans_candy < k ? "-1" : "%lld", day_counter);
}

void the_heraldine_monetary_system() {
    long long n;
    scanf("%lld", &n);

    int is_min_unsuccessful_amount = 1;

    for (int i = 0; i < n; i++) {
        long long a;
        scanf("%lld", &a);

        if (a == 1) {
            is_min_unsuccessful_amount = -1;
            break;
        }
    }

    printf("%d", is_min_unsuccessful_amount);
}

void bear_and_raspberry() {
    long long n, c;
    scanf("%lld %lld", &n, &c);

    long long x;
    scanf("%lld", &x);

    long long previous_x = x;
    long long max = 0;

    for (int i = 0; i < (n - 1); i++) {
        scanf("%lld", &x);

        max = ll_max2(previous_x - x - c, max);
        previous_x = x;
    }

    printf("%lld", max);
}

void increasing_sequence() {
    long long n, d;
    scanf("%lld %lld", &n, &d);

    long long previous_b;
    scanf("%lld", &previous_b);

    long long moves = 0;

    for (int i = 0; i < (n - 1); i++) {
        long long b;
        scanf("%lld", &b);

        long long current_b = b;
        long long number_of_moves_up_to_previous_b;

        if (current_b <= previous_b) {
            number_of_moves_up_to_previous_b = (previous_b - current_b) / d + 1;
            moves += number_of_moves_up_to_previous_b;
            current_b += number_of_moves_up_to_previous_b * d;
        }

        previous_b = current_b;
    }

    printf("%lld", moves);
}

void alyonas_schedule() {
    long long n;
    scanf("%lld", &n);

    long long previous_lesson;
    scanf("%lld", &previous_lesson);

    int is_the_opportunity_to_go_home = 0;
    long long lessons = previous_lesson;

    for (int i = 0; i < (n - 1); i++) {
        int a;
        scanf("%d", &a);

        if (a)
            lessons++;

        if (previous_lesson && !a)
            is_the_opportunity_to_go_home = 1;
        else if (!previous_lesson && !a)
            is_the_opportunity_to_go_home = 0;
        else if (!previous_lesson && a &&
                 is_the_opportunity_to_go_home) {
            is_the_opportunity_to_go_home = 0;
            lessons++;
        }

        previous_lesson = a;
    }

    printf("%lld", lessons);
}