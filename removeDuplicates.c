#include<stdio.h>
#include<string.h>
 
int main() {
    printf("Enter the input string:\n");
    char str[1001];
    scanf("%s", str);
    char hash[26]={0};
    for(int i=0; i<strlen(str); i++){
        int index= str[i]-'0';
        hash[index]++;
    }
    for(int i=0; i<strlen(str); i++){
        int index= str[i]-'0';
        if(hash[index]!=0){
            printf("%c", str[i]);
            hash[index]=0;
        }
    }
    return 0;
}
