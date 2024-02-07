void *stu_memmove(void *dest, const void *src, unsigned int n)
{
    unsigned int count;
    char *new_dest;
    char *new_src;

    new_dest = (char *) dest;
    new_src = (char *) src;
    count = 0;
    if (dest > src) {
        while (count <= n) {
            if (n - count < n)
                new_dest[n - count] = new_src[n - count];
            count += 1;
        }
    } else if (dest < src){
        while (count < n) {
            if (count - 1 > 0)
                new_dest[count] = new_src[count];
            count += 1;
        }
    }
    return dest;
}
