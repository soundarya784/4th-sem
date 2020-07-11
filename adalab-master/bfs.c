#include<stdio.h>
#include<conio.h>
void enqueue(int);
int dequeue();
int check_visited(int visited[],int n);
int queue[20],src;
int front=-1;
int rear=-1;

void main()
{
    int mat[20][20];
    int visited[20];

    int n,i,j,val;
   // clrscr();
    printf("enter number of vertices in the graph");
    scanf("%d",&n);
    printf("enter values in the adjacency matrix");
    for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
	    scanf("%d",&mat[i][j]);
	}

    for(i=0;i<n;i++){
	  visited[i]=0;
     }
     printf("enter source vertex");
     scanf("%d",&src);
     enqueue(src);
     visited[src]=1;
     while (1)
     {
	 val=check_visited(visited,n);
	 if(val==0)//if there are nodes yet to be visited
	 {
	     for(i=0;i<n;i++)
	     {
		 if((mat[src][i]==1)&&(visited[i]==0))
		 {
		     enqueue(i);
		     visited[i]=1;

		 }
	     }

	 }
	src=dequeue();
	if(src==-1)
	    break;

     }


}
void enqueue(int i)
{
    if(rear==-1)
    {
       front= rear=0;
       queue[rear]=i;
      // printf("%d-\n",queue[rear]);

    }
    
    else
    {
	 ++rear;
	queue[rear]=i;
	//printf("%d-",queue[rear]);
    }

}
int dequeue()
{

    printf("%d\n",queue[front]);
    front++;
    if(front>rear)
    return -1;
    return queue[front];
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
