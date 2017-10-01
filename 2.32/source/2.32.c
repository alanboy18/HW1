#include <stdio.h>
#include <stdlib.h>

int main(viod)
{
	float BMI,high, weight;

	printf("輸入身高(公尺)：");
	scanf("%f", &high);
	printf("輸入體重(公斤)：");
	scanf("%f", &weight);
	BMI = weight / ( high * high );
	
	printf("\n您的BMI值是%.2f\n\n",BMI);
	
	printf("BMI VALUES\n");
	printf("Underweight： \t less than 18.5        \n");
	printf("Normal：      \t berween 18.5 and 24.9 \n");
	printf("Overweight    \t between 25 and 29.9   \n");
	printf("Obes          \t 30 or greater         \n");
	system("pause");
	return 0;
}