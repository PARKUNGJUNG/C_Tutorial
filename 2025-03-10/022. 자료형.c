#include <stdio.h>

int main(void) {

	///자료형 (Data Type)
	//프로그래밍 언어가 다루는 데이터(값)의 종류를 정의
	//프로그래밍 언어가 데이터를 다루는 단위

	//변수는 데이터를 담는 그릇이다.

	//상수(Constant)
	//- 변하지 않는 값
	//- C언어에서는 데이터(값)을 상수라고 부른다.
	//- 유사한 개념: 리터럴(Literal)

	///자료형의 종류
	//기본 자료형(Primitive data types)
	// - int, char, double...

	//정수 자료형
	//char, short(short int), int, long(long int), long long(long long int)
	//여기에 음수는 unsigned char, unsigned short, unsigned int...

	//정수 자료형의 크기
	//sizeof 연산자
	//- 피연산자의 데이터 크기가 몇 byte인지 알려준다.
	//- 자료형의 크기가 고정되어 있지 않으므로 필요하다면 sizeof로 확인.
	//- 피연산자로 예약어(자료형의 이름), 상수, 변수, 수식을 사용할 수 있다.
	//정수 자료형의 크기는 실행 환경에 따라 다르다.
	//- char < short < int <= long <= long long
	//- int = long = long long 일 수도 있음

	//정수 자료형 입출력
	// 이 두가지만 확실히 기억:
	//- int 형이 아니면 %d가 아니라 자료형에 맞게 출력한다.
	//- 아주 큰 정수는 long long을 쓴다.
	
	//정수 자료형의 표현 범위
	//- 범위를 넘어서는 값을 저장하면 오버플로우(Overflow)발생
	// <limits.h>
	//- 각 자료형의 표현 범위가 상수로 정의되어 있다.
	//- INT_MIN, INT_MAX
	
	//실수 자료형
	//float(32bits, 4bytes), double(64 bits, 8 bytes)
	//입출력 형식 printf(): double %lf(%f), float(%f)
	//			 scanf_s(): double %lf, float %f

	//사용자 정의 자료형(user-defined data types)
	//- C언어: 배열, 구조체(structure)
	//- 객체지향언어: 여러가지 class들

	//자료형 선택하기
	//(과거) 변수는 목적에 따라 적합한 크기의 자료형을 사용.
	//- 메모리 공간의 효율적인 사용

	//(현재) 특별한 경우가 아니면
	//- 정수는 int
	//- 실수는 double
	//- int는 현재의 시스템에서 가장 빠르게 처리될 수 있는 자료형
	//- (다만, 실무에서 C언어가 필요하면 이 '특별한 경우'에 해당될 때가 많다)
	
	//숫자 상수
	//- 자료형을 명시하지 않으면 정수는 int, 실수는 double로 처리됨.
	
	///부동소수점 표현
	printf("%f\n", 1.234e+3); // 1.234 * 10^3 -> 1.234e+3
	printf("%f\n", 1.234e-3); // 1.234 * 10^-3 -> 1.234e-3

	///강제 형변환
	//데이터 타입과 연산
	//아래 연산이 가능한 이유는 C언어 문법 규칙에 int형과 int형을 더해서 int형을 만드는 연산이 정의되어 있기 때문
	//10 + 20 = 30
	//(정수 + 문자열) 이나 (문자열 + 문자열) 같은 연산은 정의되어 있지 않다.

	//형변환
	//- 데이터의 자료형을 바꾸는 일
	//char -> int, int -> long, float -> double, int -> double, double -> int...
	//함수/모듈 등 프로그램의 여러 부분에서, 하나의 데이터를 서로 다른 자료형으로 취급하는 일이 자주 발생함 -> 형변환 필요.

	//1) 강제 형변환 (명시적 형변환, Explict Type Conversion)
	//사용자가 직접 데이터의 자료형을 변환시킴
	
	//2) 자동 형변환 (암묵적 형변환, Implicit Type Conversion)
	//형변환을 명시하지 않아도 컴파일러가 알아서 데이터의 자료형을 변환시킴
	//정수 <-> 정수, 정수 <-> 실수
	//C언어에서는
	//- 수식에서 자동 형변환되는 경우
	//- 대입문에서 자동 형변환되는 경우

	//수식에서 자동 형변환
	//'+', '*', '-', '/' 연산자는 피연산자의 자료형에 따라 다른 연산을 수행한다.
	//- 특히 나눗셈('/')을 할 때 주의
	// 정수 + 정수, 실수 + 실수
	//int + int -> int, double + double -> double
	
	//정수 + 실수: 자동 변환
	//int + float -> float, float + float -> float
	//int + double -> double, double + double -> double
	//정수와 실수를 연산하면 정수가 실수로 바뀐다.

	//자료형의 표현 범위와 형변환
	//표현 범위가 더 큰 자료형으로 변환: OK
	//- 데이터의 자료형 크기 < 변수의 자료형 크기
	// short -> int, int -> double, float -> double
	// short -> int -> int, int -> double -> double, float -> double -> double
	//정보 손실이 없음
	
	//표현 범위가 더 작은 자료형으로 변환: 정보 손실
	// int -> short, double -> int
	//정보가 손실될 수 있음
	//- 데이터의 자료형 크기 > 변수의 자료형 크기

	//자동 형변환 정리
	//정수형, 실수형 데이터는 자동 형변환이 가능
	//수식이나 대입문에서 정보 손실 없는 자동 형변환
	//- 표현 범위가 더 작은 자료형 -> 표현 범위가 더 큰 자료형
	//정수형 < 실수형
	//char < short < int < long < long long < float < double

	//대입문에서 정보 손실 가능성이 있는 자동 형변환
	//- 표현 범위가 더 큰 자료형 데이터 -> 표현 범위가 더 작은 자료형 변수

	///연습문제
	{
		int kor, eng, math;
		printf("국어 영어 수학>>");
		scanf_s("%d%d%d", &kor, &eng, &math);
		int tot = kor + eng + math;
		double avg = (double)tot / 3;
		printf("총점은 %d점, 평균은 %.2f점 입니다.\n", tot, avg);

	}









}