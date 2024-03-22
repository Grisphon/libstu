#ifndef STU_H
#define STU_H

struct intarr{
    int *data;
    unsigned int size;
    unsigned int space;
};

struct intarr *intarr_create(unsigned int space);
void intarr_delete(struct intarr *arr);
int intarr_push(struct intarr *arr, int nb);
int intarr_sum(struct intarr *arr);
int intarr_avg(struct intarr *arr);
void intarr_foreach(struct intarr *arr, void func(int nb));

void *stu_memset(void *ptr, char byte, unsigned int n);
void *stu_memcpy(void *dest, const void *src, unsigned int n);
void *arrset(void *array, const void *elem,
             unsigned int elem_size, unsigned int n);
void *stu_memmove(void *dest, const void *src, unsigned int n);
unsigned int stu_strlen(const char *s);
char *stu_strcpy(char *dest, const char *src);
char *stu_strcat(char *dest, const char *src);
int stu_strcmp(const char *s1, const char *s2);
char *stu_strdup(const char *src);
char *stu_strchr(const char *s, char c);
int stu_atoi(const char *str);
int print_base10(int nb);
int stu_puts(const char *s);
int has_opt(int ac, char **av, char opt);
char *has_opt_value(int ac, char **av, char opt);
char *strdupcat(char *str1, char *str2);
char *mode(char *path);
int get_dig(int nb, int index);
int nb_l(int nb);

#endif
