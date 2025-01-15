#include <stdio.h>

void reverseRow(int arr[][25], int row, int start, int end){
    while(start<=end){
        int temp=arr[row][start];
        arr[row][start]=arr[row][end];
        arr[row][end]=temp;
        start++;
        end--;
    }
}

int main() {
    int m,n;
    int arr[25][25];
    printf("enter number of rows:\n");
    scanf("%d", &m);
    
    printf("enter number of columns:\n");
    scanf("%d", &n);
    
    int k;
    printf("enter number of times row elements are to be rotated:\n");
    scanf("%d", &k);
    k=k%n;
   
    for(int i=0; i<m; i++){
        printf("Enter %d elements for %dth row\n",n, i);
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
     
     int i=0;
    while(i<m){
        reverseRow(arr, i, 0, n-1);
        reverseRow(arr, i, 0, k-1);
        reverseRow(arr, i, k, n-1);
        i++;
    }
 
    printf("Matrix after rotating %d times\n", k);
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
  
  return 0;
}
