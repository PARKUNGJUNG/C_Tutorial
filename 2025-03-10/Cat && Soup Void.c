#include <stdio.h>
#include <stdlib.h> //C ǥ�� ��ƿ��Ƽ �Լ����� ��Ƴ��� �������
#include <time.h> //C ���� �ð� ���� �Լ��� ��Ƴ��� ���̺귯��

int main(void) {
	/*
	for (int i = 0; i <= 20; i++) {
		int r = rand() % 20; //rand()�Լ� : 0~32767���� ������ ����.
		printf("%d\n", r);
	}
	//return 0;

	//��������
	//1)
	for (int i = 0; i <= 20; i++) {
		int r1 = rand() % 4;
		printf("%d", r1);
	}

	for (int i = 0; i <= 20; i++) {
		int r1 = rand() % 4 + 1;
		printf("%d", r1);
	}

	for (int i = 0; i <= 20; i++) {
		int r1 = rand() % 101;
		printf("%d\n", r1);
	}

	int n = 0;
	printf("n = ");
	scanf_s("%d", &n);
	for (int i = 0; i <= 20; i++) {
		int r1 = rand() % n;
		printf("%d\n", r1);
	}

	int n = 0;
	printf("n = ");
	scanf_s("%d", &n);
	for (int i = 0; i <= 20; i++) {
		int r1 = rand() % n;
		printf("%d\n", r1);
	}

	int n = 0;
	printf("n = ");
	scanf_s("%d", &n);
	for (int i = 0; i <= 20; i++) {
		int r1 = rand() % n + 1;
		printf("%d\n", r1);
	}
	

	//2)
	for (int i = 1; i <= 20; i++) {
		int coin = rand() % 2;
		if (coin == 0) {
			printf("������ �ո��Դϴ�.\n");
	}
		else {
			printf("������ �޸��Դϴ�.\n");
		}
	}
	*/

	srand((unsigned int)time(NULL)); //srand�� main()�Լ� ù �ٿ� �� 1���� ȣ��.
	for (int i = 0; i < 20; i++) {
		int r = rand() % 20;
		printf("%d\n", r);
	}

	//��������
	srand((unsigned int)time(NULL));
	int n = 0;
	int m = 0;
	printf("n, m = ");
	scanf_s("%d%d", &n, &m);
	for (int i = 0; i < 20; i++) {
		int r1 = rand() % (m - n + 1) + n;
		printf("%d\n", r1);
	}
}