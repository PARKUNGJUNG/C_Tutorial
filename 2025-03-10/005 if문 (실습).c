#include <stdio.h>

int main(void) {

	//실습문제1
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


	//실습문제2
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


	//실습문제3
	a = 0;
	b = 0;
	int c = 0;
	printf("정수 입력>> ");
	scanf_s("%d", &a);
	printf("product = %d\n", a);
	printf("정수 입력>> ");
	scanf_s("%d", &b);
	int d = a *= b;
	printf("product = %d\n", d);
	printf("정수 입력>> ");
	scanf_s("%d", &c);
	printf("product = %d\n", d *= c); //내가 한 방법 틀리진 않았지만 좋지 않음.
	

	int product = 1, x;
	printf("정수 입력>> ");
	scanf_s("%d", &x);
	product *= x;
	printf("product = %d\n", product);

	printf("정수 입력>> ");
	scanf_s("%d", &x);
	product *= x;
	printf("product = %d\n", product);

	printf("정수 입력>> ");
	scanf_s("%d", &x);
	product *= x;
	printf("product = %d\n", product); //교수님이 한 방법


	//실습문제4
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


	//실습문제5
	a = 0;
	b = 0;
	c = 0;
	printf("세 변의 길이>> ");
	scanf_s("%d%d%d", &a, &b, &c);

}