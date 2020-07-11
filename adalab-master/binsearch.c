#include<stdio.h>
int bisearch(int a[],int size,int key);
void main()
{
	int a[],i,size;
	int val;
	printf("enter array size");
	printf("enter sorted array elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	val=binsearh(a,size,key);
	printf("element was found in %d position",val+1);
	
}
int binsearch(int a[],int size,int key)
{
	int first=0;
	int last=size;
	int mid=(0+last)/2;
	while(mid!=-1)
	{
		if (a[mid]==key)
		{
			printf("0");
			return mid;
		}
		else if
		{
			if(key<a[mid])
			{
				last=mid-1;
				mid=(first+last)/2;
			}
			else
			{
				first=mid+1;
				mid=(first+last)/2;
			}
		}
		else
		{
			printf("-1");
		}
	}
}
			
		
	
