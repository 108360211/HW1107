#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char b;
	
	printf("輸入一英文字母，以轉換大小寫\n");
	scanf_s("%c", &b);

	if (b >= 'A' && b <= 'Z')        //大寫轉小寫
	{
		b = b + 32;                  //大寫A=1000001(2) 小寫a=1100001(2)
		printf("%c\n", b);             //差值32(10)
	}
	else if (b >= 'a' && b <= 'z')   //小寫轉大寫
	{
		b = b - 32;
		printf("%c\n", b);
	}
	else
	{
		printf("輸入錯誤\n");
	}

	system("pause");
	return 0;
}