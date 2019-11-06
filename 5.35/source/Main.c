#include <stdio.h>
#include <stdlib.h>

signed int fabonacci(signed int);
int temp1, temp2, temp3;

signed int main(void)
{
	int i, l;

	temp1 = 0;
	temp2 = 1;

	printf("請輸入欲顯示之斐波那契數列長度:");
	scanf_s("%d", &l);

	printf("%d,\n", temp1);
	printf("%d,\n", temp2);

	for (i = 1; i <= l; i++)
	{
		printf("%d,\n", fabonacci(i));
	}
	
	system("pause");
	return 0;
}

signed int fabonacci(signed int j)
{
	temp3 = temp1 + temp2;
	temp1 = temp2;
	temp2 = temp3;
	return temp3;
}