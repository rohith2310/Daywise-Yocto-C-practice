#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size:");
	scanf("%d",&n);
	int arr[n];

	//input array
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	//output array
	
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

	//finding checksum
	
	int v=0;

	v=arr[0];
	
	for(int i=1;i<n-1;i++)
	{
		v=v^arr[i];

	}

	if(v==arr[n-1])
	printf("1");
	else
		printf("0");

	return 0;
}
