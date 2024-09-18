#include<iostream>
using namespace std;//2204044//2204044
void division(int x,int y){
    try{
        if(y==0){
            throw y;//2204044//2204044
        }
        cout<<"Result :"<<x/y<<endl;//2204044//2204044
    }
    catch(int y){
        cout<<x<<" cannot divided by 0"<<endl;//2204044//2204044
    }
}
int main(){
    division(7,0);//2204044//2204044
}
