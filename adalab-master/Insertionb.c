#include<stdio.h>
void maxMeetings(int s[], int f[], int n) 
{ 
    int i, j,count=1; 
  
    printf ("Following meetings are selected "); 
    i = 0; 
    printf("(%d,%d)  ",s[i],f[i] );; 
  	for (j = 1; j < n; j++) 
    { 
      
      if (s[j] >= f[i]) 
      { 
          printf ("(%d,%d)  ",s[j],f[j]); 
          i = j; 
          count++;
      } 
    }
    printf("\nMaximum number of meetings: %d\n",count); 
} 
void insertion(int f[],int s[],int n)
{
	int i,item,item1,j;
	for(i=1;i<n;i++)
	{
		item=f[i];
		item1=s[i];
		j=i-1;
		while(j>=0&&f[j]>item)
		{
			f[j+1]=f[j];
			s[j+1]=s[j];
			j=j-1;
		}
		f[j+1]=item;
		s[j+1]=item1;
	}
	maxMeetings(s,f,n);
}
void main()
{
	int start[10],finish[10],i,n,min1,d[10],pos;
	printf("Enter the number of meetings\n");
	scanf("%d",&n);
	printf("Enter start and finish time for each meetings respectively\n");
	for(i=0;i<n;i++)
	{
		printf("start time for meeting:%d ",(i+1));
		scanf("%d",&start[i]);
		printf("finish time for meeting:%d ",(i+1));
		scanf("%d",&finish[i]);
	}
	insertion(finish,start,n);
	
}
