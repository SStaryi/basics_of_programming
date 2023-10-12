//
// Created by Artyom on 12.10.2023.
//

#include "str.h"

long long str_len(char *begin) {
    char *end = begin;
    while (*end != '\0')
        end++;

    return end - begin;
}

char *find(char *begin, char *end, int ch) {
    while (begin != end && *begin != ch)
        begin++;

    return begin;
}

char *find_non_space(char *begin) {
    while (*begin != '\0' && isspace(*begin))
        begin++;

    return begin;
}

char *find_space(char *begin) {
    while (*begin != '\0' && isspace(*begin))
        begin++;

    return begin;
}

char *find_non_space_reverse(char *rbegin, const char *rend) {
    while (rbegin != rend && isspace(*rbegin))
        rbegin--;

    return rbegin;
}

char *find_space_reverse(char *rbegin, const char *rend) {
    while (rbegin != rend && !isspace(*rbegin))
        rbegin--;

    return rbegin;
}

int strcmp(const char *lhs, const char *rhs) {
    while (*lhs && (*lhs == *rhs))
        lhs++, rhs++;

    return (*lhs - *rhs);
}

char *copy(const char *begin_source, const char *end_source, char *begin_destination) {
    memcpy(begin_destination, begin_source, end_source - begin_source);

    return begin_destination;
}

char *copy_if(char *begin_source, const char *end_source, char *begin_destination,
              long long (*f)(long long)) {
    while (begin_source != end_source) {
        if (!f(*begin_source))
            *begin_destination++ = *begin_source;

        *begin_source++;
    }

    return begin_destination;
}

char *copy_if_reverse(char *rbegin_source, const char *rend_source, char *begin_destination,
                      long long (*f)(long long)) {
    while (rbegin_source != rend_source) {
        if (!f(*rbegin_source))
            *begin_destination++ = *rbegin_source;

        *rbegin_source--;
    }

    return begin_destination;
}