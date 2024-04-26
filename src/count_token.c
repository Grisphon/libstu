unsigned int count_token(const char *str, char token)
{
    unsigned int i;
    unsigned int total;

    total = 0;
    i = 0;
    while (str[i] != '\0') {
        if (str[i] == token)
            total += 1;
        i = i + 1;
    }
    return total;
}
