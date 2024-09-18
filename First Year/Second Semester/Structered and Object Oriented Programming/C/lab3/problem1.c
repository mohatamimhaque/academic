#include<stdio.h>//2204044
int main(){
    int n,i,j;//2204044
    printf("Enter your last terms :");//2204044
    scanf("%d",&n);//2204044
    for(i=1;i<=n;i++){
        printf("(");//2204044
        for(j=1;j<=i;j++){
            if(i!=j){
                printf("%d+",j);//2204044
            }else{
                printf("%d",j);//2204044
            }
        }
         if(i!=n){
            printf(")+");//2204044
         }else{
            printf(")");//2204044
        }
    }

}
