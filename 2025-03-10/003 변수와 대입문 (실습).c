#include <stdio.h>

int main(void) {

	/*
	//�ǽ�����1
	int x = 100;
	int y = 200;
	int tmp1 = x;
	printf("�ʱⰪ: x=
	d, y=%d\n", x, y);
	x = y;
	y = tmp1;
	printf("��ȯ ��: x=%d, y=%d\n", x, y);

	//�ǽ�����2
	printf("0�̻� 9���� ������ �Է��ϼ���>>\n");
	scanf_s("%d", &x);
	printf("�ڳ����� ��Ų ���ƹ�\n");
	printf("    %d%d%d\n", x, x, x);
	printf("    %d%d%d\n", x, x, x);
	printf("%d%d%d%d%d%d%d%d%d\n", x, x, x, x, x, x, x, x, x);

	printf("0�̻� 9���� ������ �Է��ϼ���>>\n");
	scanf_s("%d", &x);
	printf("�ڳ����� ��Ų ���ƹ�\n");
	printf("    %d%d%d\n", x, x, x);
	printf("    %d%d%d\n", x, x, x);
	printf("%d%d%d%d%d%d%d%d%d\n", x, x, x, x, x, x, x, x, x);

	//�ǽ�����3
	x, y = 0;
	int z = 0;
	printf("�׸� - ���׶�� * ���� = ?\n");
	printf("�׸�, ���׶��, ���� �� ������ �Է��ϼ���>>\n");
	scanf_s("%d%d%d", &x, &y, &z);
	printf("%d - %d * %d = %d �Դϴ�.\n", x, y, z, x - y * z);

	//�ǽ�����4
	int width = 0;
	int height = 0;
	printf("�ʺ�(�غ�)�� ���̴� ���Դϱ�?\n");
	scanf_s("%d", &width);
	printf("���̴� ���Դϱ�?\n");
	scanf_s("%d", &height);
	int area_tri = width * height / 2;
	int area_rect = width * height;
	printf("�غ��� %d, ���̰� %d�� �ﰢ���� ���̴� %d�Դϴ�.\n", width, height, area_tri);
	printf("�غ��� %d, ���̰� %d�� �簢���� ���̴� %d�Դϴ�.\n", width, height, area_rect);

	//�ǽ�����5
	int junhee = 5;
	int heeyeon = 10;
	int minsu = 15;
	int tmp2 = junhee;
	printf("���� = %d, �� = %d, �μ� = %d\n", junhee, heeyeon, minsu);
	junhee = heeyeon;
	heeyeon = tmp2;
	printf("���� = %d, �� = %d, �μ� = %d\n", junhee, heeyeon, minsu);
	junhee = junhee + 3;
	minsu = minsu - 3;
	printf("���� = %d, �� = %d, �μ� = %d\n", junhee, heeyeon, minsu);
	minsu = minsu - 4;
	heeyeon = heeyeon + 4;
	printf("���� = %d, �� = %d, �μ� = %d\n", junhee, heeyeon, minsu);

	*/
	//�ǽ�����6
	int day = 0;
	printf("���ε��� ��ĥ���� ǥ���߽��ϱ�?\n");
	scanf_s("%d", &day);
	int day1 = day % 30;
	int month = day / 30;
	int year = day / 360;
	printf("%d���� %d�� %d���� %d���Դϴ�.\n", day, year, month, day1);

	printf("���ε��� ��ĥ���� ǥ���߽��ϱ�?\n");
	scanf_s("%d", &day);
	day1 = day % 30;
	month = day / 30;
	year = day / 360;
	printf("%d���� %d�� %d���� %d���Դϴ�.\n", day, year, month, day1);

	printf("���ε��� ��ĥ���� ǥ���߽��ϱ�?\n");
	scanf_s("%d", &day);
	year = day / 360;
	month = (day - (360 * year)) / 30;
	day1 = day % 30;
	printf("%d���� %d�� %d���� %d���Դϴ�.\n", day, year, month, day1); //?

	/*
	//�ǽ����� 7-1
	int money = 10000;
	int price = 0;
	int qty = 0;
	printf("���� �������� %d���Դϴ�.\n", money);
	printf("���̽�ũ�� �ܰ��� ���Դϱ�?\n");
	scanf_s("%d", &price);
	printf("���̽�ũ�� �� ���� ��ϱ�?\n");
	scanf_s("%d", & qty);
	printf("���̽�ũ�� %d���� %d���Դϴ�.\n", qty, price * qty);
	int change = money - price * qty;
	printf("%d���� ���� �Ž������� %d���Դϴ�.\n", money, change);
	
	
	//�ǽ����� 7-2
	printf("���� �������� %d���Դϴ�.\n", money);
	printf("���̽�ũ�� �ܰ��� ���Դϱ�?\n");
	scanf_s("%d", &price);
	printf("���̽�ũ�� �� ���� ��ϱ�?\n");
	scanf_s("%d", &qty);
	printf("���̽�ũ�� %d���� ��� %d���Դϴ�.\n", qty, price* qty);
	change = money - price * qty;
	printf("%d���� ���� �Ž������� %d���Դϴ�.\n", money, change);
	int chg5000 = change / 5000;
	int chg1000 = chg5000 / 1000; //?
	int chg500 = chg1000 / 500; //?
	printf("5õ���� %d��, 1õ���� %d��, 5��� ���� %d���Դϴ�.\n", chg5000, chg1000, chg500);
	*/
	return 0;
}