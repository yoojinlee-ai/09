#include <stdio.h>
#include <stdlib.h>  // system() 함수 선언 위해 필요

#define SIZE 5

int main() {
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};  // () -> {} 로 변경
    int b[SIZE] = {1, 5, 3, 4, 6};  // () -> {} 로 변경
    int flag_same = 1;

    for (i = 0; i < SIZE; i++) {
        if (a[i] != b[i]) {
            printf("%d-th element is diff.\n", i);  // printf 형식 수정, 변수 i 위치 수정
            flag_same = 0;  // 다르면 flag 변경
        }
    }

    printf("Are a and b same? %d\n", flag_same);

    system("PAUSE");

    return 0;
}


