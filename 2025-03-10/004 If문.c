#include <stdio.h>
#include <stdbool.h>

int main(void) {

	//������ �� �� �Է� �ް�, �����ؼ� ���ϴ� ���α׷�.
	int x, sum = 0;

	printf("x = ");
	scanf_s("%d", &x);
	sum += x;
	printf("sum = %d\n", sum);

	printf("x = ");
	scanf_s("%d", &x);
	sum += x;
	printf("sum = %d\n", sum);

	printf("x = ");
	scanf_s("%d", &x);
	sum += x;
	printf("sum = %d\n", sum);


	//��������
	x = 10;
	int y = 10;
	int delta = 0;
	/*
	printf("delta = ");
	scanf_s("%d", &delta);
	x -= delta;
	y += delta;
	printf("x = %d, y = %d\n", x, y);

	printf("delta = ");
	scanf_s("%d", &delta);
	x -= delta;
	y += delta;
	printf("x = %d, y = %d\n", x, y);

	printf("delta = ");
	scanf_s("%d", &delta);
	x -= delta;
	y += delta;
	printf("x = %d, y = %d\n", x, y);


	//��������
	x = 5;
	y = 20;
	printf("x = %d, y = %d\n", x, y);

	x += 1;
	printf("x = %d, y = %d\n", x, y);

	y -= x;
	printf("x = %d, y = %d\n", x, y); // x = 6, y = 14

	y /= x * 2;
	printf("x = %d, y = %d\n", x, y); // x = 6, y = 1


	//����������
	x = 10, y = 10;
	printf("x=%d, y=%d\n", x, y);

	x++; y--;
	printf("x=%d, y=%d\n", x, y);

	x++; y--;
	printf("x=%d, y=%d\n", x, y);

	x++; y--;
	printf("x=%d, y=%d\n", x, y);


	//��������
	x = 5;
	printf("%d\n", x);

	x += 1;

	printf("%d\n", x);

	x += 1;

	printf("%d\n", x);

	x -= 1;
	printf("%d\n", x);

	x += 1;
	printf("%d\n", x);

	//����/���� ����������
	x, y = 0;
	x = 10;
	y = ++x * 2;
	printf("x=%d y=%d\n", x, y);

	x, y = 0;
	x = 10;
	y = x++ * 2;
	printf("x=%d y=%d\n", x, y);
	//������ ���� ���Ե� ���庸�� ���� ����ǰ�,
	//������ ���� ���Ե� ���庸�� ���߿� ����ȴ�.


	//��������
	x = 10;
	y = 10;
	printf("x=%d, y=%d\n", x, y);
	printf("x=%d, y=%d\n", ++x, --y);
	printf("x=%d, y=%d\n", ++x, --y);
	printf("x=%d, y=%d\n", ++x, --y);

	x = 10;
	y = 10;
	printf("x=%d, y=%d\n", x, y);
	printf("x=%d, y=%d\n", x++, y--); //10,10
	printf("x=%d, y=%d\n", x++, y--); //11,9
	printf("x=%d, y=%d\n", x++, y--); //12,8


	//if��
	x = 0;
	printf(">>");
	scanf_s("%d", &x);

	if (x > 0) {
		printf("%d��(��) ���� ����\n", x);
	}
	printf("��\n");


	*/
	//��������
	x = 0;
	printf(">>");
	scanf_s("%d", &x);

	if (x > 10) {
		printf("%d��(��) 10���� Ů�ϴ�\n", x);
	}
	printf("��\n");


	//��������
	int a = 0;
	int b = 0;
	printf("a b >>");
	scanf_s("%d%d", &a, &b);

	if (b > 0) {
		printf("%d\n", a / b);
	}
	else
		printf("0���� ���� �� �����ϴ�.\n"); //1���常 ������ �߰�ȣ ���� ����.
	printf("��\n");


	//���� ����
	x = 10;
	y = 20;

	printf("%d\n", x < y); //1
	printf("%d\n", x > y); //0


	//���� ���� ��Ÿ��
	x = 10;
	y = 20;

	bool b1 = true;
	bool b2 = false;
	bool b3 = x < y;
	printf("%d %d %d\n", b1, b2, b3);


	//���迬����
	x = 10;
	y = 20;

	printf("x�� y�� ����: %d\n", x == y);
	printf("x�� y�� ���� �ʴ�: %d\n", x != y);
	printf("x�� y���� �۴�: %d\n", x < y);
	printf("x�� y���� ũ��: %d\n", x > y);
	printf("x�� y���� �۰ų� ����: %d\n", x <= y);
	printf("x�� y���� ũ�ų� ����: %d\n", x >= y);


}