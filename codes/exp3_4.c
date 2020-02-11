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
	printf("请输入一个正整数\n");
	int a;
	scanf("%d", &a);
	if (a <= 0)
	{
		printf("输入错误！\n");
		system("pause");
		exit(0);
	}
	if (a = 1)
	{
		printf("您输入的数既不是质数也不是合数！\n");
		system("pause");
		exit(0);
	}
	int r = isPrime(a);
	if (r == 0)
	{
		printf("您输入的数不是质数！\n");
	}
	else if (r == 1)
	{
		printf("您输入的数是质数！\n");
	}
	system("pause");
	return 0;
}