static int stu_strchr(const char *str, char subject)
{
    int count;

    count = 0;
    while (str[count] != '\0') {
        if (str[count] == subject)
            return 1;
        else
            count = count + 1;
    }
    return 0;
}


int has_opt(int ac, char **av, char opt)
{
    int count;

    count = 1;
    while (count < ac) {
        if (av[count][0] == '-') {
            if (stu_strchr(av[count], opt) == 1) {
                return 1;
            }
        }
        count = count + 1;
    }
    return 0;
}
