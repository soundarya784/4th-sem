#include<stdio.h>
#include<string.h>
int min(int x, int y, int z) 
{ 
    if (x <= y && x <= z) 
            return x; 
        if (y <= x && y <= z) 
            return y; 
        else
            return z; 
 }
  
int editDist(char str1[], char str2[], int m, int n) 
{ 
    if (m == 0) 
        return n; 
  
   
    if (n == 0) 
        return m; 
  
    
    if (str1[m - 1] == str2[n - 1]) 
        return editDist(str1, str2, m - 1, n - 1); 
  
   
    return 1 + min(editDist(str1, str2, m, n - 1), 
                   editDist(str1, str2, m - 1, n), 
                   editDist(str1, str2, m - 1, n - 1) 
                   ); 
} 
void main()
{
	char str1[10];
	char str2[10];
	int i,l1,l2,edit;
	printf("enter string 1: ");
	
	scanf("%s",str1);
	//gets(str1);
	printf("enter string 2: ");
	scanf("%s",str2);
	//gets(str2);
	l1=strlen(str1);
	l2=strlen(str2);
	edit=editDist(str1,str2,l1,l2);
	printf("%d",edit);
}
