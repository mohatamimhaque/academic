#include<iostream>
using namespace std;

float f(float n){
    cout<<"float"<<endl;
    return n;
}

double f(double n){
    cout<<"double"<<endl;
    return n;
}

int main(){
    float x=10.09;
    double y=10.09;
    cout<<f(x)<<endl;
    cout<<f(y)<<endl;
    cout<<f(10.0)<<endl;

    return 0;
}