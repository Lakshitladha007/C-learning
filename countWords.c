#include<stdio.h>
#include<string.h>
 
int main() {
    printf("Enter the input string:\n");
    char str[1001];
    fgets(str, 1001, stdin);
    str[strcspn(str, "\n")]='\0';
    int count=0;
    int start=0;
    int end=strlen(str)-1;
    int flag=0;
    while(start<=end){
        if(str[start]==' ' || str[start+1]=='\0'){
            if(flag){
              count++;
              flag=0;
            }
        }else{
            flag=1;
        }
        start++;
    }
    printf("The count is %d\n", count);
    return 0;
}
