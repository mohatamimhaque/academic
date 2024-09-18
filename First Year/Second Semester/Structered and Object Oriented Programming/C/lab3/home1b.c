#include<stdio.h>//2204044
int main(){
    int i,j,k,n;
    printf("Enter line number :\n");//2204044
    scanf("%d",&n);//2204044
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c",96+j);//2204044
        }
        printf(" ");//2204044
        for(k=1;k<=i;k++){
            printf("%c",96+j-1);//2204044
        }
        printf("\n");//2204044
    }
return 0;//2204044
}

