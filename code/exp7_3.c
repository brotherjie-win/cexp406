#include<stdio.h>
#include<stdlib.h>
void delete(char* arr)
{
	char* ftemp = arr;
	char* rtemp = arr;
	while(*ftemp)
	{
		if(*ftemp!=' ')
		{
			*rtemp = *ftemp;
			rtemp++;
		}
		ftemp++;
	}
	*rtemp = '\0';
}
int main()
{
	int i = 0;
	int count = 0;
	char arr[180];
	fgets(arr,180,stdin);
	delete(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}