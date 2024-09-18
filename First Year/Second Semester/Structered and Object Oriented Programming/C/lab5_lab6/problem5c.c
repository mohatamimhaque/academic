#include<stdio.h>//2204044
void dataInput(int *list,int size){
    printf("Enter array element one by one :");//2204044
    for(int i=0;i<size;i++)
        scanf("%d",list+i);//2204044
}
int search(int *list,int size){
    printf("Enter searched element :");//2204044
    int data;//2204044
    scanf("%d",&data);//2204044
    for(int i=0;i<size;i++)
        if(*(list+i)==data)
            return i+1;//2204044
    return 0;//2204044
}
int main(){
    int size;//2204044
    printf("Array size :");//2204044
    scanf("%d",&size);//2204044
    int list[size];//2204044
    int copyList[size];//2204044
    dataInput(list,size);//2204044
    int fg=search(list,size);//2204044
    if(fg)
        printf("Position :%d",fg);//2204044
    else
        printf("Not found");//2204044
    return 0;//2204044
}
