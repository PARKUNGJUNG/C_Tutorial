#include <stdio.h>
#include <stdbool.h>

void power(void) {
	int n, r;
	printf("n r = ");
	scanf_s("%d%d", &n, &r);
	int num = n;
	int m = n;
	for (n = 1; n <= r; n++) {
		printf("%d ", num);
		num *= m;
	}
}

int main(void) {

	/*
	{
		///�ǽ�����1
		int sum = 0;
		int arr[5];
		for (int i = 1; i <= 5; i++) {
			printf("����>> ");
			scanf_s("%d", &arr[i]);
			if (arr[i] < 0) {
				break;
			}
			sum += arr[i];
		}
		printf("%d\n", sum);
	}


	{
		///�ǽ�����2
		//1)
		int stor = 0;
		int k = 0;
		int d, n;
		if (k == 0) {
			printf("d n = ");
			scanf_s("%d%d", &d, &n);
		}
			for (int i = 1; i <= n; i++) {
				int m = k + d;
				printf("A%d = %d\n", i, stor);
				stor += m;

			}
	}


	{
		///�ǽ�����2
		//2)
		int stor = 0;
		int stor1 = 0;
		int k, d, n;
			printf("k d n = ");
			scanf_s("%d%d%d", &k, &d, &n);
			printf("A1 = %d\n", k);
			int m = k + d;
			stor += m;
			printf("A2 = %d\n", m);
			for (int i = 3; i <= n; i++) {
				int m1 = stor + d;
				stor = m1;
					printf("A%d = %d\n", i, m1);
		}
	}


	{
		///�ǽ�����3
		for (int i = 1; i <= 15; i++) {
			if (i % 2 == 0) { continue; }
			printf("%d ", i);
		}
		printf("\n");

		for (int i = 10; i >= 1; i--) {
			printf("%d ", i);
		}
		printf("\n");

		for (int i = 4; i <= 32; i++) {
			if (i % 4 != 0) { continue; }
			printf("%d ", i);
		}
		printf("\n");

		for (int i = 18; i >= 0; i--) {
			if (i % 3 != 0) { continue; }
			printf("%d ", i);
		}
		printf("\n");

		for (int i = 80; i >= -100; i -= 30) {
			printf("%d ", i);
		}
		printf("\n");

		for (int i = 3; i <= 729; i *= 3) {
			printf("%d ", i);
		}
		printf("\n");

		for (int i = 256; i >= 1; i /= 2) {
			printf("%d ", i);
		}
		printf("\n");
	}


	{
		///�ǽ�����4
		int count_mult = 0;
		int n, m, k;
		printf("n m k = ");
		scanf_s("%d%d%d",&n, &m, &k);
		printf("[%d, %d]���� %d�� �����", n, m, k);
		for (n; n <= m; n++) {
			if (n % k == 0) { count_mult ++; }
		}
		printf(" %d��", count_mult);
	}


	{
		///�ǽ�����4 ������ ����
		int count_mult = 0;
		int n, m, k;
		printf("n m k = ");
		scanf_s("%d%d%d", &n, &m, &k);
		for (n; n <= m; n++) {
			if (n % k == 0) { count_mult++; }
		}
		printf("[%d, %d]���� %d�� ����� %d��", n, m, k, count_mult);
	}


	{
		///�ǽ�����5
		//1)
		int num = 2;
		for (int i = 1; i <= 10; i++) {
			printf("%d ", num);
			num *= 2;
		}
	}


	{
		///�ǽ�����5
		//2)
		int n, r;
		printf("n r = ");
		scanf_s("%d%d", &n, &r);
		int num = n;
		int m = n;
		for (n = 1; n <= r; n++) {
			printf("%d ", num);
			num *= m;
		}
	}


	{
		///�ǽ�����5
		//3)
		power();
		printf("return value= ");
	}


	{
		///�ǽ�����6
		//1), 2)
		int cnt = 1;
		int N_cnt = 0;
		int N_etr = 0;
		bool Y_etr = true;
		int team_age[4];
		int team_tall[4];
		for (int i = 0; i < 4; i++) {
			N_cnt++;
			printf("���尴%d ���� Ű(cm)>> ", cnt++);
			scanf_s("%d%d", &team_age[i], &team_tall[i]);
			if (team_age[i] < 6 && team_tall[i] < 140) {
				N_etr += N_cnt;
				Y_etr = false;
			}
		}
		if(Y_etr == true) { printf("�� �о� �����Ͻðڽ��ϴ�~"); }
		else { printf("%d�� �մ� ������ �� ���ʴϴ�.", N_etr); }
	}


	{
		///�ǽ�����7
		//1)
		int a;
		int cnt = 0;
		for (int i = 0; i < 5; i++) {
			printf("����>> ");
			scanf_s("%d", &a);
			if (a > 0) { cnt++; }
		}
		printf("���� ����: %d��", cnt);
	}


	{
		///�ǽ�����7
		//2)
		int a, n;
		int cnt_minus = 0;
		int cnt_plus = 0;
		int zero = 0;
		printf("n>> ");
		scanf_s("%d", &n);
		for (int i = 0; i < n; i++) {
			printf("����>> ");
			scanf_s("%d", &a);
			if (a > 0) { cnt_plus++; }
			else if (a == 0) { zero++; }
			else if (a < 0) { cnt_minus++; }
		}
		printf("���� ����: %d��\n", cnt_plus);
		printf("0        : %d��\n", zero);
		printf("���� ����: %d��\n", cnt_minus);
	}


	{
		///�ǽ�����8
		int x = 0, x_old;

		for (int i = 1; i <= 10; i++) {
			x_old = x;
			x++;
			printf("x: %d --> %d\n", x_old, x);
		}
	}
	{
		int x = 0, x_new;

		for (int i = 1; i <= 10; i++) {
			x_new = x + 1;
			printf("x: %d --> %d\n", x, x_new);
			x++;
		}
	}
	
	
	{
		
		///�ǽ�����9
		int n;
		printf("n = ");
		scanf_s("%d", &n);
		
	}
	

	{
	/*
		///�ǽ����� 11
		int n;
		printf("���ڸ� �Է��ϼ���.\n");
		printf("n = ");
		scanf_s("%d", &n);

		if (n < 1 || n > 20) {
		}

		int a = 1, b = 1;
		int chicken = 1; // �ʱ� ġŲ ������ (F(1)=1)

		if (n == 1) {
			printf("%d\n", chicken);
			return 0;
		}

		for (int i = 3; i <= 20; i++) {
			int next = a + b; // ���� �Ǻ���ġ ��
			if (next > n) { // n�� �ʰ��ϴ� ù ��° ��
				printf("%d\n", chicken); // ���� �� ���
				return 0;
			}
			if (next == n) { // n�� �Ǻ���ġ ������ ������
				printf("%d\n", b); // ���� �� ���
				return 0;
			}
			chicken = b; // ġŲ �������� ���� b
			a = b;
			b = next;
		}

		printf("%d\n", chicken); // n=20�� ���
		return 0;
	}
	*/

	{
		///�ǽ�����11
		int n;
		scanf_s("%d", &n);

		if (n < 1 || n > 20) {
			printf("���ڸ� �Է��ϼ���.\n");
			return 0;
		}

		int a = 1, b = 1;
		int chicken = 1; // �ʱ� ġŲ ������ (F(1)=1)

		if (n == 1) {
			printf("%d\n", chicken);
			return 0;
		}

		for (int i = 3; i <= 20; i++) {
			int next = a + b; // ���� �Ǻ���ġ ��
			if (next == n) { // n�� �Ǻ���ġ ������ ������
				printf("%d\n", b); // ���� �� ���
				return 0;
			}
			if (next > n) { // n�� �ʰ��ϴ� ù ��° ��
				printf("%d\n", b); // n ������ ���� ū �Ǻ���ġ ��
				return 0;
			}
			chicken = b; // ġŲ �������� ���� ��
			a = b;
			b = next;
		}

		printf("%d\n", b); // n=20�� ���
		return 0;
	}
}
				
