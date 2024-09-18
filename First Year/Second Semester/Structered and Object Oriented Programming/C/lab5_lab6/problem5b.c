#include<stdio.h>//2204044
void dataInput(int *list,int size){
    printf("Enter array element one by one :");//2204044
    for(int i=0;i<size;i++){
        scanf("%d",list+i);//2204044
    }
}
void dataOutput(int *copyList,int size){
    printf("After Copy :");//2204044
    for(int i=0;i<size;i++){
        printf("%d ",*(copyList+i));//2204044
    }
}
void dataCopy(int *list,int *copyList,int size){
    for(int i=0;i<size;i++){
        *(copyList+i)=*(list+i);//2204044
    }
}
int main(){
    int size;//2204044
    printf("Array size :");//2204044
    scanf("%d",&size);//2204044
    int list[size];//2204044
    int copyList[size];//2204044 
    dataInput(list,size);//2204044
    dataCopy(list,copyList,size);//2204044
    dataOutput(copyList,size);//2204044
    return 0;//2204044
}