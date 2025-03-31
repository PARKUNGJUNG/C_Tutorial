#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

int main(void) {


	//if~else if~else
	int age;
	printf("나이>> ");
	scanf_s("%d", &age);

	if (age <= 18) {
		printf("청소년입니다.\n");
	}
	else if (age < 65) {
		printf("성인입니다.\n");
	}
	else {
		printf("노인입니다.\n");
	}


	//연습문제
	int score;
	printf("평균점수 >> ");
	scanf_s("%d", &score);

	if (score < 70) {
		printf("평점은 F입니다.\n");
	}
	else if (70 <= score && score < 80) { //&&그리고.
		printf("평점은 C입니다.\n");
	}
	else if (80 <= score && score < 90) {
		printf("평점은 B입니다.\n");
	}
	else {
		printf("평점은 A입니다.\n");
	}


	//중첩된 if문
	int n, abs;
	printf("n = ");
	scanf_s("%d", &n);

	if (n < 0) {
		abs = -n;
		printf("%d는 음수입니다.\n", n);
	}
	else {
		abs = n;
		if (n > 0)
			printf("%d는 양수입니다.\n", n);
		else
			printf("0입니다.\n");
	}
	printf("%d의 절댓값은 %d입니다.\n", n, abs);

	/*
	//무한 반복문
	//while (조건식) {
	//	반복할 작업;
	//}
	int x = 0;
	while (true) { //true 대신 1이라고 써도 됨.
		x++;
		printf("%d\n", x);
		Sleep(1000);//ms 단위로 대기하는 함수. 1000 = 1초 "S"가 대문자.
	}
	*/

	//for 단순 반복
	//for (int i = 1; i <= 반복횟수; i++) {
	//	반복할 문장 1;
	//	반복할 문장 2;
	//}
	for (int i = 1; i <= 10; i++) {
		printf("반복문");
		printf("입니다(1).\n");
	}

	printf("\n");

	for (int i = 1; i <= 10; i++)
		printf("반복문입니다(2).\n");


	//연습문제
	int a;
	n = 0;
	printf("몇 번 반복합니까?");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("정수를 입력하세요>> ");
		scanf_s("%d", &a);
		printf("%d\n", a);
	}


	//연습문제
	a = 0;
	n = 0;
	int x = 0;
	printf("몇 번 반복합니까?");
	scanf_s("%d", &n);
	printf("초깃값: sum = 0\n");
	for (int i = 1; i <= n; i++) {
		printf("정수를 입력하세요>> ");
		scanf_s("%d", &a);
		x = a;
		printf("sum = %d\n", a + x);

	}



}