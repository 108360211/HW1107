#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2;
	int i, j;

	printf("��J����,�H�o��̤p������:");
	scanf_s("%d%d", &num1, &num2);

	for (i = 1; i <= num2; i++)
	{
		for (j = 1; j <= num1; j++)
		{
			if ((num1*i) == (num2*j))
			{
				printf("%d�P%d���̤p�����Ƭ�%d\n", num1, num2, (num1*i));
				i = num2;         //����Oi,j���̤j�ȦӵL�k�~��i�J�j��
				j = num1;

				system("pause");
				return 0;
			};
		}
	}
}