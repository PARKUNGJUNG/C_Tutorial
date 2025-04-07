#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define _CRT_SECURE_NO_WARNINGS //scanf 오류 방지

int main(void) {


	//1-1)인트로 & 준비
	while (1) {
		printf("****야옹이와 수프****\n\n\n");
		printf("           /\\_/\\    \n");
		printf("     /\\   / ° ° \\   \n");
		printf("    //\\\\  \\~(*)~/  \n");
		printf("    `  \\/    ^ /     \n");
		printf("       |  \\|| ||     \n");
		printf("       \\  '|| ||     \n");
		printf("        \\)  ()-())   \n\n");

		char sunquan[20];
		printf("야옹이의 이름을 지어 주세요: ");
		scanf_s("%s", sunquan, 20); //%c를 써야되나?? //scanf_s는 문자열 입력시 뒤에 버퍼의 크기를 입력해야됨.
		printf("야옹이의 이름은 %s입니다.", sunquan);
		Sleep(1000);
		system("cls");


	//1-2)상태 출력 //지금까지 만든 수프의 개수 //친밀도 값과 설명을 출력
		int soup = 0;
		int relation = 2;
		
		printf(
		"\
		==================== 현재 상태 ====================\n\
		현재까지 만든 수프: %d개\n\
		집사와의 관계(0~4): %d\n\
		그럭저럭 쓸 만한 집사입니다.\n\
		===================================================\
		\n\
		\n\
		", soup, relation);
		Sleep(500);
		*/
		
		printf("==================== 현재 상태 ====================\n");
		printf("현재까지 만든 수프 : %d개\n", soup);
		printf("집사와의 관계(0~4) : %d\n", relation);
		printf("  그럭저럭 쓸 만한 집사입니다.\n");
		printf("===================================================\n");
		printf("												   \n");
		Sleep(500);


		//1-3)상호작용
		int interaction;
			printf("어떤 상호작용을 하시겠습니까?   0. 아무것도 하지 않음   1. 긁어 주기\n");
			printf(">> ");
			scanf_s("%d", &interaction);
			if (0 <= interaction && interaction <= 1) {
			//if (interaction = 0 || interaction = 1) { //수정본
				if (interaction == 0) {
					printf("아무것도 하지 않습니다.\n");
					//주사위, 친밀도 6/4 확률 코딩.
				}
				else {
					printf("%s의 턱을 긁어주었습니다.\n", sunquan);
					//6/2확률 코딩.
				}
			}
			else {
				//상호작용에서 범위 외의 값이 입력 되면 다시 입력 받기
			}
	}
}