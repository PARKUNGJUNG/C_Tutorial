#include <stdio.h>

int main(void) {

	/*
	//실습문제1
	int x = 100;
	int y = 200;
	int tmp1 = x;
	printf("초기값: x=
	d, y=%d\n", x, y);
	x = y;
	y = tmp1;
	printf("교환 후: x=%d, y=%d\n", x, y);

	//실습문제2
	printf("0이상 9이하 정수를 입력하세요>>\n");
	scanf_s("%d", &x);
	printf("코끼리를 삼킨 보아뱀\n");
	printf("    %d%d%d\n", x, x, x);
	printf("    %d%d%d\n", x, x, x);
	printf("%d%d%d%d%d%d%d%d%d\n", x, x, x, x, x, x, x, x, x);

	printf("0이상 9이하 정수를 입력하세요>>\n");
	scanf_s("%d", &x);
	printf("코끼리를 삼킨 보아뱀\n");
	printf("    %d%d%d\n", x, x, x);
	printf("    %d%d%d\n", x, x, x);
	printf("%d%d%d%d%d%d%d%d%d\n", x, x, x, x, x, x, x, x, x);

	//실습문제3
	x, y = 0;
	int z = 0;
	printf("네모 - 동그라미 * 세모 = ?\n");
	printf("네모, 동그라미, 세모에 들어갈 정수를 입력하세요>>\n");
	scanf_s("%d%d%d", &x, &y, &z);
	printf("%d - %d * %d = %d 입니다.\n", x, y, z, x - y * z);

	//실습문제4
	int width = 0;
	int height = 0;
	printf("너비(밑변)의 길이는 얼마입니까?\n");
	scanf_s("%d", &width);
	printf("높이는 얼마입니까?\n");
	scanf_s("%d", &height);
	int area_tri = width * height / 2;
	int area_rect = width * height;
	printf("밑변이 %d, 높이가 %d인 삼각형의 넓이는 %d입니다.\n", width, height, area_tri);
	printf("밑변이 %d, 높이가 %d인 사각형의 넓이는 %d입니다.\n", width, height, area_rect);

	//실습문제5
	int junhee = 5;
	int heeyeon = 10;
	int minsu = 15;
	int tmp2 = junhee;
	printf("준희 = %d, 희연 = %d, 민수 = %d\n", junhee, heeyeon, minsu);
	junhee = heeyeon;
	heeyeon = tmp2;
	printf("준희 = %d, 희연 = %d, 민수 = %d\n", junhee, heeyeon, minsu);
	junhee = junhee + 3;
	minsu = minsu - 3;
	printf("준희 = %d, 희연 = %d, 민수 = %d\n", junhee, heeyeon, minsu);
	minsu = minsu - 4;
	heeyeon = heeyeon + 4;
	printf("준희 = %d, 희연 = %d, 민수 = %d\n", junhee, heeyeon, minsu);

	*/
	//실습문제6
	int day = 0;
	printf("무인도에 며칠동안 표류했습니까?\n");
	scanf_s("%d", &day);
	int day1 = day % 30;
	int month = day / 30;
	int year = day / 360;
	printf("%d일은 %d년 %d개월 %d일입니다.\n", day, year, month, day1);

	printf("무인도에 며칠동안 표류했습니까?\n");
	scanf_s("%d", &day);
	day1 = day % 30;
	month = day / 30;
	year = day / 360;
	printf("%d일은 %d년 %d개월 %d일입니다.\n", day, year, month, day1);

	printf("무인도에 며칠동안 표류했습니까?\n");
	scanf_s("%d", &day);
	year = day / 360;
	month = (day - (360 * year)) / 30;
	day1 = day % 30;
	printf("%d일은 %d년 %d개월 %d일입니다.\n", day, year, month, day1); //?

	/*
	//실습문제 7-1
	int money = 10000;
	int price = 0;
	int qty = 0;
	printf("현재 소지금은 %d원입니다.\n", money);
	printf("아이스크림 단가는 얼마입니까?\n");
	scanf_s("%d", &price);
	printf("아이스크림 몇 개를 삽니까?\n");
	scanf_s("%d", & qty);
	printf("아이스크림 %d개는 %d원입니다.\n", qty, price * qty);
	int change = money - price * qty;
	printf("%d원을 내면 거스름돈은 %d원입니다.\n", money, change);
	
	
	//실습문제 7-2
	printf("현재 소지금은 %d원입니다.\n", money);
	printf("아이스크림 단가는 얼마입니까?\n");
	scanf_s("%d", &price);
	printf("아이스크림 몇 개를 삽니까?\n");
	scanf_s("%d", &qty);
	printf("아이스크림 %d개를 사면 %d원입니다.\n", qty, price* qty);
	change = money - price * qty;
	printf("%d원을 내면 거스름돈은 %d원입니다.\n", money, change);
	int chg5000 = change / 5000;
	int chg1000 = chg5000 / 1000; //?
	int chg500 = chg1000 / 500; //?
	printf("5천원권 %d장, 1천원권 %d장, 5백원 동전 %d개입니다.\n", chg5000, chg1000, chg500);
	*/
	return 0;
}