#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float everyday_parking_fee,everyday_Tolls, total;
	float everyday, Per_gallon_price, Per_gallon_Driving,taxi;

	printf("每天行駛里程：");
	scanf("%f", &everyday);
	printf("每加侖汽油的價錢：");
	scanf("%f", &Per_gallon_price);
	printf("每加侖汽油行駛里程數：");
	scanf("%f", &Per_gallon_Driving);
	printf("每天的停車費：");
	scanf("%f", &everyday_parking_fee);
	printf("每天的過路費：");
	scanf("%f", &everyday_Tolls);

	taxi = everyday* 5;
	total = (everyday *Per_gallon_price )/ Per_gallon_Driving  +everyday_parking_fee + everyday_Tolls;

	printf("每天開車的總花費：%.2f\n",total);
	printf("taxi=%.2f\n",taxi);

	printf("兩人共乘可省下:%.1f元\n", total - (taxi / 2));
	printf("三人共乘可省下:%.1f元\n", total - (taxi / 3));
	printf("四人共乘可省下:%.1f元\n", total - (taxi / 4));

	system("pause");
	return 0;
}