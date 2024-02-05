int stu_atoi(const char *str)
{
    int result;
    int sign;
    int count;

    result = 0;
    sign = 1;
    count = 0;
    if (str[0] == '-') {
        sign = -1;
        count = count + 1;
    }
    while (str[count] != '\0' && str[count] >= '0' && str[count] <= '9') {
        result = result * 10 + (str[count] - '0');
        count = count + 1;
    }
    return sign * result;
}
