#include<stdio.h>//2204044
int main(){
    int i,n,sum=0;//2204044
    printf("Enter Last Number :");//2204044
    scanf("%d",&n);//2204044
    for(i=1;i<=n;i++){
        sum+=(i*(i+1))/2;//2204044
    }
    printf("Sum :%d",sum);//2204044
return 0;
}
