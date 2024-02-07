void *stu_memcpy(void *dest, const void *src, unsigned int n)
{
    unsigned int count;
    char *new_dest;
    char *new_src;

    new_src = (char *) src;
    count = 0;
    new_dest = (char *) dest;
    while(count < n) {
        new_dest[count] = new_src[count];
        count += 1;
    }
    return new_dest;
}
