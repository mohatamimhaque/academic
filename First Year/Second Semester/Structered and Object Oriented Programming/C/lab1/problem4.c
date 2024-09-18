#include<stdio.h>//2204044
int main(){
    char op;//2204044
    int num1,num2,result;//2204044
    printf("Enter an arithmetic operator ('+', '-', '*' or '/') :");//2204044
    scanf("%c",&op);//2204044
    printf("enter two integer number :");//2204044
    scanf("%d%d",&num1,&num2);//2204044
    switch(op){
    case '+':
        printf("result:%d%c%d=%d",num1,op,num2,num1+num2);//2204044
        break;//2204044
    case '-':
        result=num1-num2;//2204044
        printf("result:%d%c%d=%d",num1,op,num2,result);//2204044
        break;//2204044
    case '*':
        result=num1*num2;//2204044
        printf("result:%d%c%d=%d",num1,op,num2,result);//2204044
        break;//2204044
    case '/':
        if(num2!=0){
            result=num1/num2;//2204044
            printf("result:%d%c%d=%d",num1,op,num2,result);//2204044
        }else{
             printf("Error: Division by zero is not allowed.\n");//2204044
        }
        break;//2204044
    default:
         printf("Error: Invalid operator entered.\n");//2204044
    }
    return 0;//2204044
}
