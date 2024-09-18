#include<stdio.h>//2204044
int main(){
    double unit,bill;//2204044
    printf("Enter unit :");//2204044
    scanf("%lf",&unit);//2204044
    if(unit<=50){
        bill=50*4;//2204044
    }else if(unit>50 && unit<=80){
        bill=50*4+(unit-50)*3;//2204044
    }else if(unit>80 && unit<=100){
        bill=50*4+30*3+(unit-80)*2;//2204044
    }else if(unit>100){
        bill=50*4+30*3+20*2+(unit-100);//2204044
    }
    printf("This month bill is % .1lf BDT Only",bill);//2204044
return 0;//2204044
}
