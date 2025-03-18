#define _CRT_SECURE_NO_WARNINGS
//scanf를 사용할 때, 뒤에 _s를 붙이지 않아도 가능하게 해주는 선언.
#include <stdio.h>


int main(void) {

	//연습문제
	int x, y, z;
	x = 10;
	y = 10 + 20;
	z = 30 * 40;
	printf("%d,%d\n", x, y);
	
	
	//연습문제
	int a, b;
	a = 5;
	b = 7;
	int c, d;
	c = a * b;
	d = a * b - 10;
	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);

	//연습문제
	int row = 8, col = 7;
	printf("현재 위치: %d행 %d열\n", row, col);
	printf("위로 이동\n");
	row = row - 1;
	printf("현재 위치: %d행 %d열\n", row, col);
	printf("오른쪽으로 이동\n");
	col = col + 1;
	printf("현재 위치: %d행 %d열\n", row, col);
	printf("왼쪽으로 이동\n");
	col = col - 1;
	printf("현재 위치: %d행 %d열\n", row, col);

	//연습문제
	//int x, y 사용x 위에 이미 선언한 int = x,y가 존재
	int sum, diff, mult, quot, rem;

	x = 187;
	y = 88;
	printf("정수 두 개를 입력하세요>> \n");
	scanf_s("%d%d", &x, &y);
	sum = x + y;
	diff = x - y;
	mult = x * y;
	quot = x / y;
	rem = x % y;

	printf("%d 더하기 %d는 %d 입니다.\n", x, y, sum);
	printf("%d 빼기 %d는 %d 입니다.\n", x, y, diff);
	printf("%d 곱하기 %d는 %d 입니다.\n", x, y, mult);
	printf("%d을(를) %d로 나눈 몫은 %d 입니다.\n", x, y, quot);
	printf("%d을(를) %d로 나눈 몫은 %d 입니다.\n", x, y, rem);
	
	x = 0;
	printf("정수 한 개를 입력하세요>> ");
	scanf_s("%d", &x);
	//_s는 보안문제를 해결해서 사용하는 함수.
	printf("입력 받은 값은 %d입니다.\n", x);


	x = 0;
	y = 0;
	printf("첫 번쨰 정수를 입력하세요>> ");
	scanf_s("%d", &x);
	printf("두 번쨰 정수를 입력하세요>> ");
	scanf_s("%d", &y);
	printf("두 정수의 합은 %d입니다.\n", x + y);

	x = 0;
	y = 0;
	printf("정수 두 개를 입력하세요>> ");
	scanf_s("%d%d", &x, &y);
	printf("입력 받은 두 정수의 곱은 %d입니다.\n", x * y);

	x = 0;
	y = 0;
	z = 0;
	printf("정수 세 개를 입력하세요>> ");
	scanf_s("%d%d%d", &x, &y, &z);
	printf("입력 받은 세 정수의 합은 %d입니다.\n", x + y + z);

	return 0;
}

