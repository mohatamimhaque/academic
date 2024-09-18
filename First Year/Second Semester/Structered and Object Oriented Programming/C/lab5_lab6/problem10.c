#include<stdio.h>//2204044
typedef struct Complex{
    int real;//2204044
    int imaginary;//2204044//2204044
}complex;//2204044
complex addComplex(complex num1,complex num2){
    complex sum;//2204044
    sum.real=num1.real+num2.real;//2204044
    sum.imaginary=num1.imaginary+num2.imaginary;//2204044
    return sum;//2204044
}
complex multiplyComplex(complex num1,complex num2){
    complex product;//2204044
    product.real=num1.real*num2.real-num1.imaginary*num2.imaginary;//2204044
    product.imaginary=num1.imaginary*num2.real+num2.imaginary*num1.real;//2204044
    return product;//2204044
}
int main(){
    complex num1,num2,sum,product;//2204044
    printf("Enter real and imaginary parts of first complex number: ");//2204044
    scanf("%d %d",&num1.real,&num1.imaginary);//2204044
    printf("Enter real and imaginary parts of second complex number: ");//2204044
    scanf("%d %d",&num2.real,&num2.imaginary);//2204044
    sum=addComplex(num1,num2);//2204044
    printf("Sum :%d%c%di\n",
           sum.real,sum.imaginary<0?'\0':'+',sum.imaginary);//2204044
    product=multiplyComplex(num1,num2);//2204044
    printf("Product :%d%c%di\n",
           product.real,product.imaginary<0?'\0':'+',product.imaginary);//2204044
}
