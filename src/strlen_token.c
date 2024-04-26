unsigned int stu_strlen_token(const char *str, char token)
{
    unsigned int i;

    i = 0;
    while (str[i] != '\0' && str[i] != token)
        i = i + 1;
    return i;
}
