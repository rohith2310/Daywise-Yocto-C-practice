#include<stdio.h>

void array_reverse(int *arr,int n)
{
	int k=n/2,m,l=n-1;
	for(int i=0;i<k;i++)
	{
		m=arr[i];
		arr[i]=arr[l];
		arr[l]=m;
		l--;
	}
}
int main()
{
	int n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr[n];

	//taking input for array
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	//printing the original array
	
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\n");

	array_reverse(arr,n);

	//printig reverse array
	
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

}
