#include<stdio.h>
#include<conio.h>
void dfs(int src);
int mat[20][20];
 int visited[20];
 int src,n;
void main()
{
    //int mat[20][20];
    //int visited[20];

    int i,j;
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
    dfs(src);
}
void dfs(int src)
{
    int i;
     visited[src]=1;
     printf("%d",src);
            
    for(i=0;i<n;i++)
    {
     if((mat[src][i]==1)&&(visited[i]==0))
		 {
		      dfs(i);
		    

		 }
    }
    


}
