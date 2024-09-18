#include<stdio.h>//2204044
int main(){
    int n,i,sum=0,odd=1;//2204044
    printf("Enter Number :");//2204044
    scanf("%d",&n);//2204044
    for(i=1;i<=n;i++){
        sum+=odd;//2204044
        odd+=2;//2204044
    }
    int average = sum/n;//2204044
    printf("First %d natural odd numbers sum=%d & average=%d",n,sum,average);//2204044
return 0;
}
