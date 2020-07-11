#include<stdio.h>
#include<conio.h>
int dfs(int src);
void push(int i);
void pop();
int acyclic();
int mat[20][20];
 int visited[20];
 int stack[20];
 int top=-1;
 int src,n;
void main()
{
    //int mat[20][20];
    //int visited[20];

    int i,j,t;
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
    // visited[src]=1;
    // printf("%d",src);
    push(src);
    t=dfs(src);
    if(t==1)
     printf("graph is acyclic\n");

}
int dfs(int src)
{
    int i,t;
     visited[src]=1;
    

     
            
    for(i=0;i<n;i++)
    {
     if((mat[src][i]==1)&&(visited[i]==0))

		 {
		      
                push(i);
               t=acyclic();
                dfs(i);
		 }
    }
    
pop();
return t;
}
void push(int i)
{
    stack[++top]=i;
}
void pop()
{
    top--;
}
int acyclic()
{
    int i,j,top1;
    if(top==0||top==1)
    return;
    top1=stack[top];
        for(i=0;i<top;i++)
        {
            j=stack[i];
            if(mat[top1][j]==1)
            {
                printf("graph is cyclic\n");
                exit(0);
            }
        }
        return 1;
}