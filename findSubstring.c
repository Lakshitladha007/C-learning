#include <stdio.h>
#include<string.h>
 
int main() {
    printf("Enter the input string:\n");
    char str[1001];
    fgets(str, 1001, stdin);
    str[strcspn(str, "\n")]='0';
    printf("Enter the substring:\n");
    char substr[1001];
    fgets(substr, 1001, stdin);
    substr[strcspn(substr, "\n")]='0';
    char *index=strstr(str, substr);
    if(index==NULL){
        printf("%d", -1);
        return -1;
    }else{
        printf("%d", (index-str));
        return (index-str);
    }
    return 0;
}
