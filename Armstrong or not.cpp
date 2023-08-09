#include<stdio.h>
int main()
{
	int n,temp,r,sum=0,count=0;
	printf("enter the number::");
	count++;
	scanf("%d",&n);
	count++;
	temp=n;
	count++;
	while(n!=0)
	{
		count++;
		r=n%10;
		count++;
		sum=sum+(r*r*r);
		count++;
		n=n/10;
		count++;
	}
	count++;
	if(temp==sum)
	{
		printf("The given number is Armstrong number.");
		count++;
	}
	else
	{
		printf("The given number is Not Armstrong number.");
		count++;
	}
	count++;
	printf("\nThe time complexicity is %d.",count);
}
