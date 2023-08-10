#include<stdio.h>
int main()
{
	int m,s,a[20],n=0,temp,i,j;
	printf("enter the no of elements:");
	scanf("%d",&s);
	printf("enter the targeted element :");
	scanf("%d",&m);
	printf("enter the array elements :");
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
		printf("target found at position a[%d]",i);
		break;
	}
	else
	continue;
}
if(n=1)
printf("\nsuccessful.");
else printf("target not found.");
}
