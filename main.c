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

    // ���� �Է� �ȳ� ���
    printf("%i�� ������ �Է��ϼ���\n", SIZE);

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &testscore[i]);   // & �߰� �ʿ�
        sum += testscore[i];          // ��Ÿ ����: teatscore -> testscore
    }

    avg = (float)sum / SIZE;

    printf("����: %d\n", sum);
    printf("���: %.2f\n", avg);

    return 0;
}

