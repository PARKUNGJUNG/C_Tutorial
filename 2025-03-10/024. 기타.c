#include <stdio.h>
#include "기타.h" //사용자가 작성한 헤더 파일은 큰따옴표로 묶어줌.

/*
extern : 다른 파일에 선언된 변수/함수를 사용하겠다는 뜻.
- 함수는 extern을 생략할 수 있음.
- 변수는 필수.
extern int z;
extern int add(int x, int y);
extern int mul(int x, int y);
*/

int f() {
	static int x = 10; //초기화는 처음 한 번만 실행. 두 번째 호출부터는 실행되지 않음.
	x++;
	return x;
}

int main(void) {
	{
	///분할 컴파일
	//프로그램을 소스 파일 여러 개로 나눠서 작성하고 링크하는 방법.
	
	//컴파일러
	//소스 파일 전체를 목적 파일로 변환한 후 실행

	//인터프리터
	//소스 파일 한 줄씩 읽어서 실행

	
		printf("%d\n", add(10, 20));
		printf("%d\n", mul(10, 20));
		printf("%d\n", z);
		return 0;
	}

	{
		///조건 연산자 (Conditional Operator)
		//형식 : (조건식) ? (표현식) : (표현식2)
		//동작 : 조건식이 참이면 (수식1)의 값을, 거짓이면 (수식2)의 값을 반환한다.
		// ex) x_abs = x > 0 ? x : -x;
		//경우에 따라 if 문을 단순화할 수 있다.
		//if문과 다른 점: "문장"이 아니라 "값"을 반환한다.
		//하지만 조건 연산자는 잘 사용하지 않음.
	}

	{
		///8진수, 16진수 표현
		//C언어에서 8진수는 숫자 앞에 '0'
		//         16진수는 '0x'를 붙여서 표기한다.
		//나중에 메모리 주소값이나 등등 포인터를 쓸 때 사용.
		//ex) 아래 a, b, c 세 변수의 값은 같다.
		int a = 200;
		int b = 0310;
		int c = 0xC8;

		printf("%d %d %d\n", a, b, c);

		//8진수 16진수 출력.
		//8진수는 '%o' 16진수는 '%x' 또는 '%X'로 출력
		//'%'대신 '%#'을 쓰면 '0','0X'를 붙여서 출력해준다.
		printf("%d %o %x\n", a, b, c); 
		printf("%d %o %X\n", a, b, c); 
		printf("%d %#o %#X\n", a, b, c);
		//같은 값이여도 다른 형식으로 출력 가능.
		printf("%d %#o %#X\n", a, a, a);
	}

	{
		///매크로 함수, INLINE 함수
		/*
		전처리 지시자
		소스파일 -> 전처리기 -> 임시 파일 -> 컴파일러 -> 목적 파일
		 '#'으로 시작하는 구문들.
		ex) #include, #define, #undef, #if ~ #esle ~ #endif, #ifdef ~ #else ~ #endif

		매그로(Macro) 함수
		#define으로 간단한 함수를 작성할 수 있다.
		세미콜론(;)은 붙이지 않음.
		매크로 함수는 인자들과 전체 코드를 괄호()로 묶어줘야 함
		 -구문 분석 없이 텍스트가 그대로 replace되기 때문.
		 ex)
		 */
#define SQR(x) x * x

		int result = SQR(8 + 2);
		printf("%d\n", result);
		return 0;

		/*
		inline 함수
		함수로 동작하지 않고 코드를 대치

		매크로 함수 vs. inline 함수
		사용 방법이 매우 유사
		 - 함수를 호출하고 회수하는 데는 상당히 많은 작업이 필요.
		 - 매크로 함수, 인라인 함수는
		 - 간단한 함수를 함수로서 실행하지 않고 코드를 직접 삽입해서 동작하므로 효율적.

		 - 매크로 함수는 전처리기가 단순히 텍스트를 대치하는 방식.
		 - 코드의 의미와 프로그램 문법에 대한 이해가 없어 오동작할 수 있음.

		 - 컴파일러를 통해 구현되는 인라인 함수를 사용하도록 권장.
		 */
	}

	{
		///CONST STATIC

		///const 키워드
		//변수를 값을 바꿀 수 없도록 선언
		// - 초기값으로 고정됨.
		// - 사용 예) 배열의 크기, 원주율, 일년 365일 등의 상수
		// - #define과 비슷하지만 동작 방식이 다름.

		//ex) 문자열 상수
		// - char* 타입 : 문자열 (내용을 바꿀 수 있음)
		// - const char* 타입 : 문자열 상수 (바꿀 수 없음)

		///static 변수
		//함수의 지역 변수이지만, 함수 실행이 끝나도 존재하는 변수
		// - 함수를 여러 번 호출할 때, 앞서 호출되었을 때의 값을 기억하고 있음.
		//ex)
		printf("%d\n", f());
		printf("%d\n", f());
		printf("%d\n", f());
		return 0;

	}

	{
		///비트 연산자
		///비트 연산자(bitwise operators)
		// - 정수를 비트 단위로 연산

		///비트 시프트 연산자(bit shift operators)
		// - 좌/우로 n 비트를 시프트
		printf("%d\n", 10 << 1);
		printf("%d\n", 10 << 2);
		printf("%d\n", 10 << 3);

		printf("%d\n", 10 >> 1);
		printf("%d\n", 10 >> 2);
		printf("%d\n", 10 >> 3);
		// <<k : shift left k bits (0으로 채운다.)
		// >>k : shift right k bits(sign bit로 채운다.)
		// - 2^k 으로 곱하는/나누는 효과
		
		///비트 논리 연산자(bitwise logical operators)
		// - 비트 단위로 not, and, or, xor 연산
		// - ~ : bitwise NOT
		// - & : bitwise AND
		// - | : bitwise OR
		// - ^ : bitwise XOR

		//ex)
		//정수 한 개를 입력 받아, 짝수면 0, 음수면 1을 출력하는 프로그램.
		int x;
		printf("정수 입력>> ");
		scanf_s("%d", &x);

		// 0x1은 0000 0000 ... 0000 0001
		int is_odd = x & 0x1;
		printf("%d\n", is_odd);
	}
}