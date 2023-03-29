#include<stdio.h>
int mystrcmp(char s1[],char s2[]);
int main()
{
	int n;
	char s1[50],s2[50];
	printf("enter the first string\n");
	scanf("%[^\n]s",s1);
	printf("enter the second string\n");
	scanf(" %[^\n]s",s2);
	n=mystrcmp(s1,s2);
	if(n==0)
	{
		printf("both are equal\n");
	}
	else if(n>=1)
	{
		printf("s1 is bigger\n");
	}
	else if(n<0)
	{
		printf("s2 is bigger\n");
		return 0;
	}
}
int mystrcmp(char s1[],char s2[])
{
	int i;
	for(i=0;s1[i]!=0&&s2[i]!=0;i++)
	{
		if(s1[i]>s2[i])
			return 1;
		else if(s1[i]<s2[i])
			return -1;
	}
}

