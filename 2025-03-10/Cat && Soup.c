#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define _CRT_SECURE_NO_WARNINGS //scanf ���� ����

int main(void) {

	//��Ʈ��
	while (1) {
		printf("****�����̿� ����****\n\n\n");
		printf("           /\\_/\\    \n");
		printf("     /\\   / �� �� \\   \n");
		printf("    //\\\\  \\~(*)~/  \n");
		printf("    `  \\/    ^ /     \n");
		printf("       |  \\|| ||     \n");
		printf("       \\  '|| ||     \n");
		printf("        \\)  ()-())   \n\n");

		char sunquan[20];
		printf("�߿����� �̸��� ���� �ּ���: ");
		scanf_s("%s", sunquan, 20); //scanf_s�� ���ڿ� �Է½� �ڿ� ������ ũ�⸦ �Է��ؾߵ�.
		printf("�߿����� �̸��� %s�Դϴ�.", sunquan);

		Sleep(1000);
		system("cls");
	}


}