#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("請輸入一個數字：");
	scanf("%d", &num);
	if (num % 2 == 0)
	{
		printf("%d是偶數\n",num);
	}
	if (num % 2 == 1)
	{
		printf("%d是奇數\n", num);
	}
	system("pause");
	return 0;
}