#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int k, x, y;
	int n, b, a;
f:printf("�п�ܤp�C��\n(1)�׷��K�X\n(2)��H�h�s�C��²�檩\n(3)��H�h�s�C���x����\n(4)���H�h�s�C��\n(5)����\n");
	scanf_s("%d", &a);

	switch (a)
	{
	case 1:
		srand(time(NULL));
		
		int min = 1, max = 99;
		int ran = rand() % 99 + 1;
		char player;
		
		while(1)
		{
			printf("The code is between %d and %d.\n", min, max);
			printf("Player  input your guess: ");
			scanf_s("%d", &n);
			if (n >= min && n <= max) 
			{
				if (n > ran)
					max = n - 1;
				else if (n < ran)
					min = n + 1;
				else
				{
					printf("*~*Bomb!! You are lose!\n ");
					goto f;
				}
			}
			else
				printf("Range error.\n");
		} 
		
	case 2:
		printf("�h�s�C��\n");
		printf("�C���}�l\n");

		n = 0;
		printf("-------------\n");
		printf("�`�@���X�y�s?");
		scanf_s("%d", &n);
		printf("�@���̦h�h�X�y�s?");
		scanf_s("%d", &k);
		while (n != 1)
		{
			printf("Player1:�A�Q�n�h���X�y�s?");
			scanf_s("%d", &x);
			if (x<1 || x>k || x > n)
			{
				printf("IIIegal,again please!\n");
				continue;
			}
			n -= x;
			printf("�ѤU %d �y�s \n", n);
			if (n == 1)
			{
				printf("Player1 Win\n");
				break;
			}
			
			y = 1 + rand() % k;
			
				n -= y;
			printf("�q������ %d �y�s.\n", y);
			
				printf(" �ٳ� %d �y�s.\n", n);
			if (n == 1)
			{
				printf("Player1 lose\n");
				break;
			}
		}
		goto f;
		return 0;
	case 3:
		printf("�h�s�C��\n");
		printf("�C���}�l\n");
		n = 0;
		printf("-------------\n");
		printf("�`�@���X�y�s?");
		scanf_s("%d", &n);
		printf("�@���̦h�h�X�y�s?");
		scanf_s("%d", &k);
		while (n != 1)
		{
			printf("Player1:�A�Q�n�h���X�y�s?");
			scanf_s("%d", &x);
			if (x<1 || x>k || x > n)
			{
				printf("IIIegal,again please!\n");
				continue;
			}
			n -= x;
			printf("�ѤU %d �y�s \n", n);
			if (n == 1)
			{
				printf("Player1 Win\n");
				break;
			}
			
				y = (n - 1) % (k + 1);
				if (y > 0)
				{
					n -= y;
					printf("�q������ %d �y�s.\n", y);
				}
				else
				{
					y = 1 + rand() % k;
					printf("�q������ %d �y�s.\n", y);
				}
			
				printf(" �ٳ� %d �y�s.\n", n);
			if (n == 1)
			{
				printf("Player1 lose\n");
				break;
			}
		}
			goto f;
			return 0;
	case 4:
		printf("�h�s�C��\n");
		printf("�C���}�l\n");
		n = 0;
		printf("-------------\n");
		printf("�`�@���X�y�s?");
		scanf_s("%d", &n);
		printf("�@���̦h�h�X�y�s?");
		scanf_s("%d", &k);
		while (n != 1)
		{
			printf("Player1:�A�Q�n�h���X�y�s?");
			scanf_s("%d", &x);
			if (x<1 || x>k || x > n)
			{
				printf("IIIegal,again please!\n");
				continue;
			}
			n -= x;
			printf("�ѤU %d �y�s \n", n);
			if (1==n )
			{
				printf("Player1 Win\n");
				break;
			}

			printf("Player2:�A�Q�n�h���X�y�s?");
			scanf_s("%d", &y);
			if (y<1 || y>k || y > n)
			{
				printf("IIIegal,again please!\n");
				continue;
			}
			n -= y;
			printf("�ѤU %d �y�s \n", n);
			if (1==n)
			{
				printf("Player2 Win\n");
				break;
			}
		}
		goto f;
	case 5:
		printf("����");
		}
		return 0;
	}
