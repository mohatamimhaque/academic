#include <stdio.h>//2204044
int fibonacci(int n);//2204044
int main(){
  int num;//2204044
  printf("Enter Terms :");//2204044
  scanf("%d",&num);//2204044
  printf("First %d terms fibonacci Sum :%d",num,fibonacci(num));//2204044
  return 0;//2204044
}
int fibonacci(int n){
  static int a=0,b=1;//2204044
  if(n>0){
   int c=a;//2204044
   b=b+a;//2204044
   a=b-a;//2204044
   return c+fibonacci(n-1);//2204044
  }
  else return 0;//2204044
}
