#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, num3;
	printf("�п�J�T�ӼƦr�A�åH�ťչj�}:");
	scanf("%d %d %d",&num1,&num2,&num3);	
	if (num1 > num2)
	{
		if (num1 > num3)
		{
			printf("�̤j��ơG%d\n", num1);
			if(num2<num3)printf("�̤p��ơG%d\n", num2);
			if(num2>num3)printf("�̤p��ơG%d\n", num3);
		}
		if (num1 < num3)
		{
			printf("�̤j��ơG%d\n", num3);
			printf("�̤p��ơG%d\n", num2);
		}
	}
	if (num1 < num2)
	{
		if (num1 > num3)
		{
			printf("�̤j��ơG%d\n", num2);
			printf("�̤p��ơG%d\n", num3);
		}
		if (num1 < num3)
		{
			if(num2<num3)printf("�̤j��ơG%d\n", num3);
			if(num2>num3)printf("�̤j��ơG%d\n", num2);
			printf("�̤p��ơG%d\n", num1);
		}
	}
	system("pause");
	return 0;
}