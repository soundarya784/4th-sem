#include<stdio.h>
#include<conio.h>
void enqueue(int);
//int dequeue();
int check_visited(int visited[],int n);
int queue[20],src;
int front=-1;
int rear=-1;
void main()
{
     int mat[20][20];
    int visited[20];
    int indegree[20];
    int src;
    int n,i,j,val;
   // clrscr();
    printf("enter number of vertices in the graph4\n");
    scanf("%d",&n);
    printf("enter values in the adjacency matrix\n");
    for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
	    scanf("%d",&mat[i][j]);
	}

    for(i=0;i<n;i++){
	  visited[i]=0;
      indegree[i]=0;
     }

      for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
	    {
	        indegree[i]+=mat[j][i];
	    }


 while (1)
     {
	 val=check_visited(visited,n);
	 if(val==0)//if there are nodes yet to be visited
	 {
        for(i=0;i<n;i++)
            if((indegree[i]==0)&&(visited[i]==0))
            {
                enqueue(i);
                visited[i]=1;
            }
        ++front;
        src=queue[front];
	     for(i=0;i<n;i++)
	     {
		    if((mat[src][i]==1)&&(visited[i]==0))
		     {
		           
		        // visited[i]=1;
                 indegree[i]--;

		     }
	     }

	 }
	else
    exit(0);
    
     }
}
void enqueue(int i)
{
    if(rear==-1)
    {
        rear=0;
       queue[rear]=i;
       printf("%d\n",queue[rear]);

    }
    
    else
    {
	 ++rear;
	
    queue[rear]=i;
	printf("%d\n",queue[rear]);
    }

}
int check_visited(int visited[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
	if(visited[i]==0)
	    return 0;


    }
    return 1;
}

