#include<stdio.h>
int main()
{
	int arr[10],num,i,j;

	printf("enter a decimal number:\n");
	scanf("%d",&num);

	for(i=0;num>0;i++)
	{
		arr[i]=num%2;
		num=num/2;
	}
	printf("binary number of a given number:\n");
	for(j=10;j>=0;j--);
	{
		printf("%d",arr[j]);
	}
	return 0;
}

