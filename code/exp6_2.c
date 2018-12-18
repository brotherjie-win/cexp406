#include<stdio.h>
#include<stdlib.h>
void swap1(int, int);
void swap2(int *, int);
void swap3(int *, int *);
void swap4(int *, int *);
int main()
{
	int x = 3, y = 9;
	swap4(&x,&y);;
	printf("x=%d,y=%d\n",x,y);
	system("pause");
	return 0;
}
void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
void swap2(int *a, int b)
{
	int temp = *a;
	*a = b;
	b = temp;
}
void swap3(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swap4(int *a, int *b)
{
	int *temp = a;
	a = b;
	b = temp;
}
