#include<stdio.h>
void bubble(int a[],int size,int k);
void main()
{
	int a[10];
	int i,size,ch,k;
	printf("enter size of the array\n");
	scanf("%d",&size);
	printf("enter array elements\n");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	printf("enter the value of k,for k largest elements to be displayed\n");
	scanf("%d",&k);
	bubble(a,size,k);
}
void bubble(int a[],int size,int k)
{
	int i,j,temp,n;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	printf("%d elements are:",k);
	for(i=size-1;i>((size-1)-k);i--)
		printf("%d\n",a[i]);
		return;
}

