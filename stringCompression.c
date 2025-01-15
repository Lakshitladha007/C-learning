#include <stdio.h>
#include<string.h>

int main() {
    char str[1001];
    printf("Enter the input string1:\n");
    fgets(str, 1001, stdin);
    str[strcspn(str, "\n")]='\0';
    char ans[1001];
    int index=0;
    int start=0;
    int len=strlen(str);
    while(index+1<len && str[index]!='\0'){
        char ch=str[index];
        int count=1;
        while(ch==str[index+1]){
            count++;
            index++;
        }
        ans[start]=ch;
        start++;
        if(count<=9){
            char temp=count+'0';
            ans[start]=temp;
            start++;
        }else{
            char temp[10];
            int it=0;
            while(count>0){
                temp[it++]=(count%10 + '0');
                count=count/10;
            }
            it--;
            while(it>=0){
                ans[start++]=temp[it--];
            }
        }
        count=1;
        index++;
    }
    ans[start]='\0';
    printf("%s", ans);
    return 0;
}
