#include <stddef.h>

char *stu_strchr(const char *str, char subject)
{
    int count;

    count = 0;
    while (str[count] != '\0') {
        if (str[count] == subject)
            return (char *) &str[count];
        else
            count = count + 1;
    }
    return NULL;
}
