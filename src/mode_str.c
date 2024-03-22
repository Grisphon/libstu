#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include "perm.h"
#include "stu.h"
#include <stdlib.h>

const struct who_table_row WHO_TAB[] =   {
    {"user", 0b111000000},
    {"group", 0b000111000},
    {"other", 0b000000111}
};

const struct what_table_row WHAT_TAB[] = {
    {"read", 0b100100100},
    {"write", 0b010010010},
    {"execute", 0b001001001}
};

char *mode(char *path)
{
    struct stat stat_data;
    unsigned int idx;
    unsigned int j;
    char *chmod;
    char *original;

    j = 0;
    original = "rwxrwxrwx";
    chmod = malloc(sizeof(char) * 10);
    stat(path, &stat_data);
    while (j < 3) {
        idx = 0;
        while (idx < 3) {
            if (WHO_TAB[j].mask & WHAT_TAB[idx].mask & stat_data.st_mode)
                chmod[3 * j + 1 * idx] = original[3 * j + 1 * idx];
            else
                chmod[3 * j + 1 * idx] = '-';
            idx += 1;
        }
        j += 1;
    }
    chmod[9] = '\0';
    return chmod;
}
