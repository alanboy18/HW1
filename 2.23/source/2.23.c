#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, num3;
	printf("叫块计フ筳秨:");
	scanf("%d %d %d",&num1,&num2,&num3);	
	if (num1 > num2)
	{
		if (num1 > num3)
		{
			printf("程俱计%d\n", num1);
			if(num2<num3)printf("程俱计%d\n", num2);
			if(num2>num3)printf("程俱计%d\n", num3);
		}
		if (num1 < num3)
		{
			printf("程俱计%d\n", num3);
			printf("程俱计%d\n", num2);
		}
	}
	if (num1 < num2)
	{
		if (num1 > num3)
		{
			printf("程俱计%d\n", num2);
			printf("程俱计%d\n", num3);
		}
		if (num1 < num3)
		{
			if(num2<num3)printf("程俱计%d\n", num3);
			if(num2>num3)printf("程俱计%d\n", num2);
			printf("程俱计%d\n", num1);
		}
	}
	system("pause");
	return 0;
}