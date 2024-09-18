#include<stdio.h>//2204044
int main(){
    int num,temp=0,i;//2204044
    printf("Enter an integer number :");//2204044
    scanf("%d",&num);//2204044
    i=num;
    while(i>0){
        temp=temp*10+i%10;//2204044
        i/=10;//2204044
    }
    if(num==temp){
        printf("%d is palindrome",num);//2204044
    }else{
        printf("%d is not palindrome",num);//2204044
    }
return 0;//2204044
}
