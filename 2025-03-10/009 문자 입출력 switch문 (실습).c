#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//����
	/*
	int num;
	for (int i = 1; i <= 5; i++) {
		printf(">> ");
		scanf_s("%d", &num);
		if (num >= 100)
			break;
		printf("num = %d\n", num);
	}

	for (int i = 1; i <= 5; i++) {
		printf(">> ");
		scanf_s("%d", &num);
		if (num >= 100)
			continue; //continue�� ����ϸ� for���� ������ �ʰ� >>������ ���ư�.
		printf("num = %d\n", num);
	}
	*/
	


	//�ǽ�����1
	
	int quot2 = 2;
	int a = 0;
	for (int i = 1; i <= 10; i++) {
		if (2 % 0 == 0) {
			printf("%d ", quot2 * i);
		}
		else if (8 % 0 > 0) {
			printf(" ");
		}
	}
	printf("\n");
	

	int x = 0;
	for (int i = 1; i <= 10; i++) {
		x += 2;
		if (x % 8 > 0) {
			printf("%d", x);
		}
	}
	
		 

	//�ǽ�����2
	int age;
	printf("����>> ");
	scanf_s("%d", &age);

	switch (age) {
	case 18:
		printf("û�ҳ��Դϴ�.\n");
		break;
	case 20:
		printf("�����Դϴ�.\n");
		break;
	case 65:
		printf("�����Դϴ�.\n");
		break;
	default:
		printf("�𸣰ڽ��ϴ�.\n");
		break;
	}

	
	//�ǽ�����3
	int a = 0;
	int b = 0;
	char y = 0;
	char z = 0;
	for (int i = 1; i <= 5; i++) {
		printf("����-����-����-���� �Է�>> ");
		scanf_s("%c%d%c%d", &y, 1, &a, &z, 1, &b);
		getchar();
		printf("�Է��� ���� [%c] [%d] [%c] [%d] �Դϴ�.\n", y, a, z, b);
	}
	


	//�ǽ�����4
	int c = 0;
	printf("����(0~3)>> ");
	scanf_s("%d", &c);
	switch (c) {
	case 1:
		printf("A\n");
		break;
	case 2:
		printf("B\n");
		break;
	case 3:
		printf("C\n");
		break;
	case 0:
		printf("�����մϴ�.\n");
		break;
		exit(0);
	default:
		printf("ó���� �� �����ϴ�.");
		break;
	}


	//�ǽ�����5

}