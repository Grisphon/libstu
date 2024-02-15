#include "../include/vector.h"

void vector_set_destructor(struct vector *ve, void dtor(void *elem))
{
    ve->dtor = dtor;
}
