#include <stdio.h>
#include <math.h>

int main(void) {

	/*
	///�ǽ�����1
	{
		double square, circle, triangle;
		printf("�׸� - ���׶�� * ���� = ?\n");
		printf("�׸� ���׶�� ����>>");
		scanf_s("%lf%lf%lf", &square, &circle, &triangle);
		printf("%.2lf - %.2lf * %.2lf = %.2lf\n", square, circle, triangle, square - circle * triangle);
	}
	

	///�ǽ�����2
	{
		double x1, x2;
		printf("x1 x2 =");
		scanf_s("%lf%lf", &x1, &x2);
		if (x1 > x2) { printf("x1�� x2 ������ �Ÿ��� %.2lf", x1 - x2); }
		else if ( x1 < x2) {printf("x1�� x2 ������ �Ÿ��� %.2lf", x2 - x1); }
	}
	

	///�ǽ�����3
	{
		double x;
		do {
			printf("�Ǽ� �Է�>> ");
			scanf_s("%lf", &x);
			if (x > 0) {
				printf("%.2lf�� �������� %.2lf�Դϴ�.\n", x, sqrt(x));
				printf("\n");
			}
		} while (x > 0);
		printf("����� �� �����ϴ�. �����մϴ�.\n");
		printf("\n");
	}
	

	///�ǽ�����4
	{
		//for��
		int x;

		for (int i = 1; i <= 5; i++) {
			printf("���� ����>> ");
			scanf_s("%d", &x);

			if (x % 2 == 0) {
				printf("%d��(��) ¦��\n", x);
			}
			else {
				printf("%d��(��) Ȧ��\n", x);
			}
		}
		
		//while��
		int i = 1;
		while (i <= 5) {
			printf("���� ����>> ");
			scanf_s("%d", &x);

			if (x % 2 == 0) {
				printf("%d��(��) ¦��\n", x);
			}
			else {
				printf("%d��(��) Ȧ��\n", x);
			}
			i++;
		}

		//do - while��
		i = 1;
		do {
			printf("���� ����>> ");
			scanf_s("%d", &x);

			if (x % 2 == 0) {
				printf("%d��(��) ¦��\n", x);
			}
			else {
				printf("%d��(��) Ȧ��\n", x);
			}
			i++;
		} while (i <= 5);
		return 0;
	}
	*/
	
	///�ǽ�����5
	{
		int a1, a_cnt, d, upper_bound;
		int next = 0;
		printf("al d upper_bound>> ");
		scanf_s("%d%d%d", &a1, &d, &upper_bound);
		a_cnt = a1;
		printf("%d ", a_cnt);
		do {
			next += a_cnt + d;
			printf("%d ", next);
		} while (next <= upper_bound);
		return 0;
	}
}