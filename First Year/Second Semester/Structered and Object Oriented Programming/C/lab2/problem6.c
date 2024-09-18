#include<stdio.h>//2204044
int main(){
    int num1,num2,num3,min,gcd,lcm,i;//2204044
    printf("Enter 3 numbers (a,b,c) :");//2204044
    scanf("%d,%d,%d",&num1,&num2,&num3);//2204044
    min=num1<num2&&num1<num3?num1:num2<num3?num2:num3;//2204044
    for(i=min;i>0;i--){
        if(num1%i==0&&num2%i==0&&num3%i==0){
            gcd=i;//2204044
            break;//2204044
        }
    }
    i=1;
    while(1){
        lcm=min*i;//2204044
        if(lcm%num1==0&&lcm%num2==0&&lcm%num3==0){
            break;//2204044
        }
        i++;//2204044
    }
    printf("GCD :%d and LCM :%d",gcd,lcm);//2204044
    return 0;//2204044
}
