#include<stdio.h>
#include<time.h>
void selection(int a[],int size);

void main()
{
	clock_t start, end;
     double cpu_time_used;
	int a[10];
	int i,size;
	printf("enter size of the array\n");
	scanf("%d",&size);
	printf("enter array elements\n");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	start = clock();
	selection(a,size);
	end = clock();
    	 cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("selection() took %f seconds to execute \n", cpu_time_used); 
    		 
    }
     

void selection(int a[],int size)
{
	int i,j,min,temp;
	for(i=0;i<size-1;i++)
	{
		min=i;
		for(j=i+1;j<size;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	printf("sorted array elements are:");
	for(i=0;i<size;i++)
		printf("%d\n",a[i]);
		return;
}

