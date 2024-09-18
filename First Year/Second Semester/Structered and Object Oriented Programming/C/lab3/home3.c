#include<stdio.h>//2204044
int main(){
    int i,j,k,size;//2204044
    /*printf("Enter your array size :");//2204044
   /* scanf("%d",&size);//2204044
    int arr[size];//2204044
    printf("Enter array elements one by one:");//2204044
    for(i=0;i<size;i++){
        scanf("%d",arr+i);//2204044
    }*/


int arr[10]={85,85,70,74,85,74,85,74,60,60};
size=10;




    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[j]==arr[i]){
                for(k=j;k<size;k++){
                    arr[k]=arr[k+1];//2204044
                }
                size--;//2204044
                j--;
            }
        }
    }
    printf("Array after removing duplicates:");//2204044
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);//2204044
    }
return 0;//2204044
}
