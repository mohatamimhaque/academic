#include<stdio.h>
int isPrime(int n);//2204044
int reverse(int n);//2204044
int main(){
    int n,rev;//2204044
    while(1){
        scanf("%d",&n);//2204044
        if(n==0)
            break;//2204044
        else if(n==1)
            printf("%d is not prime",n);//2204044
        else if(n>1)
            if(isPrime(n))
                if(isPrime(reverse(n)))
                    printf("%d is an emirp",n);//2204044
                else
                    printf("%d is a prime",n);//2204044
            else
                printf("%d is not prime",n);//2204044
            
    printf("\n");//2204044
    }
    return 0;//2204044
}
int isPrime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
            return 0;//2204044
    }
    return 1;//2204044
}
int reverse(int n){
    int temp=0;//2204044
    while(n>0){
        temp=temp*10+n%10;//2204044
        n/=10;//2204044
    }
    return temp;//2204044
}
