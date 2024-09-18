#include<stdio.h>//2204044
int main(){
    char grade;//2204044
    printf("Enter Grade:");//2204044
    scanf("%c",&grade);//2204044
    switch(grade){
    case 'A':
        printf("80-100%%");//2204044
        break;//2204044
    case 'B':
        printf("70-79%%");//2204044
        break;//2204044
    case 'C':
        printf("60-69%%");//2204044
        break;//2204044
    case 'D':
        printf("50-59%%");//2204044
        break;//2204044
    case 'F':
        printf("0-50%%");//2204044
        break;//2204044
    default:
        printf("Error: Invalid Grade Entered");//2204044
        break;//2204044
    }

    return 0;//2204044
}
