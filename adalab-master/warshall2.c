#include<stdio.h>
#include<math.h>
int isPerfectSquare(int x) 
{ 
    int s = sqrt(x); 
    if(s*s == x)
    return 1;
    else
    return 0; 
} 
int isFibonacci(int n) 
{ 
    if((isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n - 4))==1)
    return 1;
    else
    return 0; 
} 
void dist(int arr[10],int n)
{
    int i,fib,jump=0,pos=0;
    for(i=n-2;i>pos;i--)
    {
        if(arr[i]==1)
        {
            if(isFibonacci((i-pos))==1)
            {
            jump++;
             printf("%d ->",i+1);
            pos=i;
            i=n-2;
            }
        }
    }
    jump=jump+1;
    printf("%d",n);
    printf("\nNO. of jumps= %d",jump);
}
void main()
{
    int a[20],n,i;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter binary array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array:\n");
     for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
    dist(a,n);

}
