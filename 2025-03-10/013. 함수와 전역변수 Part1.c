#include <stdio.h>


/// �پ��� ������ �Լ�
// ex) ������ ���ڿ��� ����ϴ� �Լ�
// void ����� ���: '����� ������ ����'�� ��Ÿ��.

int sum(int, int); //�Լ� ����
int sub(int, int);
int get_int(void);
int mod(int);
void println_stars(int);

///�Է°�, ��ȯ�� ��� �ʿ� ���� �Լ�
void intro(void) {
	printf("===�� ������ ���ϴ� ���α׷�===\n");
}

///�Է°��� �ʿ� ���� �Լ�, �Ű������� ����: void ���
int get_int(void) {
	int x;
	printf("����>> ");
	scanf_s("%d", &x);
	return x;
}

///��ȯ���� �ʿ� ���� �Լ�, return�� ��ȯ���� ����(return ���� ����)
void println_stars(int n_star) {
	for (int i = 0; i < n_star; i++) {
		putchar('*');
	}
	putchar('\n');
}

int sum(int a, int b) { //�Լ� ����, //a,b�� sum() �Լ��� �Ű� ����.
	int res = a + b;
	return res;
}

int sub(int a, int b) {
	int res = a - b;
	return res;
}

int mod(int a) {
	int res = a % 3;
	return res;
}

int main (void) {
	intro();
	println_stars(15);
	get_int();
	get_int();
	println_stars(15);
	int result = sum(10, 20); //�Լ� ȣ��, //sum() �Լ��� ȣ���� �� 10, 20�� ���ڷ� ����.
	printf("%d\n", result);
	println_stars(15);

	int result1 = sub(10, 20);
	printf("%d\n", result1);

	int x = 10;
	int result2 = mod(x);
	printf("%d\n", result2);
	return 0;
}

