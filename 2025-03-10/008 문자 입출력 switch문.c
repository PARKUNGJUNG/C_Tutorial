#include <stdio.h>
#include <stdbool.h>
#define _CRT_SEVURE_NO_WARNINGS

int main(void) {
	
	//��������
	int a = 0;
	int b = 0;
	while (true) {
		printf("a b>> ");
		scanf_s("
			
			
			
			
			
			d%d", &a, &b);
		if (a == 0 && b == 0) {
			break;
			if (a > b) {
				printf("%d\n", a);
			}
			else {
				printf("%d\n", b);
			}
		}
	}

	//���� ���
	char c = 0; //���� ����� char�� ����.
	c = 'a'; //���� ����� char�� ������ �����Ѵ�.
	printf("%c\n", 'a');
	
	
	//���� �Է� �ޱ�: scanf()
	char ch = 0;
	printf("���� �� �� �Է�>> ");
	scanf_s("%c", &ch, 2);
	printf("�Է� ���� ���ڴ� %c �Դϴ�.\n", ch);
	

	//��������
	char y = 0;
	printf("A/C>> ");
	scanf_s("%c", &y, 2);
	if (y == 'A') {
		printf("����� A(����)�Դϴ�.\n");
		}
	else if (y == 'C') {
		printf("����� C(�̼�����)�Դϴ�.\n");
	}
	else {
		printf("�߸� �Է��߽��ϴ�.");
	}


	//��������
	char x = 0;
	a = 0;
	b = 0;
	for (int i = 1; i <= 3; i++); { //�̰� �� for�� ���� �ȵ�?
		printf("������������>> ");
		scanf_s("%d%c%d", &a, &x, 1, &b);
		printf("����: %d ����: %c ����: %d\n", a, x, b);
	}
	

	//Switch��
	// switch(������) {
	// case ������1 :
	// ������ ����1
	// break;
	// ...
	// default :
	// ������ ����3
	// break;
	//if������ switch���� ������ �ڵ忡���� ����ȭ�� �� ���� �� ����.
	

	//��������
	char ch1 = 0;
	printf("A/C>> ");
	scanf_s("%c", &ch1, 1);
	switch (ch1) {
	case 'A':
		printf("����� A(����)�Դϴ�.\n");
		break;
		
	case 'C':
		printf("����� C(�̼�����)�Դϴ�.\n");
		break;
	default:
		printf("�߸� �Է��߽��ϴ�.");
		break;
	}

}