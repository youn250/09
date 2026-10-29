
#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i;
    int score[SIZE];

    printf("5명의 점수를 입력하세요.\n");

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &score[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("score[%d] = %d\n", i, score[i]);
    }

    return 0;
}
