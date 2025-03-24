#include <stdio.h>
#include <stdbool.h>

int main(void) {

	//정수를 세 번 입력 받고, 누적해서 더하는 프로그램.
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


	//연습문제
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


	//연습문제
	x = 5;
	y = 20;
	printf("x = %d, y = %d\n", x, y);

	x += 1;
	printf("x = %d, y = %d\n", x, y);

	y -= x;
	printf("x = %d, y = %d\n", x, y); // x = 6, y = 14

	y /= x * 2;
	printf("x = %d, y = %d\n", x, y); // x = 6, y = 1


	//증감연산자
	x = 10, y = 10;
	printf("x=%d, y=%d\n", x, y);

	x++; y--;
	printf("x=%d, y=%d\n", x, y);

	x++; y--;
	printf("x=%d, y=%d\n", x, y);

	x++; y--;
	printf("x=%d, y=%d\n", x, y);


	//연습문제
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

	//전위/후위 증감연산자
	x, y = 0;
	x = 10;
	y = ++x * 2;
	printf("x=%d y=%d\n", x, y);

	x, y = 0;
	x = 10;
	y = x++ * 2;
	printf("x=%d y=%d\n", x, y);
	//전위에 오면 포함된 문장보다 먼저 실행되고,
	//후위에 오면 포함된 문장보다 나중에 실행된다.


	//연습문제
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


	//if문
	x = 0;
	printf(">>");
	scanf_s("%d", &x);

	if (x > 0) {
		printf("%d은(는) 양의 정수\n", x);
	}
	printf("끝\n");


	*/
	//연습문제
	x = 0;
	printf(">>");
	scanf_s("%d", &x);

	if (x > 10) {
		printf("%d은(는) 10보다 큽니다\n", x);
	}
	printf("끝\n");


	//연습문제
	int a = 0;
	int b = 0;
	printf("a b >>");
	scanf_s("%d%d", &a, &b);

	if (b > 0) {
		printf("%d\n", a / b);
	}
	else
		printf("0으로 나눌 수 없습니다.\n"); //1문장만 있으면 중괄호 생략 가능.
	printf("끝\n");


	//참과 거짓
	x = 10;
	y = 20;

	printf("%d\n", x < y); //1
	printf("%d\n", x > y); //0


	//참과 거짓 불타입
	x = 10;
	y = 20;

	bool b1 = true;
	bool b2 = false;
	bool b3 = x < y;
	printf("%d %d %d\n", b1, b2, b3);


	//관계연산자
	x = 10;
	y = 20;

	printf("x와 y는 같다: %d\n", x == y);
	printf("x와 y는 같지 않다: %d\n", x != y);
	printf("x는 y보다 작다: %d\n", x < y);
	printf("x는 y보다 크다: %d\n", x > y);
	printf("x는 y보다 작거나 같다: %d\n", x <= y);
	printf("x는 y보다 크거나 같다: %d\n", x >= y);


}