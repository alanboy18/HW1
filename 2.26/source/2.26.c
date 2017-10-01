#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1=0, num2=0;
	printf("請輸入兩個整數(輸入數字請用空白鍵分開)\n");
	printf("該程式會判斷第一個數是否為第二個數的倍數：");
	scanf("%d %d",&num1,&num2);
	if (num1 % num2 == 0)
	{
		printf("%d 是 %d的倍數\n",num1,num2);
	}
	else printf("%d 不是 %d的倍數\n", num1, num2);
	system("pause");
	return 0;
}