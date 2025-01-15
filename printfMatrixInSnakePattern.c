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
        printf("\n");
    }
    
    for(int i=0; i<m; i++){
         
        if(i%2==0){
           for(int j=0; j<n; j++){
              printf("%d ", arr[i][j]);
           } 
        }else{
            for(int j=n-1; j>=0; j--){
              printf("%d ", arr[i][j]);
            }
        }
        printf("\n"); 
    }
    
    return 0;
}
