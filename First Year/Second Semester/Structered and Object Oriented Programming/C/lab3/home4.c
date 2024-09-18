#include<stdio.h>//2204044
int main(){
    int size,i,j,temp,k;//2204044
   /* printf("Enter array size :");//2204044
    scanf("%d",&size);//2204044
    int arr[size];
    printf("Enter array elements:");//2204044
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);//2204044
    }/*
*/

int arr[]={85,74,12,80,92,74,35,60,04,85,8,9,14,25,78,41,25,85,19,34,5,45,99};
size=sizeof(arr)/sizeof(arr[0]);
    /*sorting */
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];//2204044
                arr[i]=arr[j];//2204044
                arr[j]=temp;//2204044
            }
        }
    }


   for(i=0;i<size;i++){
        printf("%d \t",arr[i]);//2204044
    }/**/


    printf("\nEnter the the value of K:");//2204044
    scanf("%d",&k);//2204044
    printf("%d th maximum :%d\n",k,arr[size-k]);//2204044
    printf("%d th minimum :%d",k,arr[k-1]);//2204044
return 0;
}
