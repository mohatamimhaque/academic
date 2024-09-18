#include<stdio.h>//2204044
void dataInput(int *list,int size){
    printf("Enter array element one by one :");//2204044
    for(int i=0;i<size;i++){
        scanf("%d",list+i);//2204044
    }
}
void dataOutput(int *list,int size){
    printf("Array elements :");//2204044
    for(int i=0;i<size;i++){
        printf("%d ",*(list+i));//2204044
    }
}
int main(){
    int size;//2204044
    printf("Array size :");//2204044
    scanf("%d",&size);//2204044
    int list[size];//2204044
    dataInput(list,size);//2204044
    dataOutput(list,size);//2204044
    return 0;//2204044
}