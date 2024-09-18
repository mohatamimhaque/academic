#include <stdio.h>//2204044
void primeFactor(int n);//2204044
int main(){
  int num;//2204044
  printf("Enter an Integer :");//2204044
  scanf("%d",&num);//2204044
  printf("Prime Factor :");//2204044
  primeFactor(num);//2204044
  return 0;//2204044
}
void primeFactor(int n){
  if(n>=2){
    for(int i=2;i<=n;i++){
      if(n%i==0){
        printf("%d ",i);//2204044
        primeFactor(n/i);//2204044
        break;//2204044
      }
    }
  }
}
