#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("叫块计");
	scanf("%d", &num);
	if (num % 2 == 0)
	{
		printf("%d琌案计\n",num);
	}
	if (num % 2 == 1)
	{
		printf("%d琌计\n", num);
	}
	system("pause");
	return 0;
}