#include<stdio.h>
int power(int base,int p);//2204044
int sum(int a,int r,int n);//2204044
int main(){
    int a,r,n;//2204044
    printf("First Term(a) :");//2204044
    scanf("%d",&a);//2204044
    printf("Common ratio(r) :");//2204044
    scanf("%d",&r);//2204044
    printf("Terms(n):");//2204044
    scanf("%d",&n);//2204044
    printf("%d",sum(a,r,n-1));//2204044
    return 0;//2204044
}
int power(int base,int p){
    if(p>0){
        return base*power(base,p-1);//2204044
    }
    return 1;//2204044
}
int sum(int a,int r,int n){
    if(n>0){
       return a*power(r,n)+sum(a,r,n-1);//2204044
    }
    return a;//2204044
}