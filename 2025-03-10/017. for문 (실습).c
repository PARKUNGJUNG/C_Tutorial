#include <stdio.h>

int main(void) {

	/*
	{
		///�ǽ�����1
		int sum = 0;
		int arr[5];
		for (int i = 1; i <= 5; i++) {
			printf("����>> ");
			scanf_s("%d", &arr[i]);
			if (arr[i] < 0) {
				break;
			}
			sum += arr[i];
		}
		printf("%d\n", sum);
	}
	*/

	{
		///�ǽ�����2
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
		///�ǽ�����2
		//2)
		int stor = 0;
		int d, n, k;
			printf("k d n = ");
			scanf_s("%d%d%d", &k, &d, &n);
			printf("A1 = %d", k);
		for (int i = 2; i <= n; i++) {
			int m = k + d;
			printf("A%d = %d\n", i, stor);
			stor += m;

		}
	}
}