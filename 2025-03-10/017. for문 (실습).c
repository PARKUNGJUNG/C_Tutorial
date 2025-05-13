#include <stdio.h>

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
	*/

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

		for (int i = 4; i <= 32; i++) {
			if (i % 4 != 0) { continue; }
			printf("%d ", i);
		}
		printf("\n");
	}
}