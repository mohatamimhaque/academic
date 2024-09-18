#include<stdio.h>//2204044
int main(){
    int a,b,i,j,is,mid;//2204044
    printf("Enter your prime number range(a,b):");//2204044
    scanf("%d,%d",&a,&b);//2204044
    printf("All prime number between %d to %d :",a,b);//2204044
    for(i=a;i<=b;i++){
        is=0;//2204044
        mid=i/2;//2204044
        j=2;//2204044
        while(j<=mid){
            if(i%j==0){
                is=1;//2204044
                break;//2204044
            }
            j++;//2204044
        }
        if(is==0){
            printf("%d\t",i);//2204044
        }
    }
return 0;//2204044}
