#include <stdio.h>

int main(void) {
	printf("Hello World!\n"); //화면 출력
	printf("
		d + %d = %d\n", 10, 20, 30); //화면 출력
	printf("지금이 %d년이니까 %d년생이면 %d살이다.\n", 2021, 2010, 11);
	printf("%d %d %d %d\n", 2 * 2, 2 * 3, 2 * 4, 2 * 5);
	printf("%d %d %d\n", 12 / 5, 12 % 5, 2 ^ 3);


	/*
	* %d 정수형으로 형식을 지정할 수 있다.
	* 연두색 물결표 : 실행은 되지만 경고 부위
	*/

	printf("%d년 %d학기\n", 2021, 1);
	printf("프로그래밍실습\n");
	printf("%d학점, 이론 %d시간, 실습 %d시간\n", 3, 2, 2);

	printf("*   *\n");
	printf(" * *\n");
	printf("  *\n");
	printf(" * *\n");
	printf("*   *\n");

	printf("세드나(90377 Sedna)는 그 궤도가 태양계 외곽에 미치는 커다란 소행성체로, 태양으로부터 86 천문단위(AU), 즉 해왕성보다 세 배 더 멀리 떨어져 있다.");
	printf("분광분석 결과 세드나의 표면은 주로 물, 메탄, 질소, 얼음, 톨린 등이 혼합되어 있어 다른 해왕성 바깥 천체와 크게 다르지 않다.");
	printf("세드나의 표면은 태양계 천체 중 가장 붉은 축에 속한다. 유력한 왜행성 후보이기도 하다.");

	printf("%d * %d = %d\n", 2, 1, 2);
	printf("%d * %d = %d\n", 2, 2, 4);
	printf("%d * %d = %d\n", 2, 3, 6);
	printf("%d * %d = %d\n", 2, 4, 8);
	printf("%d * %d = %d\n", 2, 5, 10);
	printf("%d * %d = %d\n", 2, 6, 12);
	printf("%d * %d = %d\n", 2, 7, 14);
	printf("%d * %d = %d\n", 2, 8, 16);
	printf("%d * %d = %d\n", 2, 9, 18);

	printf("%d초를 %d으로 나누면 몫이 %d, 나머지가 %d이다.\n", 10000, 3600, 10000 / 3600, 10000 % 3600);
	printf("%d초를 %d으로 나누면 몫이 %d, 나머지가 %d이다.\n", 2800, 60, 2800 / 60, 2800 % 60);
	printf("따라서 %d초는 %d시간 %d분 %d초이다.\n", 10000, 2, 46, 40);

	printf("19를 (1+2+1)로 나는 몫은 %d, 나머지는 %d이다.\n", 19 / 4, 19 % 4);
	printf("그러므로 자식들 몫은 %d억원, 기부금은 %d억원이다.\n", 4 + 8 + 4, 19 % 4);
	printf("첫쨰는 %d억원을 상속받는다.\n", 4);
	printf("둘쨰는 %d억원을 상속받는다.\n", 8);
	printf("셋쨰는 %d억원을 상속받는다.\n", 4);
	printf("교회에는 %d억원을 기부한다.\n", 19 % 4);

	return 0;
}