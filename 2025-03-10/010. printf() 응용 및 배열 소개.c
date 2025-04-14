#include <stdio.h>

int main(void) {
	/*
	//큰따음표 출력 \"\ 이렇게 가능.
	 
	
	///연습문제
	printf("그가 말했다. \"오늘은 비가 오려나 보다.\"\n");


	///특수문자 출력하기
	printf("프로그래밍을\'코딩\'이라고도부른다.\n");
	printf("삼만원은\\30, 000 라고쓴다.\n");
	printf("오늘비가올확률:\t60 %%\n");


	///이스케이프 시퀀스
	// \n 줄바꿈
	// \t tab
	// \b Backspace
	// \\ Backslash
	// \' 작은따옴표
	// \" 큰따옴표
	// %% 퍼센트기호


	///연습문제
	printf("통장 잔액: \\1,000,000,000 (일십억 원)\n6억 짜리 건물을 사면 전재산의 40%%가 남는다.\n");


	///형식지정자 포멧
	// %d 정수(int) 
	// %f printf() : double / float, scanf() : float
	// %lf printf() : double / float, scanf() : double
	// %c 문자
	// %s 문자열
	// %ld long
	// %lld long long
	// %u unsigned int
	// %lu unsigned long
	// %llu unsigned long long
	// %o 8진수
	// %x 16진수


	///오른쪽 정렬해서 출력하기
	int yee = 333; 
	char str[10] = "abc";
	printf("0123456789\n"); 
	printf("----------\n"); 
	printf("%d\n", 333); 
	printf("%5d\n", 333); 
	printf("%05d\n", 333); 
	printf("%s\n", str); 
	printf("%5s\n", str);


	printf("0123456789\n");
	printf("----------\n");
	for (int i = 1; i <= 9; i++) {
		printf("%2d * %2d = %2d\n", 2, i, 2 * i); //자리수가 3자리 이상이 출력이 되면 보기가 불편하기 때문에 사용.
	}


	///연습문제
	int kor = 0;
	int Eng = 0;
	int Math = 0;
	int Sci = 0;
	int kor1 = 0;
	int Eng1 = 0;
	int Math1 = 0;
	int Sci1 = 0;
	printf(">> ");
	scanf_s("%d%d%d%d", &kor, &Eng, &Math, &Sci);
	scanf_s("%d%d%d%d", &kor1, &Eng1, &Math1, &Sci1);
	printf("국어 영어 수학 과학\n");
	printf("===================\n");
	printf("%4d %4d %4d %4d\n", kor, Eng, Math, Sci);
	printf("%4d %4d %4d %4d\n", kor1, Eng1, Math1, Sci1);


	///실수 출력하기
	double dbl = 123.4567890123;
	printf("%lf\n", dbl);
	//소수점 이하는 기본 6자리까지 출력.

	dbl = 123.4567890123;
	printf("%.3lf\n", dbl); //마지막 소수점은 반올림.


	///연습문제
	double PI = 3.14159265359;
	printf("%.2lf\n", PI);
	printf("%.4lf\n", PI);
	printf("%lf\n", PI);


	///실수를 오른쪽 정렬하기
	dbl = 123.4567890123;

	printf("01234567890123456789\n");
	printf("------------------------------\n");

	printf("%.3f\n", dbl);
	printf("%20.3f\n", dbl); //20은 전체 공간의 크기. 거기서 소수점 3자리만 출력하라는 뜻.
	printf("%020.3f\n", dbl); //20의 전체 공간의 크기에 0을 채우고 소수점 3자리까지 출력.
	*/

	///연습문제
	double x = 12.34;
	double y = 5.67;
	double z = x + y;// <- (x + y)를 저장할 변수
	double a = 1.2;
	double b = 0.345;
	double c = a + b;// <- (a + b)를 저장할 변수
	printf("%7.3f + %7.3f = %7.3f\n", x, y, z);
	printf("%7.3f + %7.3f = %7.3f\n", a, b, c);


	///배열 사용해보기
	///연습문제 for문 복습
	int x1 = 0;
	for (int i = 0; i < 4; i++) {
		scanf_s("%d", &x1); 
		if (x1 % 3 == 0) {
			//noop = no operation 의 줄임말. 작동하지 않는다는 뜻.
		}
		else {
			printf("%d", x1);
		}
		if (x < 0) {
			break;
		}
	}


	///배열 사용해보기
	int nums[5] = { 1, 2, 3, 4, 5 }; //배열 원소들을 1, 2, 3, 4, 5로 초기화
	for (int i = 0; i < 5; i++) { 
		printf("%d ", nums[i]); 
	}
	printf("\n");
	//반복문의 제어 변수(i)를 배열 크기에 맞춤.
	//위의 코드가 크기가 5니까 0~4까지 
	//i = 0,1,2,3,4  nums[0]~nums[4]까지 출력. 
	
	//자료 구조(Data Structure)
	//데이터 여러 개를 저장하는 방법

	//배열(Array)
	//같은 타입의 데이터 여러 개를 일렬로 저장할 수 있는 자료 구조
}