#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int weight[5] = { 0 };

void input_weight(void) { //�Լ��� ����
	for (int i = 0; i < 5; i++) {
		printf("������(kg)>> ");
		scanf_s("%d", &weight[i]);
	}
}

int min_weight(void) { //�Լ��� ����
	int min = INT_MAX;
	for (int i = 0; i < 5; i++) {
		if (min > weight[i]) {
			min = weight[i];
		}
	}
	printf("���� ������ ����� %dkg\n", min);
}

void nm_sum(void) {
	int n, m = 0;
	int sum = 0;
	printf("n m >> ");
	scanf_s("%d%d", &n, &m);
	for (n; n <= m; n++) {
		sum += n;
	}
	printf("sum = %d\n", sum);
}



int main(void) {
	/*

	{
		///�ݺ����� ����
		int arr[5] = { 1, 2, 3, 4, 5 };
		int sum = 0;
		for (int i = 0; i < 5; i++) {
			printf("%d %d\n", arr[i], sum);
			sum += arr[i];
		}
		printf("sum = %d\n", sum);
	}


	{
		///�ִ�/�ּڰ� ���ϱ�
		int num[5];
		for (int i= 0; i< 5; i++) {
			scanf_s("%d", &num[i]);
		}
		// �����Ѱ������������ν���
		 // �Ǵ�ù��°�����ͷ��ʱ�ȭ�ϱ⵵��
		 int max = INT_MIN;
		 for (int i= 0; i< 5; i++) {
			 if (max < num[i]) { max = num[i]; }
		 }
		 printf("max =%d\n", max);
		 return 0;
	}

	
	{
		///��������
		input_weight();
		min_weight();
	}


	{
		///Ƚ��/���� ����
		int cnt_even = 0; 
		int pos[5] = { 3, 5, 7, 12, 24 };
		// pos [] ����غ���
		
		// ���
		for (int i= 0; i< 5; i++) {
			if (pos[i] % 2 == 0) {
				cnt_even++;
			}
		}
		printf("¦����%d��\n", cnt_even);
	}


	{
		///��������
		int up_weight60 = 0;
		int weight[5] = { 55, 48, 105, 67, 79 };

		for (int i = 0; i < 5; i++) {
			if (weight[i] >= 60) {
				up_weight60++;
			}
		}
		printf("60kg �̻��� ����� %d��\n", up_weight60);
	}


	{
		///Ƚ���� 0���� �ƴ��� Ȯ��
		int num[5]; 
		for (int i = 0; i < 5; i++) { 
			printf("����>> "); 
			scanf_s("%d", &num[i]); 
		}
		bool exist_0 = false; 
		for (int i = 0; i < 5; i++) { 
			if (num[i] == 0) { 
				exist_0 = true; 
				break; 
			} 
		}
		if (exist_0)printf("0���ԷµǾ���\n");
		else
			printf("0���Էµ����ʾ���\n");
	}


	{
		///��������
		int weight[5] = { 55, 48, 105, 67, 79 };
		bool up_weight100 = false;
		for (int i = 0; i < 5; i++) {
			if (weight[i] >= 100) {
				up_weight100 = true;
				break;
			}
		}
		if (up_weight100) {
			printf("100kg �̻��� ����� 1�� �̻� ����\n");
		}
		else {
			printf("100kg �̻��� 1�� ����\n");
		}
	}


	{
		///�����
		for (int i = 1; i <= 10; i++) {
			printf("�ݺ����Դϴ�.\n");
			printf("���� i���� %d\n", i);
		}
		//���� i�� ���� ������ �ݺ����� �������� �Ѵ�.
	}


	{
		///break��
		//�ݺ��� ������, break���� ����Ǹ� �ݺ� �����ϰ� �ݺ����� ��� ���.
		for (int i = 1; i <= 5; i++) {
			if (i == 3)
				break; 
			printf("i = % d\n", i);
		}
		printf("��\n");
	}


	{
		///continue��
		//�ݺ��� ������, continue���� ����Ǹ�
		//continue ������ �ڵ带 �� �� �ǳ� �ٰ�,
		//�ݺ����� ó������ ���ư� ���� �ݺ��� ������.
		for (int i = 1; i <= 5; i++) {
			if (i == 3)continue;
			printf("i = % d\n", i);
		}
	}
	*/

	{
		///��������
		for (int i = -20; i <= 0; i++) {
			printf("%d\n", i);
		}
		for (int i = 1; i <= 20; i++) {
				printf("+%d\n", i);
			}
	}


	{
		///�ʱ갪, ���� �����ϱ�
		//���ĺ� �ҹ��� 'a'���� 'z'���� ����ϴ� ���α׷�.
		for (char ch = 'a'; ch <= 'z'; ch++) {
			printf("%c", ch);
		}
		printf("\n");

		//10���� 20���� ���� ���ؼ� ����ϴ� ���α׷�
		int sum = 0;
		for (int i = 10; i <= 20; i++) {
			sum += i;
		}
		printf("sum = %d\n", sum);
	}


	{
		///��������
		//1)
		int n, m = 0;
		int sum = 0;
		printf("n m >> ");
		scanf_s("%d%d", &n, &m);
		for (n; n <= m; n++) {
			sum += n;
		}
		printf("sum = %d\n", sum);
	}


	{
		///��������
		//2)
		nm_sum();
	}


	{
		///������ �����ϱ�
		for (int i = 1; i <= 9; i += 2) {
			printf("i = %d\n", i);
		}
	}


	{
		///��������
		int n;
		printf("n = ");
		scanf_s("%d", &n);

	}
}