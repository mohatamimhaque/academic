#include<iostream>
#include<random>
using namespace std;
int random(int x,int y){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(x, y);
    return distribution(gen);
}
int neg(int *x){
    return -*x;
}
int neg(int &x){
    return -x;
}
int main(){
    int a=random(10,40);
    cout<<"Using Pointer :"<<neg(&a)<<endl;
    cout<<"Using reference :"<<neg(a)<<endl;
}