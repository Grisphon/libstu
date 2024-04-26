#include <stdlib.h>
#include "stu.h"

unsigned int *sublen(const char *str, char token)
{
    unsigned int count;
    unsigned int j;
    unsigned int old;
    unsigned int *array;

    j = 0;
    old = 0;
    array = malloc(sizeof(int) * (count_token(str, token) + 1));
    count = 0;
    while (count < count_token(str, token) + 1) {
        while (str[j] != token && str[j] != '\0')
            j += 1;
        array[count] = j - old;
        old = old + array[count] + 1;
        count += 1;
        j += 1;
    }
    return array;
}
