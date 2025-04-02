#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define _CRT_SECURE_NO_WARNINGS //scanf 오류 방지

int main(void) {

	//1-1)인트로 & 준비
	while (1) {
		printf("****갈렙이와 수프****\n\n\n");
		printf("           /\\_/\\    \n");
		printf("     /\\   / ° ° \\   \n");
		printf("    //\\\\  \\~(*)~/  \n");
		printf("    `  \\/    ^ /     \n");
		printf("       |  \\|| ||     \n");
		printf("       \\  '|| ||     \n");
		printf("        \\)  ()-())   \n\n");

		char sunquan[20];
		printf("야옹이의 이름을 지어 주세요: ");
		scanf_s("%s", sunquan, 20); //scanf_s는 문자열 입력시 뒤에 버퍼의 크기를 입력해야됨.
		printf("야옹이의 이름은 %s입니다.", sunquan);

		Sleep(1000);
		system("cls");


		//1-2)상태 출력 //지금까지 만든 수프의 개수 //친밀도 값과 설명을 출력
		/*
		printf(
		"\
		==================== 현재 상태 ====================\n\
		현재까지 만든 수프: 0개\n\
		집사와의 관계(0~4): 2\n\
		그럭저럭 쓸 만한 집사입니다.\n\
		===================================================\
		");
		*/
		printf("												  \n");
		printf("==================== 현재 상태 ====================\n");
		printf("현재까지 만든 수프 : 0개\n");
		printf("집사와의 관계(0~4) : 2\n");
		printf("그럭저럭 쓸 만한 집사입니다.\n");
		printf("===================================================\n");

	}


}