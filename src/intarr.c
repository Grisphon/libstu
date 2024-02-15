#include "../include/stu.h"
#include <stdlib.h>

/*
 * struct intarr{
 *     int *data;
 *     unsigned int size;
 *     unsigned int space;
 * };
 */

struct intarr *intarr_create(unsigned int space)
{
    struct intarr *arr;

    arr = malloc(sizeof(struct intarr));
    arr->size = 0;
    arr->space = space;
    arr->data = malloc(sizeof(int) * space);
    return arr;
}

void intarr_delete(struct intarr *arr)
{
    free(arr->data);
    free(arr);
}

int intarr_push(struct intarr *arr, int nb)
{
    if (arr->size == arr->space)
        return 0;
    arr->data[arr->size] = nb;
    arr->size += 1;
    return 1;
}

int intarr_sum(struct intarr *arr)
{
    unsigned int count;
    int total;

    total = 0;
    count = 0;
    while (count < arr->size) {
        total = total + arr->data[count];
        count += 1;
    }
    return total;
}

int intarr_avg(struct intarr *arr)
{
    unsigned int count;
    int total;

    total = 0;
    count = 0;
    if (arr->size == 0)
        return -1;
    while (count < arr->size) {
        total = total + arr->data[count];
        count += 1;
    }
    return total / arr->size;
}
