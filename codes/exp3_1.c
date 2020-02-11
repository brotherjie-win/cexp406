#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	double arr[1001];
	arr[0] = 2 / 1;
	for (int i = 1; i < 1000; i++)
	{
		if (i % 2 != 0)
		{
			arr[i] = -(1+(1/arr[i-1])) ;
		}
		else
		{
			arr[i]= (1 + (1 / fabs(arr[i - 1])));
		}
	}
	double res0 = arr[0];
	for (int j = 1; j < 1000; j++)
	{
		res0 = res0 + arr[j];
	}
	printf("½á¹ûÊÇ£º%lf\n", res0);
	system("pause");
	return 0;
}