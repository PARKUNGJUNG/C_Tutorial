#include <stdio.h>

int main(void) {

	//�ǽ�����1
	int a = 0;
	int b = 0;
	printf("a b>>");
	scanf_s("%d%d", &a, &b);
	if (a > b) {
		printf("%d\n", a);
	}
	else {
		printf("%d\n", b);
	}


	//�ǽ�����2
	int k = 0;
	int r = 0;
	printf("k r>> ");
	scanf_s("%d%d", &k, &r);
	printf("%d\n", k);
	int A = k *= r;
	printf("%d\n", A);
	printf("%d\n", A *= r);
	printf("%d\n", A *= r);
	printf("%d\n", A *= r);


	//�ǽ�����3
	a = 0;
	b = 0;
	int c = 0;
	printf("���� �Է�>> ");
	scanf_s("%d", &a);
	printf("product = %d\n", a);
	printf("���� �Է�>> ");
	scanf_s("%d", &b);
	int d = a *= b;
	printf("product = %d\n", d);
	printf("���� �Է�>> ");
	scanf_s("%d", &c);
	printf("product = %d\n", d *= c); //���� �� ��� Ʋ���� �ʾ����� ���� ����.
	

	int product = 1, x;
	printf("���� �Է�>> ");
	scanf_s("%d", &x);
	product *= x;
	printf("product = %d\n", product);

	printf("���� �Է�>> ");
	scanf_s("%d", &x);
	product *= x;
	printf("product = %d\n", product);

	printf("���� �Է�>> ");
	scanf_s("%d", &x);
	product *= x;
	printf("product = %d\n", product); //�������� �� ���


	//�ǽ�����4
	a = 0;
	b = 0;
	printf("a b>> ");
	scanf_s("%d%d", &a, &b);
	if (a <= b) {
		printf("a = %d, b = %d\n", a, b);
	}
	else {
		printf("a = %d, b = %d\n", b, a);
	}


	//�ǽ�����5
	a = 0;
	b = 0;
	c = 0;
	printf("�� ���� ����>> ");
	scanf_s("%d%d%d", &a, &b, &c);

}