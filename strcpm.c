#include<stdio.h>
#include<string.h>

int main(){
    char str1[50],str2[50];
    scanf("%s %s",&str1,&str2);
    int i = strcmp(str1,str2);
    if(i==0){
        printf("strings are same");
    }
    else{
        printf("strings are different");
    }
}