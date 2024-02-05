#include <unistd.h>

static unsigned int stu_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}

int stu_puts(const char *str)
{
    int count;
    char newline;

    newline = '\n';
    count = write(1, str, stu_strlen(str));
    count = count + write(1, &newline, 1);
    return count;
}
