#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

int main(void) {


	//if~else if~else
	int age;
	printf("����>> ");
	scanf_s("%d", &age);

	if (age <= 18) {
		printf("û�ҳ��Դϴ�.\n");
	}
	else if (age < 65) {
		printf("�����Դϴ�.\n");
	}
	else {
		printf("�����Դϴ�.\n");
	}


	//��������
	int score;
	printf("������� >> ");
	scanf_s("%d", &score);

	if (score < 70) {
		printf("������ F�Դϴ�.\n");
	}
	else if (70 <= score && score < 80) { //&&�׸���.
		printf("������ C�Դϴ�.\n");
	}
	else if (80 <= score && score < 90) {
		printf("������ B�Դϴ�.\n");
	}
	else {
		printf("������ A�Դϴ�.\n");
	}


	//��ø�� if��
	int n, abs;
	printf("n = ");
	scanf_s("%d", &n);

	if (n < 0) {
		abs = -n;
		printf("%d�� �����Դϴ�.\n", n);
	}
	else {
		abs = n;
		if (n > 0)
			printf("%d�� ����Դϴ�.\n", n);
		else
			printf("0�Դϴ�.\n");
	}
	printf("%d�� ������ %d�Դϴ�.\n", n, abs);

	/*
	//���� �ݺ���
	//while (���ǽ�) {
	//	�ݺ��� �۾�;
	//}
	int x = 0;
	while (true) { //true ��� 1�̶�� �ᵵ ��.
		x++;
		printf("%d\n", x);
		Sleep(1000);//ms ������ ����ϴ� �Լ�. 1000 = 1�� "S"�� �빮��.
	}
	*/

	//for �ܼ� �ݺ�
	//for (int i = 1; i <= �ݺ�Ƚ��; i++) {
	//	�ݺ��� ���� 1;
	//	�ݺ��� ���� 2;
	//}
	for (int i = 1; i <= 10; i++) {
		printf("�ݺ���");
		printf("�Դϴ�(1).\n");
	}

	printf("\n");

	for (int i = 1; i <= 10; i++)
		printf("�ݺ����Դϴ�(2).\n");


	//��������
	int a;
	n = 0;
	printf("�� �� �ݺ��մϱ�?");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("������ �Է��ϼ���>> ");
		scanf_s("%d", &a);
		printf("%d\n", a);
	}


	//��������
	a = 0;
	n = 0;
	int x = 0;
	printf("�� �� �ݺ��մϱ�?");
	scanf_s("%d", &n);
	printf("�ʱ갪: sum = 0\n");
	for (int i = 1; i <= n; i++) {
		printf("������ �Է��ϼ���>> ");
		scanf_s("%d", &a);
		x = a;
		printf("sum = %d\n", a + x);

	}



}