#include<stdio.h>
int mystrncmp(char s1[],char s2[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(s1[i]<s2[i])
			return 1;
		if(s1[i]>s2[i])
			return -1;
	}
	return 0;
}
int main()
{
	int n,d;
	char s1[20],s2[20];
	printf("enter string for compare\n");
	scanf("%15[^\n]s",s1);
	printf("enter another string for compare\n");
	scanf(" %15[^\n]s",s2);
	printf("enter the number to compare upto that number\n");
	scanf(" %d",&n);
	d=mystrncmp(s1,s2,n);
	if(d==0)
		printf("both are equal\n");
	else if(d>0)
		printf("s1 is smaller\n");
	else if(d<0)
		printf("s1 is bigger\n");
	return 0;
}

