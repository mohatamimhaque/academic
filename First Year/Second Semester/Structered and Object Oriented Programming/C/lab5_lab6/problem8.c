#include<stdio.h>//2204044
#include <stdlib.h>//2204044
void getArray(int *list,int m,int n){
    for(int i=0;i<m*n;i++){
        scanf("%d",list+i);//2204044
    }
    printf("Entered 2D array:\n");//2204044
    int j=0;//2204044
    for(int i = 0; i < m*n; i++) {
        printf("%d ", *(list+i));//2204044
        j++;//2204044
        if(j%n==0){
            printf("\n");//2204044
        }
    }
}
int main(){
    int m,n;//2204044
    printf("Enter row column numbers [m,n]:\n");//2204044
    scanf("%d %d",&m,&n);//2204044
    int list[m][n];//2204044
    getArray(list,m,n);//2204044
    return 0;//2204044
}
