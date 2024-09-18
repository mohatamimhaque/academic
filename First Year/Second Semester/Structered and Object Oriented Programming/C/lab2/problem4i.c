#include<stdio.h>//2204044
#include<math.h>//2204044
int main(){
    float n,j,fact=1,sum,x=1;//2204044
    int i;//2204044
    printf("Enter your terms :");//2204044
    scanf("%f",&n);//2204044
    for(i=1,j=2;i<=n;i++,j++){
        fact*=j;//2204044
        if(i%2==0){
            sum+=(pow(x,j)/fact);//2204044
        }else{
            sum-=(pow(x,j)/fact);//2204044
        }
    }
    printf("Sum :%f\n",sum);//2204044
return 0;
}
