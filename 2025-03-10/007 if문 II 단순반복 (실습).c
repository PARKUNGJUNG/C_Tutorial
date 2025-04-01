#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
	/*
	//실습문제1
	for (int i = 1; i <= 10; i++) {
		printf("컴퓨터공학도와 C언어는 애증의 관계이다.\n");
	}


	//실습문제2
	int a = 0;
	int x = 1;
	printf("곱 = 1\n");
	for (int i = 1; i <= 5; i++) {
		x *= a;
		printf("정수를 입력하세요>> ");
		scanf_s("%d", &a);
		printf("곱 = %d\n", x * a);
	}


	//실습문제3
	//3-1
	int k = 0;
	a = 0;
	printf("k>> ");
	scanf_s("%d", &k);
	for (int i = 1; i <= 5; i++) {
		printf("정수를 입력하세요>> ");
		scanf_s("%d", &a);
		if (a % k == 0) {
			printf("%d은(는) 4의 배수입니다.\n", a);
		}
		else {
			printf("%d은(는) 4의 배수가 아닙니다.\n", a);
		}
	}

	//3-2
	k = 0;
	int n = 0;
	a = 0;
	printf("k n>> ");
	scanf_s("%d%d", &k, &n);
	for (int i = 1; i <= n; i++) {
		printf("정수를 입력하세요>> ");
		scanf_s("%d", &a);
		if (a % k == 0) {
			printf("%d은(는) 4의 배수입니다.\n", a);
		}
		else {
			printf("%d은(는) 4의 배수가 아닙니다.\n", a);
		}
	}


	//실습문제4
	int ID = 0;
	while (1) {
		printf("ID>> ");
		scanf_s("%d", &ID);
		if (10000 <= ID && ID < 20000) {
			printf("학생\n");
		}
		else {
			if (20000 <= ID && ID < 30000) {
				printf("교수\n");
			}
			else {
				if (30000 <= ID && ID < 40000) {
					printf("직원\n");
				}
				else {
					printf("강사\n");
				}
			}
		}
	}
	*/

	//실습문제5
	for (int i = 1; i <= 10; i++) {
		printf("%.0f\n", pow(2.0, 5.0));
	}
}