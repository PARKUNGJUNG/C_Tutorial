#include <stdio.h>

int main(void) {

	///������ ǥ��
	char i = 65; 
	printf("%d %c\n", 65, 65);
	printf("%d %c\n", i, i);
	char ch = 'A'; 
	printf("%d %c\n", 'A', 'A'); 
	printf("%d %c\n", ch, ch);


	///��������
	char a = '0';
	char b = '0';
	printf("���� �ϳ��� �Է��ϼ���>> ");
	scanf_s("%c", &a, 20);
	printf("���� %c�� �ƽ�Ű �ڵ�� %d�Դϴ�.\n", a, a);

	getchar(); //���ۿ� ���� �ִ� \n�� �о ���� �ش�.

	printf("���� �ϳ��� �Է��ϼ���>> ");
	scanf_s("%c", &b, 20);
	printf("���� %c�� �ƽ�Ű �ڵ�� %d�Դϴ�.\n", b, b);


	///���ڿ� ����ϱ�
	char str[100] = "This is a string."; 
	printf("���� �迭 str�� ����� ���ڿ���: %s\n", str);


	///��������
	char str1[20] = "This is";
	char str2[20] = "a string.";
	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);
	printf("str1str2: %s %s\n", str1, str2);


	///��������
	char name[100];
	int age;
	char into[100];
	printf("�̸� ���� �Ҽ�>> ");
	scanf_s("%s%d%s", name, 100, &age, into, 100);
	printf("�̸��� %s, ���̴� %d��, �Ҽ��� %s�Դϴ�.", name, age, into);
	
	


}