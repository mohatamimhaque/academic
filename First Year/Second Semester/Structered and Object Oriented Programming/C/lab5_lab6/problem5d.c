#include<stdio.h>//2204044
#include<string.h>//2204044
void reverse(char *str,char *rev){
    int i,size=0,j=0;//2204044
    while(str[size]!='\0'){
        size++;//2204044
    }
    for(i=size-1;i>=0;i--){
        rev[j++]=str[i];//2204044
    }
    rev[j]='\0';//2204044
}
int main(){
   char str[80],rev[80];//2204044
   printf("Enter a string :");//2204044
   gets(str);//2204044
   reverse(str,rev);//2204044
   printf("Reverse string :%s",rev);//2204044
    return 0;//2204044
}