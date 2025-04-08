#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//복습
	/*
	int num;
	for (int i = 1; i <= 5; i++) {
		printf(">> ");
		scanf_s("%d", &num);
		if (num >= 100)
			break;
		printf("num = %d\n", num);
	}

	for (int i = 1; i <= 5; i++) {
		printf(">> ");
		scanf_s("%d", &num);
		if (num >= 100)
			continue; //continue를 사용하면 for문이 터지지 않고 >>값으로 돌아감.
		printf("num = %d\n", num);
	}
	*/
	


	//실습문제1
	
	int quot2 = 2;
	int a = 0;
	for (int i = 1; i <= 10; i++) {
		if (2 % 0 == 0) {
			printf("%d ", quot2 * i);
		}
		else if (8 % 0 > 0) {
			printf(" ");
		}
	}
	printf("\n");
	

	int x = 0;
	for (int i = 1; i <= 10; i++) {
		x += 2;
		if (x % 8 > 0) {
			printf("%d", x);
		}
	}
	
		 

	//실습문제2
	int age;
	printf("나이>> ");
	scanf_s("%d", &age);

	switch (age) {
	case 18:
		printf("청소년입니다.\n");
		break;
	case 20:
		printf("성인입니다.\n");
		break;
	case 65:
		printf("노인입니다.\n");
		break;
	default:
		printf("모르겠습니다.\n");
		break;
	}

	
	//실습문제3
	int a = 0;
	int b = 0;
	char y = 0;
	char z = 0;
	for (int i = 1; i <= 5; i++) {
		printf("문자-정수-문자-정수 입력>> ");
		scanf_s("%c%d%c%d", &y, 1, &a, &z, 1, &b);
		getchar();
		printf("입력한 값은 [%c] [%d] [%c] [%d] 입니다.\n", y, a, z, b);
	}
	


	//실습문제4
	int c = 0;
	printf("정수(0~3)>> ");
	scanf_s("%d", &c);
	switch (c) {
	case 1:
		printf("A\n");
		break;
	case 2:
		printf("B\n");
		break;
	case 3:
		printf("C\n");
		break;
	case 0:
		printf("종료합니다.\n");
		break;
		exit(0);
	default:
		printf("처리할 수 없습니다.");
		break;
	}


	//실습문제5

}