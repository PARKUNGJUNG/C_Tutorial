#include <stdio.h>

int main(void) {
	/*
	//ū����ǥ ��� \"\ �̷��� ����.
	 
	
	///��������
	printf("�װ� ���ߴ�. \"������ �� ������ ����.\"\n");


	///Ư������ ����ϱ�
	printf("���α׷�����\'�ڵ�\'�̶���θ���.\n");
	printf("�︸����\\30, 000 �����.\n");
	printf("���ú񰡿�Ȯ��:\t60 %%\n");


	///�̽������� ������
	// \n �ٹٲ�
	// \t tab
	// \b Backspace
	// \\ Backslash
	// \' ��������ǥ
	// \" ū����ǥ
	// %% �ۼ�Ʈ��ȣ


	///��������
	printf("���� �ܾ�: \\1,000,000,000 (�Ͻʾ� ��)\n6�� ¥�� �ǹ��� ��� ������� 40%%�� ���´�.\n");


	///���������� ����
	// %d ����(int) 
	// %f printf() : double / float, scanf() : float
	// %lf printf() : double / float, scanf() : double
	// %c ����
	// %s ���ڿ�
	// %ld long
	// %lld long long
	// %u unsigned int
	// %lu unsigned long
	// %llu unsigned long long
	// %o 8����
	// %x 16����


	///������ �����ؼ� ����ϱ�
	int yee = 333; 
	char str[10] = "abc";
	printf("0123456789\n"); 
	printf("----------\n"); 
	printf("%d\n", 333); 
	printf("%5d\n", 333); 
	printf("%05d\n", 333); 
	printf("%s\n", str); 
	printf("%5s\n", str);


	printf("0123456789\n");
	printf("----------\n");
	for (int i = 1; i <= 9; i++) {
		printf("%2d * %2d = %2d\n", 2, i, 2 * i); //�ڸ����� 3�ڸ� �̻��� ����� �Ǹ� ���Ⱑ �����ϱ� ������ ���.
	}


	///��������
	int kor = 0;
	int Eng = 0;
	int Math = 0;
	int Sci = 0;
	int kor1 = 0;
	int Eng1 = 0;
	int Math1 = 0;
	int Sci1 = 0;
	printf(">> ");
	scanf_s("%d%d%d%d", &kor, &Eng, &Math, &Sci);
	scanf_s("%d%d%d%d", &kor1, &Eng1, &Math1, &Sci1);
	printf("���� ���� ���� ����\n");
	printf("===================\n");
	printf("%4d %4d %4d %4d\n", kor, Eng, Math, Sci);
	printf("%4d %4d %4d %4d\n", kor1, Eng1, Math1, Sci1);


	///�Ǽ� ����ϱ�
	double dbl = 123.4567890123;
	printf("%lf\n", dbl);
	//�Ҽ��� ���ϴ� �⺻ 6�ڸ����� ���.

	dbl = 123.4567890123;
	printf("%.3lf\n", dbl); //������ �Ҽ����� �ݿø�.


	///��������
	double PI = 3.14159265359;
	printf("%.2lf\n", PI);
	printf("%.4lf\n", PI);
	printf("%lf\n", PI);


	///�Ǽ��� ������ �����ϱ�
	dbl = 123.4567890123;

	printf("01234567890123456789\n");
	printf("------------------------------\n");

	printf("%.3f\n", dbl);
	printf("%20.3f\n", dbl); //20�� ��ü ������ ũ��. �ű⼭ �Ҽ��� 3�ڸ��� ����϶�� ��.
	printf("%020.3f\n", dbl); //20�� ��ü ������ ũ�⿡ 0�� ä��� �Ҽ��� 3�ڸ����� ���.
	*/

	///��������
	double x = 12.34;
	double y = 5.67;
	double z = x + y;// <- (x + y)�� ������ ����
	double a = 1.2;
	double b = 0.345;
	double c = a + b;// <- (a + b)�� ������ ����
	printf("%7.3f + %7.3f = %7.3f\n", x, y, z);
	printf("%7.3f + %7.3f = %7.3f\n", a, b, c);


	///�迭 ����غ���
	///�������� for�� ����
	int x1 = 0;
	for (int i = 0; i < 4; i++) {
		scanf_s("%d", &x1); 
		if (x1 % 3 == 0) {
			//noop = no operation �� ���Ӹ�. �۵����� �ʴ´ٴ� ��.
		}
		else {
			printf("%d", x1);
		}
		if (x < 0) {
			break;
		}
	}


	///�迭 ����غ���
	int nums[5] = { 1, 2, 3, 4, 5 }; //�迭 ���ҵ��� 1, 2, 3, 4, 5�� �ʱ�ȭ
	for (int i = 0; i < 5; i++) { 
		printf("%d ", nums[i]); 
	}
	printf("\n");
	//�ݺ����� ���� ����(i)�� �迭 ũ�⿡ ����.
	//���� �ڵ尡 ũ�Ⱑ 5�ϱ� 0~4���� 
	//i = 0,1,2,3,4  nums[0]~nums[4]���� ���. 
	
	//�ڷ� ����(Data Structure)
	//������ ���� ���� �����ϴ� ���

	//�迭(Array)
	//���� Ÿ���� ������ ���� ���� �Ϸķ� ������ �� �ִ� �ڷ� ����
}