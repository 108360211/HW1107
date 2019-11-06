#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2;
	int i, j;

	printf("块ㄢ俱计,眔ㄤ程そ计:");
	scanf_s("%d%d", &num1, &num2);

	for (i = 1; i <= num2; i++)
	{
		for (j = 1; j <= num1; j++)
		{
			if ((num1*i) == (num2*j))
			{
				printf("%d籔%d程そ计%d\n", num1, num2, (num1*i));
				i = num2;         //тi,j程τ礚猭膥尿秈癹伴
				j = num1;

				system("pause");
				return 0;
			};
		}
	}
}