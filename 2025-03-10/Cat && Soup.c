#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define _CRT_SECURE_NO_WARNINGS //scanf 오류 방지

int main(void) {

	//인트로
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
	}


}