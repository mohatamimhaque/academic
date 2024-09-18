#include<stdio.h>//2204044
#include<string.h>//2204044
int check_palindrome(char *str){
    int size=0,is=1;//2204044
    for(int i=0;str[i]!='\0';i++){
        size++;//2204044
    }
    char newStr[size+1];//2204044
    int j=0;//2204044
    for(int i=size-1;i>=0;i--){
        newStr[j++]=str[i];//2204044
    }
    newStr[j]='\0';//2204044
    for(int i=0;str[i]!='\0';i++){
        if(str[i] != newStr[i]){
            return 0;//2204044
        }
    }
    return 1;//2204044
}
int main(){
    char str[80];//2204044
    printf("Enter String :");//2204044
    gets(str);//2204044
    if(check_palindrome(str)){
        printf("Word is palindrome");//2204044
    }else{
        printf("Word is not palindrome");//2204044
    }
    return 0;//2204044
}
