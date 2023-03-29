#include<stdio.h>
char* mystrcat(char s1[],char s2[]);
int main()
{
//	char c;
	char s1[50]="karthik";
	char s2[50]="reddy";
//	printf("enter a first string\n");
//	scanf("%s",s1);
//	printf("enter a second string\n");
//	scanf("%s",s2);
	//	c=mystrcat(s1,s2);
	printf("after converting s1 into s2:%s\n",mystrcat(s1,s2));
}
char* mystrcat(char s1[],char s2[])
{
	int i,len=0;
	for(i=0;s2[i]!=0;i++);
	{
		len++;
	}
	for(i=0;s1[i]!=0;i++){
		s1[len+i]=s2[i];
	}
	s1[len+i]=0;
	return s1;
}

