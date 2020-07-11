#include<stdio.h>
int min(int n1,int n2)
{
    if(n1>n2)
    return n2;
    else 
    return n1;
}
void floyd(int a[10][10],int n)
{
    int i,j,k,d[10][10];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            d[i][j]=a[i][j];
        }
    }
    for(k=1;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                d[i][j]=min(d[i][j],(d[i][k]+d[k][j]));
            }
        }
    }
    printf("Resultant matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d  ",d[i][j]);
        printf("\n");
    }
}

void main()
{
    int a[10][10],n,i,j;
    printf("Enter number of nodes\n");
    scanf("%d",&n);
    printf("Enter adjacency matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("adjacency matrix is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d  ",a[i][j]);
        printf("\n");
    }
    floyd(a,n);
}
