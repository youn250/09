
#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i, average;
    int sum;
    int score[SIZE];

    sum = 0;

    for (i = 0; i < SIZE; i++)
    {
        printf("학생 성적을 입력하세요 : ");
        scanf("%d", &score[i]);
        sum += score[i];
    }

    average = sum / SIZE;

    printf("성적 평균 : %d\n", average);

    return 0;
}