#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int isPrime(int a)
{

	for (int k = 2; k <= (int)sqrt(a); k++)
	{
		if (a%k == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	printf("������һ��������\n");
	int a;
	scanf("%d", &a);
	if (a <= 0)
	{
		printf("�������\n");
		system("pause");
		exit(0);
	}
	if (a = 1)
	{
		printf("����������Ȳ�������Ҳ���Ǻ�����\n");
		system("pause");
		exit(0);
	}
	int r = isPrime(a);
	if (r == 0)
	{
		printf("�������������������\n");
	}
	else if (r == 1)
	{
		printf("�����������������\n");
	}
	system("pause");
	return 0;
}