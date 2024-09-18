#include<stdio.h>//2204044
int line;//2204044
int patternA();//2204044
int patternB();//2204044
int patternC();//2204044
int main(){
  printf("Enter line number :");//2204044
  scanf("%d",&line);//2204044
  patternA();//2204044
  patternB();//2204044
  patternC();//2204044
  return 0;//2204044
}
int patternA(){
  int i,j=line;
  printf("Pattern A:\n");//2204044
  while(j){
    for(int i=j*2-1;i>0;i--){
      printf("%d",j);//2204044
    }
    printf("\n");//2204044
    j--;//2204044
  }
}
int patternB(){
  int i,j=line;
  printf("\nPattern B:\n");//2204044
  while(j){
    for(int i=j*2-1;i>0;i--){
      printf("%d",i);//2204044
    }
    printf("\n");//2204044
    j--;
  }
}
int patternC(){
  int i,j=line+1;//2204044
  printf("\nPattern C:\n");//2204044
  while(j>1){
    for(int i=j;i>0;i--){
      printf("*");//2204044
    }
    printf("\n");//2204044
    j-=2;//2204044
  }
  while(j<=line+1){
    for(int i=j;i>0;i--){
      printf("*");//2204044
    }
    printf("\n");//2204044
    j+=2;//2204044
  }
}
