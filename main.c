#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//5���� �л��� ���� ���� ���� ���� �迭 ���� 
	
	int test_score[5];
	int i;
	int grade[5];
	
	grade[0] = 10;
	grade[1] = 20;
	grade[2] = 30;
	grade[3] = 40;
	grade[4] = 50;
	
	//���� ȭ�� ���(�ݺ��� Ȱ��)
	
	for (i=0;i<5;i++)
       	printf("grade[%i] = %i\n", i, test_score[i]);
	
	system("PAUSE"); 
	
	return 0;
}
