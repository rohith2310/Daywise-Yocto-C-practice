#include<stdio.h>
int main()
{
	int arr[10];

	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}

	//placing all zeroes at the end
	
	int temp[10],k=0;

	for(int i=0;i<10;i++)
	{
		if(arr[i]!=0)
		{
			temp[k]=arr[i];
			k++;
		}
	}

	while(k!=10)
	{
		temp[k]=0;
		k++;
	}

	for(int i=0;i<10;i++)
	{
		printf("%d ",temp[i]);
	}

	return 0;
}
