#include<stdio.h>
#include<string.h>

int main() {
    char str[1001];
    printf("Enter the input string1:\n");
    fgets(str, 1001, stdin);
    str[strcspn(str, "\n")]='\0';
    char input;
    printf("enter the character whose occurences are to be removed:\n");
    scanf("%c", &input);
    int start=0;
    while(str[start]!='\0'){
        if( str[start]!=input){
            start++;
        }else{
            int index=start;
            while(str[start]!='\0' && str[start]==input){
                start++;
            }
            char temp=str[start];
            str[start]=str[index];
            str[index]=temp;
            start=index+1;
        }
    }
    printf("%s", str);
    return 0;
}
