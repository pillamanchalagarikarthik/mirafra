#include<stdio.h>
int mystrlen(char s[]);
int main()
{
	int d;
	char s[50];
	printf("enter a string\n");
	scanf("%[^\n]s",s);
	//d=mystrlen(s);
	printf("length of the given string:%d\n",mystrlen(s));
	return 0;
}
int mystrlen(char s[])
{
	int i,length=0;
	for(i=0;s[i]!=0;i++)
	{
		length++;
	}
	return i;
}

