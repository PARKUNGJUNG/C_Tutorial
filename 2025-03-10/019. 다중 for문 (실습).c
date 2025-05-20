#include <stdio.h>


void n_sum(void) {
	int n;
	int sum = 0;
	printf("n = ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("%d", sum);
}

int main(void) {

	/*
	{
		///실습문제1
		for (int i = 2; i <= 8; i += 2) {
			printf("<구구단 %d단>\n", i);
			for (int j = 1; j <= 9; j++) {
				printf("%d * %d = %2d\n", i, j, i * j);

			}
			printf("\n");
		}
	}
	

	{
		///실습문제2
		//1)
		int n;
		int sum = 0;
		printf("n = ");
		scanf_s("%d", &n);
		for (int i = 1; i <= n; i++) {
			sum += i;
		}
		printf("%d", sum);
	}
	

	{
		///실습문제2
		//2)
		int n, m;
		int sum = 0;
		printf("m = ");
		scanf_s("%d", &m);
		for (int i = 1; i <= m; i++) {
			printf("n = ");
			scanf_s("%d", &n);
			for (int i = 1; i <= n; i++) {
				sum += i;
			}
			printf("%d\n", sum);
			sum = 0;
		}
	}
	

	{
		///실습문제2
		//3)
		n_sum();
	}
	*/

	{
		///실습문제3
		//1)
		int n, m;
		printf("n m = ");
		scanf_s("%d%d", &n, &m);
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				printf("1");
			}
			printf("\n");
		}

		//2)
		n, m = 0;
		int cnt = 0;
		printf("n m = ");
		scanf_s("%d%d", &n, &m);
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cnt++;
				printf("%d", cnt);
			}
			cnt = 0;
			printf("\n");
		}

		//3)
		n, m = 0;
		cnt = 0;
		printf("n m = ");
		scanf_s("%d%d", &n, &m);
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cnt++;
				printf("%02d ", cnt);
			}
			printf("\n");
		}

		//4)
		n, m = 0;
		printf("n m = ");
		scanf_s("%d%d", &n, &m);
		int k = m;
		for (int i = 1; i <= n; i++) {
			for (int j = i; j <= k; j++) {
				printf("%02d ", j);
			}
			k++;
			printf("\n");
		}

		//5)
		n, m = 0;
		int re_cnt = 0;
		printf("n m = ");
		scanf_s("%d%d", &n, &m);
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				re_cnt++;
				printf("%d", re_cnt);


			}
			printf("\n");
		}
	}
}