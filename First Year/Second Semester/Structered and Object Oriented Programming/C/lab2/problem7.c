#include<stdio.h>//2204044
int main(){
    int i,j=1,n,sum_for=0,sum_while=0;//2204044
    printf("Enter your terms :");//2204044
    scanf("%d",&n);//2204044
    for(i=1;i<=n;i++){
        sum_for+=(i+1)*(i+2);//2204044
    }
    while(j<=n){
        sum_while+=(j+1)*(j+2);//2204044
        j++;
    }
    printf("Sum using 'while' loop: %d\n", sum_while);//2204044
    printf("Sum using 'for' loop: %d\n", sum_for);//2204044
    if (sum_while == sum_for) {
        printf("Results match!\n");//2204044
    }else {
        printf("Results do not match.\n");//2204044
    }
return 0;//2204044}
