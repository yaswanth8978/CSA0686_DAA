#include<stdio.h>
int main()
{
	int m,n=0,s,a[20],temp,i,j;
	printf("enter the noof elements");
	scanf("%d",&s);
	printf("enter the target elements:");
	scanf("%d",&m);
	printf("enter the array elements:");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<s;i++)
	{
		if(a[i]==m)
		{
			n=1;
			printf("Target found at position a[%d]",i);
			break;
		}
		else continue;
	}
	if(n==1)
		printf("\n successful.");
	else
		printf("Target not found.");
}
