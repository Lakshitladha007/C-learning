#include<stdio.h>
#include<string.h>
 
int isDigit(char input){
    if(input>='0' && input<='9'){
        return 1;
    }else{
        return 0;
    }
}

long long stringToInt(char str[]){
    int len=strlen(str);
    if(len==0){
        return 0;
    }else if(len==1 && (!isDigit(str[0]))){
        return 0;
    }

    int index=0;
    int sign=1;
    if(str[index]=='-'){
        sign=0;
        index++;
    }else if(str[index]=='+'){
        sign=1;
        index++;
    }
    long long nums=0;
    while(index<len){
        if(!isDigit(str[index])){
            break;
        }else{
        nums=nums*10+(str[index]-'0');
        }
        index++;
    }
    if(sign){
        return nums;
    }else{
        return -nums;
    }
}
 
int main() {
    char str1[1001];
    printf("Enter the input string1:\n");
    fgets(str1, 1001, stdin);
    str1[strcspn(str1, "\n")]='\0';
    printf("%lld",stringToInt(str1));
    return 0;
}
