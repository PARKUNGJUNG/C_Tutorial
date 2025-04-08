#include <stdio.h>
#include <stdbool.h>
#define _CRT_SEVURE_NO_WARNINGS

int main(void) {
	
	//연습문제
	int a = 0;
	int b = 0;
	while (true) {
		printf("a b>> ");
		scanf_s("
			
			
			
			
			
			d%d", &a, &b);
		if (a == 0 && b == 0) {
			break;
			if (a > b) {
				printf("%d\n", a);
			}
			else {
				printf("%d\n", b);
			}
		}
	}

	//문자 상수
	char c = 0; //문자 상수는 char에 저장.
	c = 'a'; //문자 상수는 char형 변수에 저장한다.
	printf("%c\n", 'a');
	
	
	//문자 입력 받기: scanf()
	char ch = 0;
	printf("문자 한 개 입력>> ");
	scanf_s("%c", &ch, 2);
	printf("입력 받은 문자는 %c 입니다.\n", ch);
	

	//연습문제
	char y = 0;
	printf("A/C>> ");
	scanf_s("%c", &y, 2);
	if (y == 'A') {
		printf("당신은 A(성인)입니다.\n");
		}
	else if (y == 'C') {
		printf("당신은 C(미성년자)입니다.\n");
	}
	else {
		printf("잘못 입력했습니다.");
	}


	//연습문제
	char x = 0;
	a = 0;
	b = 0;
	for (int i = 1; i <= 3; i++); { //이거 왜 for문 적용 안됨?
		printf("정수문자정수>> ");
		scanf_s("%d%c%d", &a, &x, 1, &b);
		printf("정수: %d 문자: %c 정수: %d\n", a, x, b);
	}
	

	//Switch문
	// switch(정수값) {
	// case 정수값1 :
	// 실행할 문장1
	// break;
	// ...
	// default :
	// 실행할 문장3
	// break;
	//if문보다 switch문이 적합한 코드에서는 최적화가 더 좋을 수 있음.
	

	//연습문제
	char ch1 = 0;
	printf("A/C>> ");
	scanf_s("%c", &ch1, 1);
	switch (ch1) {
	case 'A':
		printf("당신은 A(성인)입니다.\n");
		break;
		
	case 'C':
		printf("당신은 C(미성년자)입니다.\n");
		break;
	default:
		printf("잘못 입력했습니다.");
		break;
	}

}