// 과제 제출
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
    int number[SIZE];
    srand(time(NULL));

    for (int i = 0; i < SIZE; i++)
        number[i] = rand() % 101;

    /* 3번: 결과 출력 */
    int max = number[0], min = number[0], sum = 0;

    for (int i = 0; i < SIZE; i++) {
        printf("학생 %2d 점수: %3d\n", i + 1, number[i]);

        sum += number[i];
        if (number[i] > max) max = number[i];
        if (number[i] < min) min = number[i];
    }

    printf("\n최댓값: %d\n", max);
    printf("최솟값: %d\n", min);
    printf("평균: %.2f\n", (double)sum / SIZE);

    return 0;
}