#include <stdio.h>


/// 다양한 형태의 함수
// ex) 일정한 문자열만 출력하는 함수
// void 예약어 사용: '명시할 내용이 없음'을 나타냄.

int sum(int, int); //함수 선언
int sub(int, int);
int get_int(void);
int mod(int);
void println_stars(int);

///입력값, 반환값 모두 필요 없는 함수
void intro(void) {
	printf("===두 정수를 더하는 프로그램===\n");
}

///입력값이 필요 없는 함수, 매개변수가 없음: void 사용
int get_int(void) {
	int x;
	printf("정수>> ");
	scanf_s("%d", &x);
	return x;
}

///반환값이 필요 없는 함수, return문 반환값이 없음(return 생략 가능)
void println_stars(int n_star) {
	for (int i = 0; i < n_star; i++) {
		putchar('*');
	}
	putchar('\n');
}

int sum(int a, int b) { //함수 정의, //a,b는 sum() 함수의 매개 변수.
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
	int result = sum(10, 20); //함수 호출, //sum() 함수를 호출할 때 10, 20을 인자로 전달.
	printf("%d\n", result);
	println_stars(15);

	int result1 = sub(10, 20);
	printf("%d\n", result1);

	int x = 10;
	int result2 = mod(x);
	printf("%d\n", result2);
	return 0;
}

