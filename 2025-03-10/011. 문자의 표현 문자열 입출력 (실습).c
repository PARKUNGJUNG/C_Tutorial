#include <stdio.h>

int main(void) {
	/*
	///실습문제1
	char title[50];
	char name[50];
	char publish[50];
	printf("제목>> ");
	gets_s(title, 50);
	printf("저자>> ");
	gets_s(name, 50);
	printf("출판사>> ");
	gets_s(publish, 50);
	printf("제목은 %s, 저자는 %s, 출판사는 %s입니다.\n", title, name, publish);


	///실습문제2
	int count = 1;
	while (1) {
		printf("%d\n", count++);
		printf("계속하려면 엔터 키를 입력하세요...");
		getchar();

	}
	

	///실습문제3
	int postcode;
	char address[200];
	printf("주소>> ");
	scanf_s("%d", &postcode);
	gets_s(address, 200);
	printf("주소는 '%d%s' 입니다.\n", postcode, address);


	///실습문제4
	char ch;
	char ch1;
	scanf_s("%c", &ch, 100);
	getchar();
	scanf_s("%c", &ch1, 100);
	printf("문자 '%c'의 아스키코드 값은 %d\n", ch, ch);
	printf("문자 '%c'의 아스키코드 값은 %d\n", ch1, ch1);
	printf("알파벳 대문자의 아스키코드 값 범위는 %d ~ %d\n", ch, ch1);

	getchar();
	char ch2;
	char ch3;
	scanf_s("%c", &ch2, 100);
	getchar();
	scanf_s("%c", &ch3, 100);
	printf("문자 '%c'의 아스키코드 값은 %d\n", ch2, ch2);
	printf("문자 '%c'의 아스키코드 값은 %d\n", ch3, ch3);
	printf("알파벳 소문자의 아스키코드 값 범위는 %d ~ %d\n", ch2, ch3);

	getchar();
	char ch4;
	char ch5;
	scanf_s("%c", &ch4, 100);
	getchar();
	scanf_s("%c", &ch5, 100);
	printf("문자 '%c'의 아스키코드 값은 %d\n", ch4, ch4);
	printf("문자 '%c'의 아스키코드 값은 %d\n", ch5, ch5);
	printf("숫자와 아스키코드 값 범위는 %d ~ %d\n", ch4, ch5);

	
	///실습문제5
	for (int i = 0; i < 4; i++) {
		char Alphabet;
		printf("알파벳 입력>> ");
		scanf_s("%c", &Alphabet, 50);
		getchar();
		if (Alphabet < 97) {
			printf("'%c' -> '%c'\n", Alphabet, Alphabet + 32);
		}
		else {
			printf("'%c' -> '%c'\n", Alphabet, Alphabet - 32);
		}



	}

	*/
	///실습문제6
	char Alphabet1;
	printf("암호문>> ");
	scanf_s("%c", &Alphabet1, 50);
	getchar();
	printf("암호문: %c\n", Alphabet1);
	printf("좌표: %d\n", Alphabet1);
}