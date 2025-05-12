#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int weight[5] = { 0 };

void input_weight(void) { //함수의 원형
	for (int i = 0; i < 5; i++) {
		printf("몸무게(kg)>> ");
		scanf_s("%d", &weight[i]);
	}
}

int min_weight(void) { //함수의 원형
	int min = INT_MAX;
	for (int i = 0; i < 5; i++) {
		if (min > weight[i]) {
			min = weight[i];
		}
	}
	printf("가장 가벼운 사람은 %dkg\n", min);
}

void nm_sum(void) {
	int n, m = 0;
	int sum = 0;
	printf("n m >> ");
	scanf_s("%d%d", &n, &m);
	for (n; n <= m; n++) {
		sum += n;
	}
	printf("sum = %d\n", sum);
}



int main(void) {
	/*

	{
		///반복문의 유형
		int arr[5] = { 1, 2, 3, 4, 5 };
		int sum = 0;
		for (int i = 0; i < 5; i++) {
			printf("%d %d\n", arr[i], sum);
			sum += arr[i];
		}
		printf("sum = %d\n", sum);
	}


	{
		///최댓값/최솟값 구하기
		int num[5];
		for (int i= 0; i< 5; i++) {
			scanf_s("%d", &num[i]);
		}
		// 가능한가장작은값으로시작
		 // 또는첫번째데이터로초기화하기도함
		 int max = INT_MIN;
		 for (int i= 0; i< 5; i++) {
			 if (max < num[i]) { max = num[i]; }
		 }
		 printf("max =%d\n", max);
		 return 0;
	}

	
	{
		///연습문제
		input_weight();
		min_weight();
	}


	{
		///횟수/개수 세기
		int cnt_even = 0; 
		int pos[5] = { 3, 5, 7, 12, 24 };
		// pos [] 출력해보기
		
		// 계산
		for (int i= 0; i< 5; i++) {
			if (pos[i] % 2 == 0) {
				cnt_even++;
			}
		}
		printf("짝수는%d개\n", cnt_even);
	}


	{
		///연습문제
		int up_weight60 = 0;
		int weight[5] = { 55, 48, 105, 67, 79 };

		for (int i = 0; i < 5; i++) {
			if (weight[i] >= 60) {
				up_weight60++;
			}
		}
		printf("60kg 이상인 사람은 %d명\n", up_weight60);
	}


	{
		///횟수가 0인지 아닌지 확인
		int num[5]; 
		for (int i = 0; i < 5; i++) { 
			printf("정수>> "); 
			scanf_s("%d", &num[i]); 
		}
		bool exist_0 = false; 
		for (int i = 0; i < 5; i++) { 
			if (num[i] == 0) { 
				exist_0 = true; 
				break; 
			} 
		}
		if (exist_0)printf("0이입력되었음\n");
		else
			printf("0이입력되지않았음\n");
	}


	{
		///연습문제
		int weight[5] = { 55, 48, 105, 67, 79 };
		bool up_weight100 = false;
		for (int i = 0; i < 5; i++) {
			if (weight[i] >= 100) {
				up_weight100 = true;
				break;
			}
		}
		if (up_weight100) {
			printf("100kg 이상인 사람이 1명 이상 있음\n");
		}
		else {
			printf("100kg 이상이 1명도 없음\n");
		}
	}


	{
		///제어변수
		for (int i = 1; i <= 10; i++) {
			printf("반복문입니다.\n");
			printf("현재 i값은 %d\n", i);
		}
		//변수 i와 같은 변수를 반복문의 제어변수라고 한다.
	}


	{
		///break문
		//반복문 실행중, break문이 실행되면 반복 중지하고 반복문을 즉시 벗어남.
		for (int i = 1; i <= 5; i++) {
			if (i == 3)
				break; 
			printf("i = % d\n", i);
		}
		printf("끝\n");
	}


	{
		///continue문
		//반복문 실행중, continue문이 실행되면
		//continue 이후의 코드를 한 번 건너 뛰고,
		//반복문의 처음으로 돌아가 다음 반복을 시작함.
		for (int i = 1; i <= 5; i++) {
			if (i == 3)continue;
			printf("i = % d\n", i);
		}
	}
	*/

	{
		///연습문제
		for (int i = -20; i <= 0; i++) {
			printf("%d\n", i);
		}
		for (int i = 1; i <= 20; i++) {
				printf("+%d\n", i);
			}
	}


	{
		///초깃값, 끝값 지정하기
		//알파벳 소문자 'a'부터 'z'까지 출력하는 프로그램.
		for (char ch = 'a'; ch <= 'z'; ch++) {
			printf("%c", ch);
		}
		printf("\n");

		//10부터 20까지 합을 구해서 출력하는 프로그램
		int sum = 0;
		for (int i = 10; i <= 20; i++) {
			sum += i;
		}
		printf("sum = %d\n", sum);
	}


	{
		///연습문제
		//1)
		int n, m = 0;
		int sum = 0;
		printf("n m >> ");
		scanf_s("%d%d", &n, &m);
		for (n; n <= m; n++) {
			sum += n;
		}
		printf("sum = %d\n", sum);
	}


	{
		///연습문제
		//2)
		nm_sum();
	}


	{
		///증감식 지정하기
		for (int i = 1; i <= 9; i += 2) {
			printf("i = %d\n", i);
		}
	}


	{
		///연습문제
		int n;
		printf("n = ");
		scanf_s("%d", &n);

	}
}