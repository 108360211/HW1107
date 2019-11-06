#include <stdio.h>
#include <stdlib.h>

void hanoi(int, char, char, char);

int X = 0;                     //計算次數

int main(void)
{
	int h;

	printf("請輸入河內塔的高度：");
	scanf_s("%d", &h);

	hanoi(h, 'A', 'B', 'C');

	printf("移動%d層之河內塔需要搬移%d次\n", h, X);

	system("pause");
	return 0;
}

void hanoi(int h, char A, char B, char C)
{
	if (h == 1)
	{
		printf("%d\t: 將第%d個圓盤由%c移到%c\n", ++X, h, A, C);
	}
	else
	{
		hanoi(h - 1, A, C, B);
		printf("%d\t: 將第%d個圓盤由%c移到%c\n", ++X, h, A, C);
		hanoi(h - 1, B, A, C);
	}
}