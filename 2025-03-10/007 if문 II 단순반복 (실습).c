#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
	/*
	//�ǽ�����1
	for (int i = 1; i <= 10; i++) {
		printf("��ǻ�Ͱ��е��� C���� ������ �����̴�.\n");
	}


	//�ǽ�����2
	int a = 0;
	int x = 1;
	printf("�� = 1\n");
	for (int i = 1; i <= 5; i++) {
		x *= a;
		printf("������ �Է��ϼ���>> ");
		scanf_s("%d", &a);
		printf("�� = %d\n", x * a);
	}


	//�ǽ�����3
	//3-1
	int k = 0;
	a = 0;
	printf("k>> ");
	scanf_s("%d", &k);
	for (int i = 1; i <= 5; i++) {
		printf("������ �Է��ϼ���>> ");
		scanf_s("%d", &a);
		if (a % k == 0) {
			printf("%d��(��) 4�� ����Դϴ�.\n", a);
		}
		else {
			printf("%d��(��) 4�� ����� �ƴմϴ�.\n", a);
		}
	}

	//3-2
	k = 0;
	int n = 0;
	a = 0;
	printf("k n>> ");
	scanf_s("%d%d", &k, &n);
	for (int i = 1; i <= n; i++) {
		printf("������ �Է��ϼ���>> ");
		scanf_s("%d", &a);
		if (a % k == 0) {
			printf("%d��(��) 4�� ����Դϴ�.\n", a);
		}
		else {
			printf("%d��(��) 4�� ����� �ƴմϴ�.\n", a);
		}
	}


	//�ǽ�����4
	int ID = 0;
	while (1) {
		printf("ID>> ");
		scanf_s("%d", &ID);
		if (10000 <= ID && ID < 20000) {
			printf("�л�\n");
		}
		else {
			if (20000 <= ID && ID < 30000) {
				printf("����\n");
			}
			else {
				if (30000 <= ID && ID < 40000) {
					printf("����\n");
				}
				else {
					printf("����\n");
				}
			}
		}
	}
	*/

	//�ǽ�����5
	for (int i = 1; i <= 10; i++) {
		printf("%.0f\n", pow(2.0, 5.0));
	}
}