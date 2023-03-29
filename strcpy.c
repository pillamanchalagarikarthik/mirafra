#include<stdio.h>
void stringcopy(char str[],char name[]);
int main()
{
char name[100],str[10];
printf("enter the string\n");
scanf("%33[^\n]s",name);
stringcopy(str,name);
printf("the string in the str is %s",str);
return 0;
}
void stringcopy(char str[],char name[])
{
int i;
for(i=0;name[i]!=0;i++)
{
str[i]=name[i];
}
str[i]=name[i];
}

