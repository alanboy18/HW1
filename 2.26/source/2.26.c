#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1=0, num2=0;
	printf("�п�J��Ӿ��(��J�Ʀr�ХΪť�����})\n");
	printf("�ӵ{���|�P�_�Ĥ@�ӼƬO�_���ĤG�Ӽƪ����ơG");
	scanf("%d %d",&num1,&num2);
	if (num1 % num2 == 0)
	{
		printf("%d �O %d������\n",num1,num2);
	}
	else printf("%d ���O %d������\n", num1, num2);
	system("pause");
	return 0;
}