#include<stdio.h>//2204044
int main(){
    int a,b,i,j,mid,is;//2204044
    printf("Enter prime number range(a,b) :");//2204044
    scanf("%d,%d",&a,&b);//2204044
    printf("All prime numbers from %d to %d :",a,b);//2204044
    i=a;
    while(i<=b){
        is=0;//2204044
        mid=i/2;//2204044
        for(j=2;j<=mid;j++){
            if(i%j==0){
                is=1;//2204044
                break;//2204044
            }
        }
        if(is==0){
            printf("%d,",i);//2204044
        }
        i++;
    }
return 0;}

