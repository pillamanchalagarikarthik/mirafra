#include<stdio.h>
#include<stdlib.h>
int myatoi(char s[]);
int main()
{
	char s[50];int i;
	printf("enter a string\n");
	scanf("%s",s);
for(i=0;s[i]!=0;i++)
printf("%d\n",s[i]);
	myatoi(s);
}
int myatoi(char s[])
{
	int i,sum=0;
		for(i=0;s[i]!=0;i++)
		{
			sum=(sum*10)+(s[i]-48);
		}
	printf("%d\n",sum);
	return sum;
}

