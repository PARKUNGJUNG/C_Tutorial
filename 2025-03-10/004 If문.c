#include <stdio.h>

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

	x++;
	printf("%d\n", x);

	x++;
	printf("%d\n", x);

	x--;
	printf("%d\n", x);

	x++;
	printf("%d\n", x);

}