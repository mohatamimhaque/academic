#include<stdio.h>//2204044
int swap(int *x,int *y){
    *x=*x+*y;//2204044
    *y=*x-*y;//2204044
    *x=*x-*y;//2204044
}
int main(){
    int a,b;//2204044
    printf("Enter two numbers :");//2204044
    scanf("%d %d",&a,&b);//2204044
    swap(&a,&b);//2204044
    printf("After swapping:%d,%d",a,b);//2204044
    return 0;//2204044
}
