#include<stdio.h>
int tobase10(char c[],int length,int base);//2204044
int power(int base,int exponent);//2204044
int isPrime(int n);//2204044
int reverseNumber(int n);//2204044
int main(){
    int length,base;//2204044
    printf("Enter length of Array :");//2204044
    scanf("%d",&length);//2204044
    char arr[length+1];//2204044
    getc(stdin);//2204044
    printf("Enter Array Elements :");//2204044
    gets(arr);//2204044
    printf("Enter Base :");//2204044
    scanf("%d",&base);//2204044
    int base10=tobase10(arr,length,base);//2204044
    printf("Decimal value: %d\n",base10);//2204044
    if(isPrime(base10))
        if(isPrime(reverseNumber(base10)))
            printf("Status: Both prime and Emirp");//2204044
        else
            printf("Status: Prime");//2204044
    else
        printf("Status: None");//2204044
    return 0;//2204044
}
//convert character array to corresponding decimal value
int tobase10(char c[],int length,int base){
    int dec=0;//2204044
    for(int i=0;i<length;i++)
        dec+=(c[i]-48)*power(base,length-i-1);//2204044
    return dec;//2204044
};//2204044
//exponent function
int power(int base,int exponent){
    if(exponent>0) 
        return base*power(base,exponent-1);//2204044
    return 1;//2204044
}
//prime number check
int isPrime(int n){
    for(int i=2;i<n/2;i++)
        if(n%i==0) 
            return 0;//2204044
    return 1;//2204044
}
//reverse a number
int reverseNumber(int n){
    int temp=0;//2204044
    while(n>0){
        temp=temp*10+n%10;//2204044
        n/=10;//2204044
    }
    return temp;//2204044
}
