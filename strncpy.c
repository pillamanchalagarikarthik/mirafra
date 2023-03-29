#include<stdio.h>
void mystrncpy(char s[],char d[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		d[i]=s[i];
	}
}
int main()
{
	char s[100],d[100];
	int n;
	printf("enter the string for source\n");
	scanf("%20[^\n]s",s);
	printf("enter the string for destination\n");
	scanf(" %20[^\n]s",d);
	printf("enter the number to copy upto that number\n");
	scanf("%d",&n);
	mystrncpy(s,d,n);
	printf("after copying %d character destination is\n",n);
	printf("%s\n",d);
	return 0;
}

