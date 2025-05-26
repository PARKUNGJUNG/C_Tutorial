#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int main(void) {

	/*
	///while문
	{
		int x;

		x = 0;
		while (x >= 0) {
			printf("정수를입력하세요 >> ");
			scanf_s("%d", &x);
		}
		printf("종료합니다.\n");
	}


	///do~while문
	{
		//while문과 달리, 한 번 실행한 후에 조건식을 검사한다.
		//끝에 세미콜론을 붙인다.
		int x;

		do {
			printf("정수를 입력하세요>> ");
			scanf_s("%d", &x);
		} while (x >= 0);
		printf("종료합니다.\n");
	}
	

	///연습문제
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
	

	///연습문제
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


	///실수 다루기
	{
		int x = 4;
		int y = 4.5;
		printf("x=%d, y=%d\n", x, y);
	}
	{
		int x = 4;
		double y = 4.5;
		printf("x=%d, y=%lf\n", x, y); //%lf = 소수점 이하 6번째 자리까지 출력
		printf("x=%d, y=%.3lf\n", x, y); // %.3lf 소수점 이하 3번쨰 자리까지 출력
		printf("x=%d, y=%f\n", x, y);
	}


	///실수 입력
	{
		int x;
		double y;
	
		printf("정수값 입력>> ");
		scanf_s("%d", &x);
		printf("실수값 입력>> ");
		scanf_s("%lf", &y);

		printf("x=%d, y=%.2lf\n", x, y);
	}
	*/

	///연습문제
	{
		double x, y, z;
		printf("실수값 세 개 입력>>");
		scanf_s("%lf%lf%lf", &x, &y, &z);
		printf("%.2lf + %.2lf + %.2lf = %.2lf\n", x, y, z, x + y + z);
		printf("%.2lf * %.2lf * %.2lf = %.2lf\n", x, y, z, x * y *z);
	}
}