#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define _CRT_SECURE_NO_WARNINGS //scanf ���� ����

int main(void) {


	//1-1)��Ʈ�� & �غ�
	while (1) {
		printf("****�߿��̿� ����****\n\n\n");
		printf("           /\\_/\\    \n");
		printf("     /\\   / �� �� \\   \n");
		printf("    //\\\\  \\~(*)~/  \n");
		printf("    `  \\/    ^ /     \n");
		printf("       |  \\|| ||     \n");
		printf("       \\  '|| ||     \n");
		printf("        \\)  ()-())   \n\n");

		char sunquan[20];
		printf("�߿����� �̸��� ���� �ּ���: ");
		scanf_s("%s", sunquan, 20); //%c�� ��ߵǳ�?? //scanf_s�� ���ڿ� �Է½� �ڿ� ������ ũ�⸦ �Է��ؾߵ�.
		printf("�߿����� �̸��� %s�Դϴ�.", sunquan);
		Sleep(1000);
		system("cls");


	//1-2)���� ��� //���ݱ��� ���� ������ ���� //ģ�е� ���� ������ ���
		int soup = 0;
		int relation = 2;
		
		printf(
		"\
		==================== ���� ���� ====================\n\
		������� ���� ����: %d��\n\
		������� ����(0~4): %d\n\
		�׷����� �� ���� �����Դϴ�.\n\
		===================================================\
		\n\
		\n\
		", soup, relation);
		Sleep(500);
		*/
		
		printf("==================== ���� ���� ====================\n");
		printf("������� ���� ���� : %d��\n", soup);
		printf("������� ����(0~4) : %d\n", relation);
		printf("  �׷����� �� ���� �����Դϴ�.\n");
		printf("===================================================\n");
		printf("												   \n");
		Sleep(500);


		//1-3)��ȣ�ۿ�
		int interaction;
			printf("� ��ȣ�ۿ��� �Ͻðڽ��ϱ�?   0. �ƹ��͵� ���� ����   1. �ܾ� �ֱ�\n");
			printf(">> ");
			scanf_s("%d", &interaction);
			if (0 <= interaction && interaction <= 1) {
			//if (interaction = 0 || interaction = 1) { //������
				if (interaction == 0) {
					printf("�ƹ��͵� ���� �ʽ��ϴ�.\n");
					//�ֻ���, ģ�е� 6/4 Ȯ�� �ڵ�.
				}
				else {
					printf("%s�� ���� �ܾ��־����ϴ�.\n", sunquan);
					//6/2Ȯ�� �ڵ�.
				}
			}
			else {
				//��ȣ�ۿ뿡�� ���� ���� ���� �Է� �Ǹ� �ٽ� �Է� �ޱ�
			}
	}
}