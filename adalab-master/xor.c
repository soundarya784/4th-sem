#include <stdio.h> 

  
// Function to find the n x n matrix 
// that satisfies the given condition 
void findGrid(int n) 
{ 
    int arr[n][n]; 
  
    // Initialize x to 0 
    int x = 0; 

    for (int i = 0; i < n / 4; i++) { 
        for (int j = 0; j < n / 4; j++) { 
            for (int k = 0; k < 4; k++) { 
                for (int l = 0; l < 4; l++) { 
                    arr[i * 4 + k][j * 4 + l] = x; 
                    x++; 
                } 
            } 
        } 
    } 
  
    // Print the generated matrix 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
            printf("%d", arr[i][j]); 
        } 
        printf("\n"); 
    } 
} 
  

int main() 
{ 
    int n = 4; 
  
    findGrid(n); 
  
    return 0; 
} 
