#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int main(void) {

	/*
	///while��
	{
		int x;

		x = 0;
		while (x >= 0) {
			printf("�������Է��ϼ��� >> ");
			scanf_s("%d", &x);
		}
		printf("�����մϴ�.\n");
	}


	///do~while��
	{
		//while���� �޸�, �� �� ������ �Ŀ� ���ǽ��� �˻��Ѵ�.
		//���� �����ݷ��� ���δ�.
		int x;

		do {
			printf("������ �Է��ϼ���>> ");
			scanf_s("%d", &x);
		} while (x >= 0);
		printf("�����մϴ�.\n");
	}
	

	///��������
	{
		int x = 0;
		int min = INT_MAX;
		do {
			printf("x = ");
			scanf_s("%d", &x);
			if (x < min) { min = x; }
		} while (x != 0);
		printf("min = %d", min);
	}
	

	///��������
	{
		
		int sum = 0;
		for (int i = 1; i <= 10; i++) {
			sum += i;
		}
		printf("sum = %d\n", sum);
		
		sum = 0;
		int i = 1;
		while (i <= 10) {
			sum += i;
			i++;
		}
		printf("sum = %d\n", sum);
	}


	///�Ǽ� �ٷ��
	{
		int x = 4;
		int y = 4.5;
		printf("x=%d, y=%d\n", x, y);
	}
	{
		int x = 4;
		double y = 4.5;
		printf("x=%d, y=%lf\n", x, y); //%lf = �Ҽ��� ���� 6��° �ڸ����� ���
		printf("x=%d, y=%.3lf\n", x, y); // %.3lf �Ҽ��� ���� 3���� �ڸ����� ���
		printf("x=%d, y=%f\n", x, y);
	}


	///�Ǽ� �Է�
	{
		int x;
		double y;
	
		printf("������ �Է�>> ");
		scanf_s("%d", &x);
		printf("�Ǽ��� �Է�>> ");
		scanf_s("%lf", &y);

		printf("x=%d, y=%.2lf\n", x, y);
	}
	*/

	///��������
	{
		double x, y, z;
		printf("�Ǽ��� �� �� �Է�>>");
		scanf_s("%lf%lf%lf", &x, &y, &z);
		printf("%.2lf + %.2lf + %.2lf = %.2lf\n", x, y, z, x + y + z);
		printf("%.2lf * %.2lf * %.2lf = %.2lf\n", x, y, z, x * y *z);
	}
}