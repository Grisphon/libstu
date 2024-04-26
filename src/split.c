#include <stdio.h>
#include <stdlib.h>
#include "stddef.h"
#include "stu.h"

char **split(const char *str, char token)
{
    char **sentence;
    unsigned int *word_len;
    unsigned int count;
    unsigned int word_actu;
    unsigned int bookmark;

    bookmark = 0;
    count = 0;
    word_len = sublen(str, token);
    sentence = malloc(sizeof(char *) * (count_token(str, token) + 2));
    while (count < count_token(str, token) + 1) {
        word_actu = word_len[count];
        sentence[count] = stu_strdup_token(str + bookmark, token);
        sentence[count][word_actu] = '\0';
        bookmark += word_actu + 1;
        count += 1;
    }
    sentence[count] = NULL;
    free(word_len);
    return sentence;
}
