#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char b;
	
	printf("��J�@�^��r���A�H�ഫ�j�p�g\n");
	scanf_s("%c", &b);

	if (b >= 'A' && b <= 'Z')        //�j�g��p�g
	{
		b = b + 32;                  //�j�gA=1000001(2) �p�ga=1100001(2)
		printf("%c\n", b);             //�t��32(10)
	}
	else if (b >= 'a' && b <= 'z')   //�p�g��j�g
	{
		b = b - 32;
		printf("%c\n", b);
	}
	else
	{
		printf("��J���~\n");
	}

	system("pause");
	return 0;
}