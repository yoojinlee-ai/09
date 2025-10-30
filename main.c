#include <stdio.h>
#include <stdlib.h>
#define SIZE 5


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>
#define SIZE 5

int main(int argc, char *argv[]) {
    int testscore[SIZE];
    int i;
    int sum = 0;
    float avg;

    // 점수 입력 안내 출력
    printf("%i명 점수를 입력하세요\n", SIZE);

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &testscore[i]);   // & 추가 필요
        sum += testscore[i];          // 오타 수정: teatscore -> testscore
    }

    avg = (float)sum / SIZE;

    printf("총점: %d\n", sum);
    printf("평균: %.2f\n", avg);

    return 0;
}

