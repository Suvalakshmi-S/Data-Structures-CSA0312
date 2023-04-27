#include<stdio.h>

int main()
{
	int i,n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Even Numbers:");
	for (i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
		printf("%d ",arr[i]);
	}
	}
	printf("\n");
	printf("Odd numbers:");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			printf("%d ",arr[i]);
		}
	}
	return 0;
}
	
