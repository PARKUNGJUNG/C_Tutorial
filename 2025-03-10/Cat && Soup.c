#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
// #define �������ϱ� ���� ����Ǵ� �����Ϸ��� �� �κ�. ���� '��ũ��'��� ��.
#define _CRT_SECURE_NO_WARNINGS
#define ROOM_WIDTH 10 //���� �ʺ�
#define HME_POS 1 //�� ��ġ
#define BWL_PO (ROOM_WIDTH - 2) //���� ��ġ

//��� ������ 2025-04-08 ����.

//�ֻ����� ���� 6 �̻��� ��, ������ �ߵ��Ǵ��� // (6-ģ�е�)�� ������.
//ģ�е��� 6 �̻��� ��, ������ �ߵ��Ǵ��� (�ٵ�, ģ�е��� �ִ� 4�� �����Ǿ�����.)
//ģ�е��� ���尪�� ��� ��ġ�� �־�� ����� �ڵ尡 �ߵ��Ǵ���. //while ������
//���� ���¶� ���� ��� �׻� ������. //while ������
//goto���� ����ص� �Ǵ���.

int main(void) {
	srand((unsigned int)time(NULL));

	int soup = 0;
	int relation = 2;	
	int relation1 = relation;
	int cat = 1; //������� �ʱ� ��ġ
	int cat1 = cat; // ���� ����� ��ġ
	int cat2 = cat1;
	int height = 4;

	//1-4)�� �׸���
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < ROOM_WIDTH; j++) {
			if (i == 1 && j == HME_POS) {
				printf("H"); // �� ��ġ ǥ��
			}
			else if (i == 1 && j == BWL_PO) {
				printf("B"); // ���� ��ġ ǥ��
			}
			else if (i == 2 && j == cat1) {
				printf("C"); //����� ��ġ ǥ��
			}
			else if (i == 2 && j == cat2) {
				printf("."); //����� ���� ��ġ ǥ��
			}
			// ��� �׸���
			else if (i == 0 || i == height - 1 || j == 0 || j == ROOM_WIDTH - 1) {
				printf("#");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}


	//1-1)��Ʈ�� & �غ�
	while (1) {
		printf("                      \n");
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
		printf("==================== ���� ���� ====================\n");
		printf("������� ���� ���� : %d��\n", soup);
		printf("������� ����(0~4) : %d\n", relation1);
		printf("  �׷����� �� ���� �����Դϴ�.\n");
		printf("===================================================\n");
		printf("												   \n");
		Sleep(500);


		//1-4)�� �׸���
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < ROOM_WIDTH; j++) {
				if (i == 1 && j == HME_POS) {
					printf("H"); // �� ��ġ ǥ��
				}
				else if (i == 1 && j == BWL_PO) {
					printf("B"); // ���� ��ġ ǥ��
				}
				else if (i == 2 && j == cat1) {
					printf("C"); //����� ��ġ ǥ��
				}
				else if (i == 2 && j == cat2 && cat2 != cat1) {
					printf("."); //����� ���� ��ġ ǥ��
				}
				// ��� �׸���
				else if (i == 0 || i == height - 1 || j == 0 || j == ROOM_WIDTH - 1) {
					printf("#");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}

		
		//1-3)��ȣ�ۿ�
		int interaction = 0;
		int dice = rand() % 6 + 1;
		printf("                                                                \n");
		printf("� ��ȣ�ۿ��� �Ͻðڽ��ϱ�?   0. �ƹ��͵� ���� ����   1. �ܾ� �ֱ�\n");
		Loop:
		printf(">> ");
		scanf_s("%d", &interaction);
		if (interaction == 0 || interaction == 1) {
			if (interaction == 0) {
				printf("�ƹ��͵� ���� �ʽ��ϴ�.\n");
				Sleep(500);
				printf("4/6�� Ȯ���� ģ�е��� �������ϴ�.\n");
				Sleep(500);
				printf("�ֻ����� �����ϴ�. �Ǹ���...\n");
				Sleep(500);
				printf("%d��(��) ���Խ��ϴ�!\n", dice);
				if (dice <= 4) {
					printf("ģ�е��� �������ϴ�.\n");
					relation1 -= 1;
					if (relation1 < 0) {
						relation1 = 0;
					}
					printf("���� ģ�е�: %d\n", relation1);
				}
				else {
					printf("������ ģ�е��� �������� �ʾҽ��ϴ�.\n");
					printf("���� ģ�е�: %d\n", relation1);
				}
			}
			else {
				printf("%s�� ���� �ܾ��־����ϴ�.\n", name);
				Sleep(500);
				printf("2/6�� Ȯ���� ģ�е��� �������ϴ�.\n");
				Sleep(500);
				printf("�ֻ����� �����ϴ�. �Ǹ���...\n");
				Sleep(500);
				printf("%d��(��) ���Խ��ϴ�!\n", dice);
				if (dice == 5 || dice == 6) {
					printf("ģ�е��� �������ϴ�.\n");
					relation1 += 1;
					if (relation1 > 4) {
						relation1 = 4;
					}
					printf("���� ģ�е�: %d\n", relation1);
					printf("\n");
				}
				else {
					printf("ģ�е��� �״���Դϴ�.\n");
					printf("���� ģ�е�: %d\n", relation1);
					printf("\n");
				}
			}
		}
		else {
			goto Loop;
		}

		
		//1-5) �̵�
		int relation2 = 6 - relation1;
		printf("%s �̵�: ����� ģ���Ҽ��� ���� ������ �� Ȯ���� �������ϴ�.\n", name);
		Sleep(500);
		printf("�ֻ��� ���� %d �̻��̸� ���� ������ �̵��մϴ�.\n", relation2);
		Sleep(500);
		printf("�ֻ����� �����ϴ�. �Ǹ���...\n");
		Sleep(500);
		printf("%d�� (��) ���Խ��ϴ�!\n", dice);
		if (dice >= relation2) {
			printf("���� ������ �����Դϴ�.\n");
			printf("\n");
			//���� ������ �� ĭ �̵�
			if (cat1 + 1 < ROOM_WIDTH - 1) {
				cat1++;
			}
		}
		else {
			//�� ������ �� ĭ �̵�
			printf("\n");
			if (cat1 - 1 > 0) {
				cat1--;
			}
		}
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < ROOM_WIDTH; j++) {
				if (i == 1 && j == HME_POS) {
					printf("H"); // �� ��ġ ǥ��
				}
				else if (i == 1 && j == BWL_PO) {
					printf("B"); // ���� ��ġ ǥ��
				}
				else if (i == 2 && j == cat1) {
					printf("C"); //����� ��ġ ǥ��
				}
				else if (i == 2 && j == cat2 && cat2 != cat1) {
					printf("."); //����� ���� ��ġ ǥ��
				}
				// ��� �׸���
				else if (i == 0 || i == height - 1 || j == 0 || j == ROOM_WIDTH - 1) {
					printf("#");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
		//Sleep(2500);
		//system("cls");
	}
}
