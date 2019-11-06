#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int base, exponent, i;
	int Ans=1;

	printf("叫块┏计:");
	scanf_s("%d", &base);

	printf("叫块计:");
	scanf_s("%d", &exponent);

	if (exponent >= 0)
	{
		for (i = 1; i <= exponent; i++)
		{
			Ans = Ans * base;
		}
		printf("%d%dΩよ单%d\n", base, exponent, Ans);
	}
	else
	{
		for (i = 1; i <= abs(exponent); i++)
		{
			Ans = Ans * base;
		}
		printf("%d%dΩよ单1/%d\n", base, exponent, Ans);
	};

	system("pause");
	return 0;
}