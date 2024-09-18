#include<stdio.h>//2204044
int fact(int n);//2204044
int main(){
    int num;//2204044
    printf("Enter an Integer :");//2204044
    scanf("%d",&num);//2204044
    printf("Factorial :%d",fact(num));//2204044
    return 0;//2204044
}
int fact(int n){
    if(n>0){
        return n*fact(n-1);//2204044
    }
    return 1;//2204044
}
