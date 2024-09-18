#include<stdio.h>//2204044
int main(){
    int list[25],i,size,num,data,location;//2204044
    printf("Enter list size :");//2204044
    scanf("%d",&size);//2204044
    printf("Enter your list item one by one :\n");//2204044
    for(i=0;i<size;i++){
        scanf("%d",&list[i]);//2204044
    }
    printf("Enter data to insert in list :");//2204044
    scanf("%d",&data);//2204044
    printf("Enter location to insert at :");//2204044
    scanf("%d",&location);//2204044
    printf("List before insertion of new data:");//2204044
    for(i=0;i<size;i++){
        printf("%d\t",list[i]);//2204044
    }
    for(i=size;i>=location;i--){
        list[i]=list[i-1];
    }
    list[location-1]=data;//2204044
    size++;//2204044
    printf("\nList after insertion of new data:");//2204044
    for(i=0;i<size;i++){
        printf("%d\t",list[i]);//2204044
    }

return 0;}
