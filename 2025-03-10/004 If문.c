#include <stdio.h>

int main(void) {
	
	//������ �� �� �Է� �ް�, �����ؼ� ���ϴ� ���α׷�.
	int x, sum = 0;
	
	printf("x = "); 
	scanf_s("%d", &x);
	sum += x;
	printf("sum = %d\n", sum);

	printf("x = ");
	scanf_s("%d", &x);
	sum += x;
	printf("sum = %d\n", sum);

	printf("x = ");
	scanf_s("%d", &x);
	sum += x;
	printf("sum = %d\n", sum);


	//��������
	x = 10;
	int y = 10;
	int delta = 0;

	printf("delta = ");
	scanf_s("%d", &delta);
	x -= delta;
	y += delta;
	printf("x = %d, y = %d\n", x, y);

	printf("delta = ");
	scanf_s("%d", &delta);
	x -= delta;
	y += delta;
	printf("x = %d, y = %d\n", x, y);

	printf("delta = ");
	scanf_s("%d", &delta);
	x -= delta;
	y += delta;
	printf("x = %d, y = %d\n", x, y);


	//��������
	x = 5;
	y = 20;
	printf("x = %d, y = %d\n", x, y);

	x += 1;
	printf("x = %d, y = %d\n", x, y);

	y -= x;
	printf("x = %d, y = %d\n", x, y); // x = 6, y = 14

	y /= x * 2;
	printf("x = %d, y = %d\n", x, y); // x = 6, y = 1


	//����������
	x = 10, y = 10;
	printf("x=%d, y=%d\n", x, y);

	x++; y--;
	printf("x=%d, y=%d\n", x, y);

	x++; y--;
	printf("x=%d, y=%d\n", x, y);

	x++; y--;
	printf("x=%d, y=%d\n", x, y);


	//��������
	x = 5;
	printf("%d\n", x);

	x++;
	printf("%d\n", x);

	x++;
	printf("%d\n", x);

	x--;
	printf("%d\n", x);

	x++;
	printf("%d\n", x);

}