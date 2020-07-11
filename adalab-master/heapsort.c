#include <iostream> 
 
void heapify(int arr[], int n, int i) 
{ 
    int largest = i; 
    int l = 2*i + 1; // left = 2*i + 1 
    int r = 2*i + 2; // right = 2*i + 2 
  
    // If left child is larger than root 
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
    // If right child is larger than largest so far 
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 

    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
  
    
        heapify(arr, n, largest); 
    } 
} 
  

void heapSort(int arr[], int n) 
{ 
   
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  
    
    for (int i=n-1; i>0; i--) 
    { 
        // Move current root to end 
        swap(arr[0], arr[i]); 
  
        // call max heapify on the reduced heap 
        heapify(arr, i, 0); 
    } 
} 
  

void printArray(int arr[], int n) 
{ 
    for (int i=0; i<n; ++i) 
      printf("%d",arr[i]);
    printf("\n");
} 
  

int main() 
{ 
    int arr[] = {12, 11, 13, 5, 6, 7}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    clock_t start, end;
     double cpu_time_used;
     
     start = clock();
    heapSort(arr, n); 
    end=clock();
  printf("sorted array is:"); 
    printArray(arr, n); 
     cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    		 printf("heapify() took %f seconds to execute \n", cpu_time_used); 
} 
