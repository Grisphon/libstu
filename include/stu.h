#ifndef STU_H
#define STU_H

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

#endif
