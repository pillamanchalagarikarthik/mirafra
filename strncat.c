#include<stdio.h>
void mystrncat(char s[],char d[],int n)
{
	int i,c,j;
	for(i=0;d[i]!=0;i++);
	c=i;
	for(i=0,j=c;i<n;i++,j++)
	{
		d[j]=s[i];
	}
	d[j]=0;
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
	mystrncat(s,d,n);
	printf("after copying %d character destination is\n",n);
	printf("%s\n",d);
	return 0;
}

