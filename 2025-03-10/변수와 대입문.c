#define _CRT_SECURE_NO_WARNINGS
//scanf�� ����� ��, �ڿ� _s�� ������ �ʾƵ� �����ϰ� ���ִ� ����.
#include <stdio.h>


int main(void) {

	//��������
	int x, y, z;
	x = 10;
	y = 10 + 20;
	z = 30 * 40;
	printf("%d,%d\n", x, y);
	
	
	//��������
	int a, b;
	a = 5;
	b = 7;
	int c, d;
	c = a * b;
	d = a * b - 10;
	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);

	//��������
	int row = 8, col = 7;
	printf("���� ��ġ: %d�� %d��\n", row, col);
	printf("���� �̵�\n");
	row = row - 1;
	printf("���� ��ġ: %d�� %d��\n", row, col);
	printf("���������� �̵�\n");
	col = col + 1;
	printf("���� ��ġ: %d�� %d��\n", row, col);
	printf("�������� �̵�\n");
	col = col - 1;
	printf("���� ��ġ: %d�� %d��\n", row, col);

	//��������
	//int x, y ���x ���� �̹� ������ int = x,y�� ����
	int sum, diff, mult, quot, rem;

	x = 187;
	y = 88;
	printf("���� �� ���� �Է��ϼ���>> \n");
	scanf_s("%d%d", &x, &y);
	sum = x + y;
	diff = x - y;
	mult = x * y;
	quot = x / y;
	rem = x % y;

	printf("%d ���ϱ� %d�� %d �Դϴ�.\n", x, y, sum);
	printf("%d ���� %d�� %d �Դϴ�.\n", x, y, diff);
	printf("%d ���ϱ� %d�� %d �Դϴ�.\n", x, y, mult);
	printf("%d��(��) %d�� ���� ���� %d �Դϴ�.\n", x, y, quot);
	printf("%d��(��) %d�� ���� ���� %d �Դϴ�.\n", x, y, rem);
	
	x = 0;
	printf("���� �� ���� �Է��ϼ���>> ");
	scanf_s("%d", &x);
	//_s�� ���ȹ����� �ذ��ؼ� ����ϴ� �Լ�.
	printf("�Է� ���� ���� %d�Դϴ�.\n", x);


	x = 0;
	y = 0;
	printf("ù ���� ������ �Է��ϼ���>> ");
	scanf_s("%d", &x);
	printf("�� ���� ������ �Է��ϼ���>> ");
	scanf_s("%d", &y);
	printf("�� ������ ���� %d�Դϴ�.\n", x + y);

	x = 0;
	y = 0;
	printf("���� �� ���� �Է��ϼ���>> ");
	scanf_s("%d%d", &x, &y);
	printf("�Է� ���� �� ������ ���� %d�Դϴ�.\n", x * y);

	x = 0;
	y = 0;
	z = 0;
	printf("���� �� ���� �Է��ϼ���>> ");
	scanf_s("%d%d%d", &x, &y, &z);
	printf("�Է� ���� �� ������ ���� %d�Դϴ�.\n", x + y + z);

	return 0;
}

