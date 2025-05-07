#include <stdio.h>

int main(void) {

	/*
	{
		printf("지금이 2021년이니까 2010년생이면 11살이다.\n");

		printf("%d %d %d %d\n", 2 * 2, 2 * 3, 2 * 4, 2 * 5);

		printf("%d 곱하기 %d은 %d입니다.\n", 5, 10, 5 * 10);

		int a, b, c = 0;
		printf("정수 세 개를 입력하세요>> ");
		scanf_s("%d%d%d", &a, &b, &c);
		printf("입력 받은 세 정수의 합은 %d 입니다.\n", a + b + c);
	}


	{
		int a, b;
		printf("a b >>");
		scanf_s("%d%d", &a, &b);
		if (b == 0) {
			printf("0으로 나눌 수 없습니다.\n");
		}
		else {
			printf("%d", a / b);
		}
	}
	

	{
		int a, n;
		printf("몇 번 반복합니까?	");
		scanf_s("%d", &n);
		for (int i = 0; i < n; i++) {
			printf("정수를 입력하세요>> ");
			scanf_s("%d", &a);
			printf("%d\n", a);
		}
	}
	

	{
		char str1[100] = "This is ";
		char str2[100] = "a string.";
		printf("%s%s\n", str1, str2);
	}


	{
		char str[100];
		printf("본인 이름을 입력하세요>> ");
		scanf_s("%s", str, 100);
		getchar();
		printf("당신의 이름은 %s입니다.\n", str);
	}

	{
		char str[200];
		printf("주소를 입력하세요>> ");
		gets_s(str, 200);
		getchar();
		printf("입력 받은 주소는\n");
		puts(str);
		printf("입니다.\n");
	}


	{
		printf("%05d", 333);
	}
	*/

	{
		double PI = 3.14159265359;
		printf("%.2lf\n", PI);
		printf("%.4lf\n", PI);
		printf("%.6lf\n", PI);
		printf("%8.2lf\n", PI);
	}


	{
		int nums[10] = { 1, 3, 5, 7, 9, 12, 15, 18, 21, 24 };
		for (int i = 0; i < 5; i++) {
			printf("%d", nums[i]);
		}
	}
}