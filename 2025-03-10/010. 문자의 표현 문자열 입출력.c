#include <stdio.h>

int main(void) {

	///문자의 표현
	char i = 65; 
	printf("%d %c\n", 65, 65);
	printf("%d %c\n", i, i);
	char ch = 'A'; 
	printf("%d %c\n", 'A', 'A'); 
	printf("%d %c\n", ch, ch);


	///연습문제
	char a = '0';
	char b = '0';
	printf("문자 하나를 입력하세요>> ");
	scanf_s("%c", &a, 20);
	printf("문자 %c의 아스키 코드는 %d입니다.\n", a, a);

	getchar(); //버퍼에 남아 있는 \n을 읽어서 버려 준다.

	printf("문자 하나를 입력하세요>> ");
	scanf_s("%c", &b, 20);
	printf("문자 %c의 아스키 코드는 %d입니다.\n", b, b);


	///문자열 출력하기
	char str[100] = "This is a string."; 
	printf("문자 배열 str에 저장된 문자열은: %s\n", str);


	///연습문제
	char str1[20] = "This is";
	char str2[20] = "a string.";
	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);
	printf("str1str2: %s %s\n", str1, str2);


	///연습문제
	char name[100];
	int age;
	char into[100];
	printf("이름 나이 소속>> ");
	scanf_s("%s%d%s", name, 100, &age, into, 100);
	printf("이름은 %s, 나이는 %d세, 소속은 %s입니다.", name, age, into);
	
	


}