#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float everyday_parking_fee,everyday_Tolls, total;
	float everyday, Per_gallon_price, Per_gallon_Driving,taxi;

	printf("�C�Ѧ�p���{�G");
	scanf("%f", &everyday);
	printf("�C�[�ڨT�o�������G");
	scanf("%f", &Per_gallon_price);
	printf("�C�[�ڨT�o��p���{�ơG");
	scanf("%f", &Per_gallon_Driving);
	printf("�C�Ѫ������O�G");
	scanf("%f", &everyday_parking_fee);
	printf("�C�Ѫ��L���O�G");
	scanf("%f", &everyday_Tolls);

	taxi = everyday* 5;
	total = (everyday *Per_gallon_price )/ Per_gallon_Driving  +everyday_parking_fee + everyday_Tolls;

	printf("�C�Ѷ}�����`��O�G%.2f\n",total);
	printf("taxi=%.2f\n",taxi);

	printf("��H�@���i�٤U:%.1f��\n", total - (taxi / 2));
	printf("�T�H�@���i�٤U:%.1f��\n", total - (taxi / 3));
	printf("�|�H�@���i�٤U:%.1f��\n", total - (taxi / 4));

	system("pause");
	return 0;
}