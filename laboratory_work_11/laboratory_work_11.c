//
// Created by Artyom on 12.10.2023.
//

#include "laboratory_work_11.h"

void input_fraction(Fraction *f) {
    scanf("%d/%d", &f->numerator, &f->denumerator);

    assert(f->denumerator);
}

void input_fractions(Fraction *f, size_t n) {
    for (size_t i = 0; i < n; i++)
        input_fraction(&f[i]);
}

void output_fraction(Fraction f) {
    printf("%d/%d\n", f.numerator, f.denumerator);
}

void output_fractions(Fraction *f, size_t n) {
    for (size_t i = 0; i < n; i++)
        output_fraction(f[i]);
}

void simple_fraction(Fraction *f) {
    int gcd_fraction = gcd(f->numerator, f->denumerator);

    assert(gcd_fraction);
    f->numerator /= gcd_fraction;
    f->denumerator /= gcd_fraction;
}

Fraction mul_fraction(Fraction f1, Fraction f2) {
    Fraction f = (Fraction)
            {
                    f1.numerator * f2.numerator,
                    f1.denumerator * f2.denumerator
            };
    simple_fraction(&f);

    return f;
}

Fraction div_fraction(Fraction f1, Fraction f2) {
    assert(f2.numerator);
    swap(&f2.numerator, &f2.denumerator, sizeof(f2.numerator));

    return mul_fraction(f1, f2);
}

Fraction add_fraction(Fraction f1, Fraction f2) {
    Fraction f = (Fraction)
            {
                    f1.numerator * f2.denumerator +
                    f2.numerator * f1.denumerator,

                    f1.denumerator * f2.denumerator
            };
    simple_fraction(&f);

    return f;
}

Fraction sub_fraction(Fraction f1, Fraction f2) {
    f2.numerator = -f2.numerator;

    return add_fraction(f1, f2);
}

Fraction sum_fractions(Fraction *f, size_t n) {
    Fraction sum = f[0];

    for (size_t i = 1; i < n; i++)
        sum = add_fraction(sum, f[i]);

    return sum;
}