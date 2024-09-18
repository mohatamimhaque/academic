#include<stdio.h>//2204044
int main(){
    int i,j,n;//2204044
    printf("Enter line number :\n");//2204044
    scanf("%d",&n);//2204044
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j || i>j){
                printf("* ");//2204044
            }else{
                printf("  ");//2204044
            }
        }
        printf("\n");//2204044
    }
return 0;//2204044
}
