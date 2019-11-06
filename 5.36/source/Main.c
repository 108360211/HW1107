#include <stdio.h>
#include <stdlib.h>

void hanoi(int, char, char, char);

int X = 0;                     //�p�⦸��

int main(void)
{
	int h;

	printf("�п�J�e���𪺰��סG");
	scanf_s("%d", &h);

	hanoi(h, 'A', 'B', 'C');

	printf("����%d�h���e����ݭn�h��%d��\n", h, X);

	system("pause");
	return 0;
}

void hanoi(int h, char A, char B, char C)
{
	if (h == 1)
	{
		printf("%d\t: �N��%d�Ӷ�L��%c����%c\n", ++X, h, A, C);
	}
	else
	{
		hanoi(h - 1, A, C, B);
		printf("%d\t: �N��%d�Ӷ�L��%c����%c\n", ++X, h, A, C);
		hanoi(h - 1, B, A, C);
	}
}