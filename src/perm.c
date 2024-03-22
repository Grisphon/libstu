#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include "perm.h"
#include "stu.h"

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

const unsigned int WHAT_TAB_LEN =
    sizeof(WHAT_TAB) / sizeof(struct what_table_row);
const unsigned int WHO_TAB_LEN = sizeof(WHO_TAB) / sizeof(struct who_table_row);

int who_is(char **argv)
{
    unsigned int idx;
    int mask;

    mask = 0b0;
    idx = 0;
    while (idx < WHO_TAB_LEN) {
        if (stu_strcmp(WHO_TAB[idx].who, argv[2]) == 0){
            mask = WHO_TAB[idx].mask;
        }
        idx += 1;
    }
    return mask;
}

int perm(int argc, char **argv)
{
    struct stat stat_data;
    int mask;
    unsigned int idx;

    if (argc != 4)
        return 2;
    mask = who_is(argv);
    idx = 0;
    while (idx < WHAT_TAB_LEN) {
        if (stu_strcmp(WHAT_TAB[idx].what, argv[3]) == 0){
            mask = mask & WHAT_TAB[idx].mask;
        }
        idx += 1;
    }
    stat(argv[1], &stat_data);
    if (mask & stat_data.st_mode) {
        write(1, "yes\n", 4);
        return 0;
    }
    write(1, "no\n", 3);
    return 1;
}

