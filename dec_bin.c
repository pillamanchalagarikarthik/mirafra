#include<stdio.h>
int dec_bin(int num);
int main()
{
int num;
printf("enter a decimal number\n");
scanf("%d",&num); 
dec_bin(num);
return 0;
}
int dec_bin(int num)
{
int bin_num[32];
int i=0;
while(num>0)
{
bin_num[i]=num%2;
num=num/2;
i++;
}
int j=0;
for(j=i-1;j>=0;j--)
{
printf("binary number:%d\n",bin_num[j]);
}
}

