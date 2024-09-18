#include<stdio.h>//2204044
int main(){
    int num,d1,d2,d3,min;//2204044
    printf("Enter a 3digit Number :");//2204044
    scanf("%d",&num);//2204044
    if(num>99 && num<1000){
        d1=num/100;//2204044
        d2=num%10;//2204044
        d3=(num%100)/10;//2204044
        min=d1<d2?d1<d3?d1:d3:d2<d3?d2:d3;//2204044
        printf("%d's minimum digit: %d",num,min);//2204044
    }else{
        printf("Please enter a digit number");//2204044
    }
}

