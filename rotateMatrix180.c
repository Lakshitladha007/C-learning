#include <stdio.h>

int main() {
    int m,n;
    printf("enter number of rows:\n");
    scanf("%d", &m);
    
    printf("enter number of columns:\n");
    scanf("%d", &n);
    
    int arr[m][n];
    
    for(int i=0; i<m; i++){
        printf("Enter %d elements for %dth row\n",n, i);
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
     
    for(int i=0; i<m; i++){
        
        for(int j=0;j<n/2; j++){
            int temp=arr[i][j];
            arr[i][j]=arr[i][n-j-1];
            arr[i][n-j-1]=temp;
        }
    }
    
    for(int i=0; i<m/2; i++){
        for(int j=0;j<n; j++){
            int temp=arr[i][j];
            arr[i][j]=arr[m-i-1][j];
            arr[m-i-1][j]=temp;
        }
    }
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
  
  return 0;
}
