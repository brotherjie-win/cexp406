#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int add(int a, int b)
{
	return(a + b);
}
int minus(int a, int b)
{
	return(a - b);
}
int plus(int a, int b)
{
	return(a*b);
}
int quo_i(int a, int b)
{
	return(a / b);
}
double quo_d(double a, double b)
{
	return(a/b);
}
int ave_i(int a, int b)
{
	return((a + b) / 2);
}
double ave_d(double a, double b)
{
	return((a + b) / 2);
}
int main()
{
	int a, b;
	printf("请输入两个整数a,b\n");
	scanf("%d %d", &a, &b);
	printf("整型 a+b = %d\n", add(a, b));
	printf("整型 a-b = %d\n", minus(a, b));
	printf("整型 a*b = %d\n", plus(a, b));
	printf("整型 a/b = %d\n", quo_i(a, b));
	printf("整型 a,b的平均数 = %d\n", ave_i(a, b));
	printf("双精度型 a/b = %lf\n", quo_d(a, b));
	printf("双精度型 a,b的平均数 = %lf\n", ave_d(a, b));
	system("pause");
	return 0;
}