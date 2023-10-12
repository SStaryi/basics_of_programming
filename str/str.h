//
// Created by Artyom on 12.10.2023.
//

#ifndef BASICS_OF_PROGRAMMING_STR_H
#define BASICS_OF_PROGRAMMING_STR_H

#include <memory.h>
#include <ctype.h>

// Возвращает длину строки
long long str_len(char *begin);

// Возвращает указатель на первый элемент с кодом ch расположенным на ленте памяти между адресами begin
// и end не включая end
char *find(char *begin, char *end, int ch);

// Возвращает указатель на первый символ, отличный от пробельных, расположенный на ленте памяти,
// начиная с begin и заканчивая ноль-символом. Если символ не найден, возвращается адрес
// первого ноль-символа
char *find_non_space(char *begin);

// Возвращает указатель на первый пробельный символ, расположенный на ленте памяти начиная с адреса
// begin или на первый ноль-символ
char *find_space(char *begin);

// Возвращает указатель на первый справа символ, отличный от пробельных, расположенный на ленте
// памяти, начиная с rbegin (последний символ строки, за которым следует ноль-символ) и заканчивая
// rend (адрес символа перед началом строки). Если символ не найден, возвращается адрес rend
char *find_non_space_reverse(char *rbegin, const char *rend);

// Возвращает указатель на первый пробельный символ справа, расположенный на ленте памяти, начиная
// с rbegin и заканчивая rend. Если символ не найден, возвращается адрес rend
char *find_space_reverse(char *rbegin, const char *rend);

// Сравнивает 2 строки. Возвращает отрицательное значение, если lhs располагается до rhs
// в лексикографическом порядке, значение 0, если lhs и rhs равны, иначе – положительное значение
int strcmp(const char *lhs, const char *rhs);

// Записывает по адресу begin_destination фрагмент памяти, начиная с адреса begin_source до
// end_source. Возвращает указатель на следующий свободный фрагмент памяти в destination
char *copy(const char *begin_source, const char *end_source, char *begin_destination);

// Записывает по адресу begin_destination элементы из фрагмента памяти начиная с begin_source
// заканчивая end_source, удовлетворяющие функции-предикату f. Функция возвращает указатель на
// следующий свободный для записи фрагмент в памяти
char *copy_if(char *begin_source, const char *end_source, char *begin_destination,
              long long (*f)(long long));

// Записывает по адресу begin_destination элементы из фрагмента памяти начиная с rbegin_source
// заканчивая rend_source, удовлетворяющие функции-предикату f. Функция возвращает
// значение begin_destination по окончании работы функции
char *copy_if_reverse(char *rbegin_source, const char *rend_source, char *begin_destination,
                      long long (*f)(long long));

#endif //BASICS_OF_PROGRAMMING_STR_H
