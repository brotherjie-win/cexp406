#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	printf("������һ��������\n");
	int a;
	scanf("%d", &a);
	system("cls");
	if (a<0)
	{
		printf("�������a����Ϊ������\n");
	}
	double arr[100001];
	arr[0] = 2 / 1;
	for (int i = 1; i < a; i++)
	{
		if (i % 2 != 0)
		{
			arr[i] = -(1 + (1 / fabs(arr[i - 1])));
		}
		else
		{
			arr[i] = (1 + (1 / fabs(arr[i - 1])));
		}
	}
	double res0 = arr[0];
	for (int j = 1; j < a; j++)
	{
		res0 = res0 + arr[j];
	}
	printf("����ǣ�%lf\n", res0);
	system("pause");
	return 0;
}