#include<stdio.h>//2204044
int main(){
    int n,intial=15;//2204044
    char check = 'y';//2204044
    do{
        printf("Enter an Integer :");//2204044
        scanf("%d",&n);//2204044
        if(n>intial){
            printf("It is greater than %d",intial);//2204044
        }else if(n<intial){
            printf("It is less than %d",intial);//2204044
        }else{
            printf("It is equal to %d",intial);//2204044
        }
        intial=n;
        printf("\nDo you want to continue (y/n)? ");//2204044
        getchar();//2204044
        check=getchar();//2204044
    }while(check=='y');//2204044
return 0;//2204044
}

