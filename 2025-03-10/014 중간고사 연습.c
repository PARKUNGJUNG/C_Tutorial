#include <stdio.h>

int main(void) {

	/*
	{
		printf("������ 2021���̴ϱ� 2010����̸� 11���̴�.\n");

		printf("%d %d %d %d\n", 2 * 2, 2 * 3, 2 * 4, 2 * 5);

		printf("%d ���ϱ� %d�� %d�Դϴ�.\n", 5, 10, 5 * 10);

		int a, b, c = 0;
		printf("���� �� ���� �Է��ϼ���>> ");
		scanf_s("%d%d%d", &a, &b, &c);
		printf("�Է� ���� �� ������ ���� %d �Դϴ�.\n", a + b + c);
	}


	{
		int a, b;
		printf("a b >>");
		scanf_s("%d%d", &a, &b);
		if (b == 0) {
			printf("0���� ���� �� �����ϴ�.\n");
		}
		else {
			printf("%d", a / b);
		}
	}
	

	{
		int a, n;
		printf("�� �� �ݺ��մϱ�?	");
		scanf_s("%d", &n);
		for (int i = 0; i < n; i++) {
			printf("������ �Է��ϼ���>> ");
			scanf_s("%d", &a);
			printf("%d\n", a);
		}
	}
	

	{
		char str1[100] = "This is ";
		char str2[100] = "a string.";
		printf("%s%s\n", str1, str2);
	}


	{
		char str[100];
		printf("���� �̸��� �Է��ϼ���>> ");
		scanf_s("%s", str, 100);
		getchar();
		printf("����� �̸��� %s�Դϴ�.\n", str);
	}

	{
		char str[200];
		printf("�ּҸ� �Է��ϼ���>> ");
		gets_s(str, 200);
		getchar();
		printf("�Է� ���� �ּҴ�\n");
		puts(str);
		printf("�Դϴ�.\n");
	}


	{
		printf("%05d", 333);
	}
	*/

	{
		double PI = 3.14159265359;
		printf("%.2lf\n", PI);
		printf("%.4lf\n", PI);
		printf("%.6lf\n", PI);
		printf("%8.2lf\n", PI);
	}


	{
		int nums[10] = { 1, 3, 5, 7, 9, 12, 15, 18, 21, 24 };
		for (int i = 0; i < 5; i++) {
			printf("%d", nums[i]);
		}
	}
}