#include <unistd.h>
#include "printf.h"

int print_perc(int fd, va_list list, struct flag *flag_printf)
{
    (void) list;
    (void) flag_printf;

    return write(fd, "%", 1);
}

