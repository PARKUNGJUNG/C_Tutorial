#include <stdio.h>
#include <limits.h>

int main(void) {

	/*
	{
		///2�� for��
		printf("(i, j):\n");
		for (int i = 1; i <= 3; i++) {
			printf("i = %d: ", i);
			for (int j = 1; j <= 2; j++) {
				printf("(%d, %d) ", i, j);
			}
			printf("\n");
		}
	}


	{
		///��������
		//1)
		for (int i = 3; i <= 5; i++) {
			printf("<������ %d��>\n", i);
			for (int j = 1; j <= 9; j++) {
				printf("%d * %d = %d\n", i, j, i * j);
			}
			printf("\n");
		}
	}


	{
		///��������
		//2)
		for (int i = 3; i <= 5; i++) {
			printf("<������ %d��>\n", i);
			for (int j = 1; j <= 19; j++) {
				printf("%d * %d = %d\n", i, j, i * j);
			}
			printf("\n");
		}
	}
	

	{
		///3�� for��
		for (int i = 0; i < 3; i++) { 
			printf("i = %d:\n", i); 
			for (int j = 0; j < 3; j++) { 
				for (int k = 0; k < 4; k++) { 
					printf("*"); 
				}
				printf("\n"); 
			}
			printf("\n");
		}
	}


	{
		///2�� for���� �κ���
		int x, sum; 

		sum = 0;
		for (int j = 1; j <= 5; j++) { 
			printf("x = ");
			scanf_s("%d", &x);
			sum += x;
		}
		printf("sum = %d\n", sum);
	}
	

	{
		///��������
		//1)
		int nums[5] = { 0 };
		int max = INT_MIN, min = INT_MAX;

		for (int j = 0; j < 5; j++) {
			printf("����>> ");
			scanf_s("%d", &nums[j]);
			if (max < nums[j]) { max = nums[j]; }
			if (min > nums[j]) { min = nums[j]; }
		}
		printf("���� ū �� = %d\n", max);
		printf("���� ���� �� = %d\n", min);
	}
	

	{
		///��������
		//2)
		int nums[5] = { 0 };
		int max = INT_MIN, min = INT_MAX;

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				printf("����>> ");
				scanf_s("%d", &nums[j]);
				if (max < nums[j]) { max = nums[j]; }
				if (min > nums[j]) { min = nums[j]; }
			}
			printf("���� ū �� = %d\n", max);
			printf("���� ���� �� = %d\n", min);
		}
		printf("\n");
	}
	

	{
		///��������
		//1)
		int cnt = 0;
		for (int i = 0; i < 5; i++) {
			for (int j = 1; j <= 10; j++) {
				cnt++;
				printf(" %4d", cnt);
			}
			printf("\n");
		}
	}


	{
		///��������
		//2)
	}


	{
		///���� �ݺ����� break��
		for (int i = 1; i <= 2; i++) {
			for (int j = 1; j <= 3; j++) {
				printf("i = %d, j = %d\n", i, j); 
					if (j == 2)
						break;
			}
			printf("\n");
		}
	}


	{
		///2�� for���� ���� ����
		for (int i = 1; i <= 5; i++) {
			printf("i = %d: ", i);
			for (int j = 1; j <= i; j++) {
				printf("(%d, %d)", i, j);
			}
			printf("\n");
		}
	}
	*/

	{
		///��������
		//1)
		for (int i = 1; i <= 5; i++) {
			for (int j = 1; j <= 5; j++) {
				printf("%d", j);
			}
			printf("\n");
		}

		//2)
		for (int i = 1; i <= 5; i++) {
			for (int j = 1; j <= i; j++) {
				printf("%d", j);
			}
			printf("\n");
		}

		//3)
		for (int i = 1; i <= 5; i++) {
			for (int j = i; j <= 5; j++) {
				printf("%d", j);
			}
			printf("\n");
		}

		//4)
		int sum = 5;
		for (int i = 1; i <= 5; i++) {
			for (int j = i; j <= 5; j++) {
				printf("%d", j);
			}
			sum += i;
			printf("\n");
		}
	}


	{

	}
}