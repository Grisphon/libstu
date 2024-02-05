#include <stddef.h>

static int stu_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}

static int stu_strchr(const char *str, char subject)
{
    int len;

    len = stu_strlen(str);
    if (str[len - 1] == subject) {
        return 1;
    }
    return 0;
}


static int has_opt(int ac, char **av, char opt)
{
    int count;

    count = 1;
    while (count < ac) {
        if (av[count][0] == '-') {
            if (stu_strchr(av[count], opt) == 1) {
                return count;
            }
        }
        count = count + 1;
    }
    return 0;
}

const char *has_opt_value(int argc, char **argv, char opt)
{
    int opt_pos;

    opt_pos = has_opt(argc, argv, opt);
    if (opt_pos != 0 && opt_pos != argc - 1) {
        if (argv[opt_pos + 1][0] != '-')
            return argv[opt_pos + 1];
    }
    return NULL;
}
