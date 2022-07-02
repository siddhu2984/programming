#include<stdio.h>
#include<string.h>

int main(){
    char str[10];
    scanf("%s",&str);
    char str2[10];
    int num=0;
    for(int i=strlen(str)-1;i>-1;i--){
        printf("%c",str[i]);
        num++;
    }
}