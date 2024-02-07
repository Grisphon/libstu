void *stu_memset(void *ptr, char byte, unsigned int n)
{
    unsigned int count;
    char *new_ptr;

    count = 0;
    new_ptr = (char *) ptr;
    while(count < n) {
        new_ptr[count] = byte;
        count += 1;
    }
    return (void *) new_ptr;
}
