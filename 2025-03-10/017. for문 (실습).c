#include <stdio.h>
#include <stdbool.h>

void power(void) {
	int n, r;
	printf("n r = ");
	scanf_s("%d%d", &n, &r);
	int num = n;
	int m = n;
	for (n = 1; n <= r; n++) {
		printf("%d ", num);
		num *= m;
	}
}

int main(void) {

	/*
	{
		///실습문제1
		int sum = 0;
		int arr[5];
		for (int i = 1; i <= 5; i++) {
			printf("정수>> ");
			scanf_s("%d", &arr[i]);
			if (arr[i] < 0) {
				break;
			}
			sum += arr[i];
		}
		printf("%d\n", sum);
	}


	{
		///실습문제2
		//1)
		int stor = 0;
		int k = 0;
		int d, n;
		if (k == 0) {
			printf("d n = ");
			scanf_s("%d%d", &d, &n);
		}
			for (int i = 1; i <= n; i++) {
				int m = k + d;
				printf("A%d = %d\n", i, stor);
				stor += m;

			}
	}


	{
		///실습문제2
		//2)
		int stor = 0;
		int stor1 = 0;
		int k, d, n;
			printf("k d n = ");
			scanf_s("%d%d%d", &k, &d, &n);
			printf("A1 = %d\n", k);
			int m = k + d;
			stor += m;
			printf("A2 = %d\n", m);
			for (int i = 3; i <= n; i++) {
				int m1 = stor + d;
				stor = m1;
					printf("A%d = %d\n", i, m1);
		}
	}


	{
		///실습문제3
		for (int i = 1; i <= 15; i++) {
			if (i % 2 == 0) { continue; }
			printf("%d ", i);
		}
		printf("\n");

		for (int i = 10; i >= 1; i--) {
			printf("%d ", i);
		}
		printf("\n");

		for (int i = 4; i <= 32; i++) {
			if (i % 4 != 0) { continue; }
			printf("%d ", i);
		}
		printf("\n");

		for (int i = 18; i >= 0; i--) {
			if (i % 3 != 0) { continue; }
			printf("%d ", i);
		}
		printf("\n");

		for (int i = 80; i >= -100; i -= 30) {
			printf("%d ", i);
		}
		printf("\n");

		for (int i = 3; i <= 729; i *= 3) {
			printf("%d ", i);
		}
		printf("\n");

		for (int i = 256; i >= 1; i /= 2) {
			printf("%d ", i);
		}
		printf("\n");
	}


	{
		///실습문제4
		int count_mult = 0;
		int n, m, k;
		printf("n m k = ");
		scanf_s("%d%d%d",&n, &m, &k);
		printf("[%d, %d]에서 %d의 배수는", n, m, k);
		for (n; n <= m; n++) {
			if (n % k == 0) { count_mult ++; }
		}
		printf(" %d개", count_mult);
	}


	{
		///실습문제4 교수님 질문
		int count_mult = 0;
		int n, m, k;
		printf("n m k = ");
		scanf_s("%d%d%d", &n, &m, &k);
		for (n; n <= m; n++) {
			if (n % k == 0) { count_mult++; }
		}
		printf("[%d, %d]에서 %d의 배수는 %d개", n, m, k, count_mult);
	}


	{
		///실습문제5
		//1)
		int num = 2;
		for (int i = 1; i <= 10; i++) {
			printf("%d ", num);
			num *= 2;
		}
	}


	{
		///실습문제5
		//2)
		int n, r;
		printf("n r = ");
		scanf_s("%d%d", &n, &r);
		int num = n;
		int m = n;
		for (n = 1; n <= r; n++) {
			printf("%d ", num);
			num *= m;
		}
	}


	{
		///실습문제5
		//3)
		power();
		printf("return value= ");
	}
	

	{
		///실습문제6
		//1), 2)
		int cnt = 1;
		int N_cnt = 0;
		int N_etr = 0;
		bool Y_etr = true;
		int team_age[4];
		int team_tall[4];
		for (int i = 0; i < 4; i++) {
			N_cnt++;
			printf("입장객%d 나이 키(cm)>> ", cnt++);
			scanf_s("%d%d", &team_age[i], &team_tall[i]);
			if (team_age[i] < 6 && team_tall[i] < 140) {
				N_etr += N_cnt;
				Y_etr = false;
			}
		}
		if(Y_etr == true) { printf("한 분씩 입장하시겠습니다~"); }
		else { printf("%d번 손님 때문에 못 들어가십니다.", N_etr); }
	}
	*/

	{
		///실습문제7
		int arr[4];
		for (int i = 1; i <= 5; i++) {
			printf("정수>> ");
			scanf_s("%d", &arr[i]);
		}


	}
}
				
