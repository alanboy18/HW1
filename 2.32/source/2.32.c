#include <stdio.h>
#include <stdlib.h>

int main(viod)
{
	float BMI,high, weight;

	printf("��J����(����)�G");
	scanf("%f", &high);
	printf("��J�魫(����)�G");
	scanf("%f", &weight);
	BMI = weight / ( high * high );
	
	printf("\n�z��BMI�ȬO%.2f\n\n",BMI);
	
	printf("BMI VALUES\n");
	printf("Underweight�G \t less than 18.5        \n");
	printf("Normal�G      \t berween 18.5 and 24.9 \n");
	printf("Overweight    \t between 25 and 29.9   \n");
	printf("Obes          \t 30 or greater         \n");
	system("pause");
	return 0;
}