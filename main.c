
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int i;
    int score[SIZE];
    int copy[SIZE];

    for (i = 0; i < SIZE; i++)
    {
        score[i] = rand() % 100;
    }

    for (i = 0; i < SIZE; i++)
    {
        copy[i] = score[i];
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("copy[%d] = %d\n", i, copy[i]);
    }

    return 0;
}
