#include<stdio.h>
int decToBin(int n);//2204044//2204044
int main(){
    int num;//2204044
    printf("Enter an Integer :");//2204044//2204044
    scanf("%d",&num);//2204044//2204044
    printf("Correspondent binary number :%d",decToBin(num));//2204044//2204044
    return 0;//2204044
}
int decToBin(int n){
    if(n>1){
        return decToBin(n/2)*10+n%2;//2204044
    }
}
