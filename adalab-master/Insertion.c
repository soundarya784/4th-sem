#include<stdio.h>
#include<time.h>
void main()
{
int arr[10000];
int m,i,j,key;
double time_spent = 0.0;
 clock_t begin = clock();
printf("enter the size of array\n");
scanf("%d",&m);
printf("enter the elements\n");

for(i=0;i<m;i++)
{
 scanf("%d",&arr[i]);
 }
 
    for (i = 1; i < m; i++) {
        key = arr[i];
        j = i - 1;
 

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
 for(i=0;i<m;i++)
 {
 printf("%d\n",arr[i]);
 }
 clock_t end = clock();
time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
printf("Time elpased is %f seconds", time_spent);
 } 
