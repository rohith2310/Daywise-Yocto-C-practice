#include<stdio.h>
int main()
{
	int n,k;
	printf("Enter the size of array:");
	scanf("%d%d",&n,&k);
	int arr[n];

	//taking array input
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	//printing array
	
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\n");

	for(int i=0;i<n;i++)
	{
		int k=i+2;
		if(k==n)
                        break;
		printf("%d ",arr[i]+arr[i+1]+arr[k]);
	}

	return 0;

}
