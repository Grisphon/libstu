char *stu_strcpy(char *dest, const char *src)
{
    int count;

    count = 0;
    while (src[count] != '\0') {
        dest[count] = src[count];
        count = count + 1;
    }
    dest[count] = '\0';
    return dest;
}
