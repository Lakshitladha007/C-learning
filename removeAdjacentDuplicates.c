#include <stdio.h>
#include<string.h>
 
int main() {
    char str[1001];
    printf("Enter the input string1:\n");
    fgets(str, 1001, stdin);
    str[strcspn(str, "\n")]='\0';
    char ans[1001];
    int index=0;
    int top=-1;
    while(str[index]!='\0'){
        if(top==-1){
            ans[++top]=str[index];
            index++;
        }else{
            if(ans[top]==str[index]){
                top--;
                index++;
            }else{
                ans[++top]=str[index++];
            }
        }
    }
    if(top==-1){
        printf("The output string is empty\n");
    }else{
        for(int i=0; i<=top; i++){
           printf("%c", ans[i]);
        }
    }
 
    return 0;
}
