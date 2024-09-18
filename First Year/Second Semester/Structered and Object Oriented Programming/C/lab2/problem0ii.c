#include<stdio.h>//2204044
int main(){
    int highest=0,second=0,counter=0,n;//2204044
    printf("Enter your numbers :");//2204044
    while(1){
        scanf("%d",&n);//2204044
        if(n==0){
            if(counter >= 2){
                printf("Second largest number :%d",second);//2204044
            }else{
                printf("Enter at least two number.");//2204044
            }
            break;
        }else if(n<0){
            printf("Only natural number accepted.");//2204044
        }else{
            if(n>highest){
                second=highest;//2204044
                highest=n;//2204044
            }else if(n<highest && n>second){
                second=n;//2204044
            }
            counter++;//2204044
        }
    }
return 0;//2204044
}
