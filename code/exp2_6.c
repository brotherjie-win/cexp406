#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	double a, b, c;		
	printf("�����������ε����߳���֧��С������\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	double j1 = fabs(a + b - c);
	double j2 = fabs(a + c - b);
	double j3 = fabs(b + c - a);
	double k1 = fabs(a * a + b * b - c * c);
	double k2 = fabs(a * a + c * c - b * b);
	double k3 = fabs(b * b + c * c - a * a);
	double a1 = fabs(a - b);
	double a2 = fabs(a - c);
	double a3 = fabs(b - c);
	double f1 = fabs(a*a - b * b);
	double f2 = fabs(a*a - c * c);
	double f3 = fabs(b*b - c * c);


	if ((j1 < 1e-4) || (j2 < 1e-4) || (j3 < 1e-4))
	{
		printf("���ܹ��������Σ�\n");
	}

	else if ((k1 < 1e-4) || (k2 < 1e-4) || (k3 < 1e-4))
	{
		
		if ((f1 < 1e-4) || (f2 < 1e-4) || (f3 < 1e-4))
		{
			printf("����ֱ�������Σ�\n");
		}
		else
		{
			printf("ֱ�������Σ�\n");
		}
	}
	else if ((a1 < 1e-4) || (a2 < 1e-4) || (a3 < 1e-4))
	{
		if ((a1 < 1e-4) && (a2 < 1e-4) && (a3 < 1e-4))
		{
			printf("�ȱ������Σ�\n");
		}
		else 
		{
			printf("���������Σ�\n");
		}
		
	}

	else
	{
		printf("һ�������Σ�\n");
	}
	system("pause");
	return 0;
}