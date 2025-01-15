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
    
    int target;
    printf("Enter the target element\n");
    scanf("%d",&target);
    
    int start=0, end=m-1;
    int mid=start+(end-start)/2;
    
    while(start<=end){
        if(arr[mid][0]>target){ // search in above rows
            end=mid-1;
        }else if(target>arr[mid][n-1]){ // search in bottom rows
            start=mid+1;
        }else{  // target element exist in this row
            int colS=0, colE=n-1;
            int colM= colS+(colE-colS)/2;
            while(colS<=colE){
                if(arr[mid][colM]==target){
                   printf("Element found at %dth row and %dth column\n", mid, colM); 
                   return 0;
                }else if(arr[mid][colM]>target){
                    colE=colM-1;
                }else{
                    colS=colM+1;
                }
                colM= colS+(colE-colS)/2;
            }
        }
        mid=start+(end-start)/2;
    }
  
  printf("element not found\n");
  return 0;
}
