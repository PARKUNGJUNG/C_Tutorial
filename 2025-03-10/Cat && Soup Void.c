#include <stdio.h>
#include <stdlib.h> //C 표준 유틸리티 함수들을 모아놓은 헤더파일
#include <time.h> //C 에서 시간 관련 함수를 모아놓은 라이브러리

int main(void) {
	/*
	for (int i = 0; i <= 20; i++) {
		int r = rand() % 20; //rand()함수 : 0~32767사이 난수를 생성.
		printf("%d\n", r);
	}
	//return 0;

	//연습문제
	//1)
	for (int i = 0; i <= 20; i++) {
		int r1 = rand() % 4;
		printf("%d", r1);
	}

	for (int i = 0; i <= 20; i++) {
		int r1 = rand() % 4 + 1;
		printf("%d", r1);
	}

	for (int i = 0; i <= 20; i++) {
		int r1 = rand() % 101;
		printf("%d\n", r1);
	}

	int n = 0;
	printf("n = ");
	scanf_s("%d", &n);
	for (int i = 0; i <= 20; i++) {
		int r1 = rand() % n;
		printf("%d\n", r1);
	}

	int n = 0;
	printf("n = ");
	scanf_s("%d", &n);
	for (int i = 0; i <= 20; i++) {
		int r1 = rand() % n;
		printf("%d\n", r1);
	}

	int n = 0;
	printf("n = ");
	scanf_s("%d", &n);
	for (int i = 0; i <= 20; i++) {
		int r1 = rand() % n + 1;
		printf("%d\n", r1);
	}
	

	//2)
	for (int i = 1; i <= 20; i++) {
		int coin = rand() % 2;
		if (coin == 0) {
			printf("동전의 앞면입니다.\n");
	}
		else {
			printf("동전의 뒷면입니다.\n");
		}
	}
	*/

	srand((unsigned int)time(NULL)); //srand는 main()함수 첫 줄에 딱 1번만 호출.
	for (int i = 0; i < 20; i++) {
		int r = rand() % 20;
		printf("%d\n", r);
	}

	//연습문제
	srand((unsigned int)time(NULL));
	int n = 0;
	int m = 0;
	printf("n, m = ");
	scanf_s("%d%d", &n, &m);
	for (int i = 0; i < 20; i++) {
		int r1 = rand() % (m - n + 1) + n;
		printf("%d\n", r1);
	}
}