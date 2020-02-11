#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	printf("请输入一个正整数\n");
	int a;
	scanf("%d", &a);
	system("cls");
	if (a<0)
	{
		printf("输入错误！a不能为负数！\n");
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
	printf("结果是：%lf\n", res0);
	system("pause");
	return 0;
}