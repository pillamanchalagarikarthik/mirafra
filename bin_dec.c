#include<stdio.h>
int main()
{
	int num,bin_num=0,dec_num=0,base=1,rem;
	printf("enter a binary number with 0's and 1's combination");
	scanf("%d",&num);
	bin_num=num;
	while(num>0)
	{
		rem=num%10;
		dec_num=dec_num+rem*base;
		num=num/10;
		base=base*2;
	}
	printf("binary number:%d\n",bin_num);
	printf("decimal number:%d\n",dec_num);
	return 0;
}

