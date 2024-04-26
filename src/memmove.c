/*
 * E89 Pedagogical & Technical Lab
 * project:     memory
 * created on:  2024-02-07 - 11:15 +0100
 * 1st author:  ilan.trigueiro-legrand - ilan.trigueiro-legrand
 * description: memmove
 */

static void *left(void *dest, const void *src, unsigned int n)
{
    char *dest1;
    char *src1;
    unsigned int count;

    dest1 = (char *) dest;
    src1 = (char *) src;
    count = 0;
    while (count < n) {
        dest1[count] = src1[count];
        count += 1;
    }
    return dest1;
}

static void *right(void *dest, const void *src, unsigned int n)
{
    char *dest1;
    char *src1;

    dest1 = (char *) dest;
    src1 = (char *) src;
    while (n > 0) {
        dest1[n - 1] = src1[n - 1];
        n -= 1;
    }
    return dest1;
}

void *stu_memmove(void *dest, const void *src, unsigned int n)
{
    if (dest > src) {
        return right(dest, src, n);
    } else {
        return left(dest, src, n);
    }
}
