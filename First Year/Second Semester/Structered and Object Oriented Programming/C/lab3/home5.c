#include<stdio.h>//2204044
int main(){
    int m,n,i,j,k;//2204044
    printf("Enter first array size :");//2204044
    scanf("%d",&m);//2204044
    int arr1[m];//2204044
    printf("Enter the elements of the first array (in sorted order):\n");//2204044
    for(i=0;i<m;i++){
        scanf("%d",&arr1[i]);//2204044
    }
    printf("Enter second array size :");//2204044
    scanf("%d",&n);//2204044
    int arr2[n];//2204044
    printf("Enter the elements of the second array (in sorted order):\n");//2204044
    for(j=0;j<n;j++){
        scanf("%d",&arr2[j]);//2204044
    }
    int sorted_arr[m+n];//2204044
    i=j=k=0;//2204044
    while(i<m & j<n){
        if(arr1[i] < arr2[j]){
            sorted_arr[k++] = arr1[i++];//2204044
        }else{
            sorted_arr[k++] = arr2[j++];//2204044
    }}
    while(i<m){
        sorted_arr[k++] = arr1[i++];//2204044
    }
    while(j<n){
        sorted_arr[k++] = arr2[j++];//2204044
    }
    printf("Merged array :");//2204044
    for(k=0;k<m+n;k++){
        printf("%d ",sorted_arr[k]);//2204044
    }
return 0;//2204044
}
