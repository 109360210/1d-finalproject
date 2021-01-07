#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int k, x, y;
	int n, b, a;
f:printf("請選擇小遊戲\n(1)終極密碼\n(2)單人搬山遊戲簡單版\n(3)單人搬山遊戲困難版\n(4)雙人搬山遊戲\n(5)結束\n");
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
		printf("搬山遊戲\n");
		printf("遊戲開始\n");

		n = 0;
		printf("-------------\n");
		printf("總共有幾座山?");
		scanf_s("%d", &n);
		printf("一次最多搬幾座山?");
		scanf_s("%d", &k);
		while (n != 1)
		{
			printf("Player1:你想要搬走幾座山?");
			scanf_s("%d", &x);
			if (x<1 || x>k || x > n)
			{
				printf("IIIegal,again please!\n");
				continue;
			}
			n -= x;
			printf("剩下 %d 座山 \n", n);
			if (n == 1)
			{
				printf("Player1 Win\n");
				break;
			}
			
			y = 1 + rand() % k;
			
				n -= y;
			printf("電腦移動 %d 座山.\n", y);
			
				printf(" 還剩 %d 座山.\n", n);
			if (n == 1)
			{
				printf("Player1 lose\n");
				break;
			}
		}
		goto f;
		return 0;
	case 3:
		printf("搬山遊戲\n");
		printf("遊戲開始\n");
		n = 0;
		printf("-------------\n");
		printf("總共有幾座山?");
		scanf_s("%d", &n);
		printf("一次最多搬幾座山?");
		scanf_s("%d", &k);
		while (n != 1)
		{
			printf("Player1:你想要搬走幾座山?");
			scanf_s("%d", &x);
			if (x<1 || x>k || x > n)
			{
				printf("IIIegal,again please!\n");
				continue;
			}
			n -= x;
			printf("剩下 %d 座山 \n", n);
			if (n == 1)
			{
				printf("Player1 Win\n");
				break;
			}
			
				y = (n - 1) % (k + 1);
				if (y > 0)
				{
					n -= y;
					printf("電腦移動 %d 座山.\n", y);
				}
				else
				{
					y = 1 + rand() % k;
					printf("電腦移動 %d 座山.\n", y);
				}
			
				printf(" 還剩 %d 座山.\n", n);
			if (n == 1)
			{
				printf("Player1 lose\n");
				break;
			}
		}
			goto f;
			return 0;
	case 4:
		printf("搬山遊戲\n");
		printf("遊戲開始\n");
		n = 0;
		printf("-------------\n");
		printf("總共有幾座山?");
		scanf_s("%d", &n);
		printf("一次最多搬幾座山?");
		scanf_s("%d", &k);
		while (n != 1)
		{
			printf("Player1:你想要搬走幾座山?");
			scanf_s("%d", &x);
			if (x<1 || x>k || x > n)
			{
				printf("IIIegal,again please!\n");
				continue;
			}
			n -= x;
			printf("剩下 %d 座山 \n", n);
			if (1==n )
			{
				printf("Player1 Win\n");
				break;
			}

			printf("Player2:你想要搬走幾座山?");
			scanf_s("%d", &y);
			if (y<1 || y>k || y > n)
			{
				printf("IIIegal,again please!\n");
				continue;
			}
			n -= y;
			printf("剩下 %d 座山 \n", n);
			if (1==n)
			{
				printf("Player2 Win\n");
				break;
			}
		}
		goto f;
	case 5:
		printf("結束");
		}
		return 0;
	}
