#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
// #define �������ϱ� ���� ����Ǵ� �����Ϸ��� �� �κ�. ���� '��ũ��'��� ��.
#define _CRT_SECURE_NO_WARNINGS //scanf ���� ����
#define ROOM_WIDTH 10 //���� �ʺ�
#define HME_POS 1 //�� ��ġ
#define BWL_PO (ROOM_WIDTH - 2) //���� ��ġ

int main(void) {
	srand((unsigned int)time(NULL));


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

		char name[20];
		printf("�߿����� �̸��� ���� �ּ���: ");
		scanf_s("%s", name, 20); //%c�� ��ߵǳ�?? //scanf_s�� ���ڿ� �Է½� �ڿ� ������ ũ�⸦ �Է��ؾߵ�.
		printf("�߿����� �̸��� %s�Դϴ�.", name);
		Sleep(1000);
		system("cls");


		//1-2)���� ��� //���ݱ��� ���� ������ ���� //ģ�е� ���� ������ ���
		int soup = 0;
		int relation = 2;
		relation <= 0 && relation <= 4;
		printf("==================== ���� ���� ====================\n");
		printf("������� ���� ���� : %d��\n", soup);
		printf("������� ����(0~4) : %d\n", relation);
		printf("  �׷����� �� ���� �����Դϴ�.\n");
		printf("===================================================\n");
		printf("												   \n");
		Sleep(500);


		//1-4)�� �׸���
		printf("          \n");
		printf("##########\n");
		printf("#H      B#\n");
		printf("#C       #\n");
		printf("##########\n");
		printf("          \n");

		int height = 4;
		int i, j;
		for (i = 0; i < height; i++) {
			for (j = 0; j < ROOM_WIDTH; j++) {
				// ù ��° �࿡�� HME_POS�� BWL_PO ǥ��
				if (i == 1 && j == HME_POS) {
					printf("H"); // Ȩ ��ġ ǥ��
				}
				else if (i == 1 && j == BWL_PO) {
					printf("B"); // Ư�� ��ġ ǥ��
				}
				// ��� �׸���
				else if (i == 0 || i == height - 1 || j == 0 || j == ROOM_WIDTH - 1) {
					printf("#"); // ���� #����
				}
				else {
					printf(" "); // ���δ� ��������
				}
			}
			printf("\n"); // �� �ٲ�
		}


		//1-3)��ȣ�ۿ�
		int interaction = 0;
		int relation1 = relation;
		int dice = rand() % 6 + 1;
		printf("                                                                \n");
		printf("� ��ȣ�ۿ��� �Ͻðڽ��ϱ�?   0. �ƹ��͵� ���� ����   1. �ܾ� �ֱ�\n");
		Loop:
		printf(">> ");
		scanf_s("%d", &interaction);
		if (interaction == 0 || interaction == 1) {
			if (interaction == 0) {
				printf("�ƹ��͵� ���� �ʽ��ϴ�.\n");
				Sleep(1000);
				printf("4/6�� Ȯ���� ģ�е��� �������ϴ�.\n");
				Sleep(1000);
				printf("�ֻ����� �����ϴ�. �Ǹ���...\n");
				Sleep(1000);
				printf("%d��(��) ���Խ��ϴ�!\n", dice);
				if (dice <= 4) {
					printf("ģ�е��� �������ϴ�.\n");
					printf("���� ģ�е�: %d\n", relation1 -= 1);
				}
				else {
					printf("������ ģ�е��� �������� �ʾҽ��ϴ�.\n");
					printf("���� ģ�е�: %d\n", relation1);
				}
			}
			else {
				printf("%s�� ���� �ܾ��־����ϴ�.\n", name);
				Sleep(1000);
				printf("2/6�� Ȯ���� ģ�е��� �������ϴ�.\n");
				Sleep(1000);
				printf("�ֻ����� �����ϴ�. �Ǹ���...\n");
				Sleep(1000);
				printf("%d��(��) ���Խ��ϴ�!\n", dice);
				if (dice == 5 || dice == 6) {
					printf("ģ�е��� �������ϴ�.\n");
					printf("���� ģ�е�: %d\n", relation1 += 1);
				}
				else {
					printf("ģ�е��� �״���Դϴ�.\n");
					printf("���� ģ�е�: %d\n", relation1);
				}
			}
		}
		else {
			goto Loop;
		}


		//1-5) �̵�
		printf("%s �̵�: ����� ģ���Ҽ��� ���� ������ �� Ȯ���� �������ϴ�.\n", name);
		printf("�ֻ��� ���� 3 �̻��̸� ���� ������ �̵��մϴ�.\n");
		printf("�ֻ����� �����ϴ�. �Ǹ���...\n");
		printf("%d�� (��) ���Խ��ϴ�!\n", dice);
		if (dice >= 3) {
			printf("���� ������ �����Դϴ�.");
			//���� ������ �� ĭ �̵�
		}
		else {
			printf("");
			//�� ������ �� ĭ �̵�
		}
	}


}
//�ֻ����� ���� 6 �̻��� ��, ������ �ߵ��Ǵ���
//ģ�е��� 6 �̻��� ��, ������ �ߵ��Ǵ��� (�ٵ�, ģ�е��� �ִ� 4�� �����Ǿ�����.)
