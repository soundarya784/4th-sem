#include<stdio.h>
int countOne(int n) 
{ 
    int count = 0; 
    while (n) { 
        n = n & (n - 1); 
        count++; 
    } 
  
    if (count % 2 == 0) 
        return 1; 
    else
        return 0; 
} 
  
int sumDigits(int n) 
{ 
    int sum = 0; 
    while (n != 0) { 
        sum += n % 10; 
        n /= 10; 
    } 
  
    return sum; 
} 
  
int main() 
{ 
    int arr[10];
      int n,i,tot_sum=0;
      printf("Enter size of array\n");
      scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  
    for ( i = 0; i < n; i++) { 
        if (countOne(arr[i])) 
            tot_sum += sumDigits(arr[i]); 
    } 
  printf("TOTAL SUM: %d\n",tot_sum);
      
    return 0; 
} 
