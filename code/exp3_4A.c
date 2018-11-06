#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int IsPrime(int a)
{
	int i;
	for (i = 2; i < a; i++)
		if (a%i == 0)
		{
			return 0;
		}

	return 1;
}
void PrintPrimes(int a, int b)
{
	int l = 1;
	for (; a <= b; a++)
	{
		if (IsPrime(a))
		{
			printf("%d  ", a);
			if (l % 5 == 0)
			{
				printf("\n");
			}
			l++;
		}
	}
}
int main()
{
	int a, b;
	while (printf("请输入要打印的范围："))
	{
		scanf("%d%d", &a, &b);
		if ((a >= 10) && (a <= b) && (b <= 1000))
		{
			system("cls");
			printf("找到如下质数：\n");
			PrintPrimes(a, b);
			break;
		}
		else
		{
			printf("输入错误，请按任意键重新输入！\n");
			setbuf(stdin, NULL);
			system("pause");
			system("cls");
			continue;
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
