#include<stdio.h>
int main()
	{
		int a[10],n,no,i;
		printf("Enter the limit of the array");
		scanf("%d",&n);
		printf("Enter the array:");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("Enter the no to be searched:");
		scanf("%d",&no);
		for(i=0;i<n;i++)
		{
			if(a[i]==no)
			{
				printf("Element is found at %d position (index %d)",i+1,i);
				return 0;
				
			}
			
				
		}
		printf("element is not found");
		return 0;
	}

		
