#include<stdio.h>//2204044
int main(){
    int a=0,b=1,c,i,n;//2204044
    printf("Enter your terms :");//2204044
    scanf("%d",&n);//2204044
    printf("Fibonacci series up to %d terms:",n);//2204044
    i=1;
    while(i<=n){
        printf("%d,",a);//2204044
        b=a+b;//2204044
        a=b-a;//2204044
        i++;//2204044
    }
return 0;}

