int stu_strcmp(char *str1, char *str2)
{
    int count;

    count = 0;
    while (str1[count] != '\0' || str2[count] != '\0') {
        if (str1[count] != str2[count])
            return 1;
        count += 1;
    }
    if (str1[count] == str2[count])
        return 0;
    return 1;
}
