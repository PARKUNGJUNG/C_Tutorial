#include <stdio.h>

int main(void) {
	/*
	///�ǽ�����1
	char title[50];
	char name[50];
	char publish[50];
	printf("����>> ");
	gets_s(title, 50);
	printf("����>> ");
	gets_s(name, 50);
	printf("���ǻ�>> ");
	gets_s(publish, 50);
	printf("������ %s, ���ڴ� %s, ���ǻ�� %s�Դϴ�.\n", title, name, publish);


	///�ǽ�����2
	int count = 1;
	while (1) {
		printf("%d\n", count++);
		printf("����Ϸ��� ���� Ű�� �Է��ϼ���...");
		getchar();

	}
	

	///�ǽ�����3
	int postcode;
	char address[200];
	printf("�ּ�>> ");
	scanf_s("%d", &postcode);
	gets_s(address, 200);
	printf("�ּҴ� '%d%s' �Դϴ�.\n", postcode, address);


	///�ǽ�����4
	char ch;
	char ch1;
	scanf_s("%c", &ch, 100);
	getchar();
	scanf_s("%c", &ch1, 100);
	printf("���� '%c'�� �ƽ�Ű�ڵ� ���� %d\n", ch, ch);
	printf("���� '%c'�� �ƽ�Ű�ڵ� ���� %d\n", ch1, ch1);
	printf("���ĺ� �빮���� �ƽ�Ű�ڵ� �� ������ %d ~ %d\n", ch, ch1);

	getchar();
	char ch2;
	char ch3;
	scanf_s("%c", &ch2, 100);
	getchar();
	scanf_s("%c", &ch3, 100);
	printf("���� '%c'�� �ƽ�Ű�ڵ� ���� %d\n", ch2, ch2);
	printf("���� '%c'�� �ƽ�Ű�ڵ� ���� %d\n", ch3, ch3);
	printf("���ĺ� �ҹ����� �ƽ�Ű�ڵ� �� ������ %d ~ %d\n", ch2, ch3);

	getchar();
	char ch4;
	char ch5;
	scanf_s("%c", &ch4, 100);
	getchar();
	scanf_s("%c", &ch5, 100);
	printf("���� '%c'�� �ƽ�Ű�ڵ� ���� %d\n", ch4, ch4);
	printf("���� '%c'�� �ƽ�Ű�ڵ� ���� %d\n", ch5, ch5);
	printf("���ڿ� �ƽ�Ű�ڵ� �� ������ %d ~ %d\n", ch4, ch5);

	
	///�ǽ�����5
	for (int i = 0; i < 4; i++) {
		char Alphabet;
		printf("���ĺ� �Է�>> ");
		scanf_s("%c", &Alphabet, 50);
		getchar();
		if (Alphabet < 97) {
			printf("'%c' -> '%c'\n", Alphabet, Alphabet + 32);
		}
		else {
			printf("'%c' -> '%c'\n", Alphabet, Alphabet - 32);
		}



	}

	*/
	///�ǽ�����6
	char Alphabet1;
	printf("��ȣ��>> ");
	scanf_s("%c", &Alphabet1, 50);
	getchar();
	printf("��ȣ��: %c\n", Alphabet1);
	printf("��ǥ: %d\n", Alphabet1);
}