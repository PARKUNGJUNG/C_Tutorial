#include <stdio.h>
#include <math.h>

int main(void) {

	/*
	///실습문제1
	{
		double square, circle, triangle;
		printf("네모 - 동그라미 * 세모 = ?\n");
		printf("네모 동그라미 세모>>");
		scanf_s("%lf%lf%lf", &square, &circle, &triangle);
		printf("%.2lf - %.2lf * %.2lf = %.2lf\n", square, circle, triangle, square - circle * triangle);
	}
	

	///실습문제2
	{
		double x1, x2;
		printf("x1 x2 =");
		scanf_s("%lf%lf", &x1, &x2);
		if (x1 > x2) { printf("x1과 x2 사이의 거리는 %.2lf", x1 - x2); }
		else if ( x1 < x2) {printf("x1과 x2 사이의 거리는 %.2lf", x2 - x1); }
	}
	

	///실습문제3
	{
		double x;
		do {
			printf("실수 입력>> ");
			scanf_s("%lf", &x);
			if (x > 0) {
				printf("%.2lf의 제곱근은 %.2lf입니다.\n", x, sqrt(x));
				printf("\n");
			}
		} while (x > 0);
		printf("계산할 수 없습니다. 종료합니다.\n");
		printf("\n");
	}
	

	///실습문제4
	{
		//for문
		int x;

		for (int i = 1; i <= 5; i++) {
			printf("양의 정수>> ");
			scanf_s("%d", &x);

			if (x % 2 == 0) {
				printf("%d은(는) 짝수\n", x);
			}
			else {
				printf("%d은(는) 홀수\n", x);
			}
		}
		
		//while문
		int i = 1;
		while (i <= 5) {
			printf("양의 정수>> ");
			scanf_s("%d", &x);

			if (x % 2 == 0) {
				printf("%d은(는) 짝수\n", x);
			}
			else {
				printf("%d은(는) 홀수\n", x);
			}
			i++;
		}

		//do - while문
		i = 1;
		do {
			printf("양의 정수>> ");
			scanf_s("%d", &x);

			if (x % 2 == 0) {
				printf("%d은(는) 짝수\n", x);
			}
			else {
				printf("%d은(는) 홀수\n", x);
			}
			i++;
		} while (i <= 5);
		return 0;
	}
	*/
	
	///실습문제5
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