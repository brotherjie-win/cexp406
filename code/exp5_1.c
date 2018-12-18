#include<stdio.h>
#include<stdlib.h>
int average(int* array);
int max_num(int* array);
int min_num(int* array);
int search(int searchnum,int *array);
void sort(int* array);
int main()
{
	int array[10],ave,maxnum,minnum,no,choose,t,searchnum;
	for(int i=0;i<10;i++)
	{
		printf("请输入第%d个数字：",i+1);
		scanf("%d", array + i);
	}
	system("cls");
	printf("请选择功能(1)平均数(2)最大值最小值(3)元素查找(4)排序：");
	t=scanf("%d", &choose);
	if(t<1||choose<1||choose>4)
	{
		printf("输入错误！\n");
		system("pause");
		exit(0);
	}
	else if(choose==1)
	{
		ave = average(array);
		printf("平均数为：%d\n", ave);
	}
	else if(choose==2)
	{
			maxnum = max_num(array);
			minnum = min_num(array);
			printf("最大值为：%d\n", maxnum);
			printf("最小值为：%d\n", minnum);
	}
	else if(choose==3)
	{
		printf("请输入要查找的元素：");
		scanf("%d", &searchnum);
		no = search(searchnum,array);
		if (no == 0)printf("该元素不存在！\n");
		else printf("该元素出现的下标为：%d\n", no);
	}
	else if(choose==4)
	{
		sort(array);
		printf("排序结果为：");
		for(int o=0;o<10;o++)
		{
			printf("%4d", *(array + o));
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

int average(int * array)
{
	int sum = 0;
	for(int j=0;j<10;j++)
	{
		sum += *(array+j);
	}
	return (sum / 10);
}

int max_num(int * array)
{
	int max=*array;
	for(int k=0;k<10;k++)
	{
		if (*(array + k) >= max)max = *(array + k);
	}
	return max;
}
int min_num(int * array)
{
	int min = *array;
	for (int k = 0; k < 10; k++)
	{
		if (*(array + k) <= min)min = *(array + k);
	}
	return min;
}

int search(int searchnum,int* array)
{
	for(int l=0;l<10;l++)
	{
		if (*(array + l) == searchnum)return l;
	}
	return 0;
}

void sort(int * array)
{
	int temp;
	for(int m=0;m<9;m++)
	{
		for(int n=0;n<9-m;n++)
		{
			if(*(array+n)>*(array+n+1))
			{
				temp = *(array + n + 1);
				*(array + n + 1) = *(array + n);
				*(array + n) = temp;
			}
		}
	}
	return;
}
