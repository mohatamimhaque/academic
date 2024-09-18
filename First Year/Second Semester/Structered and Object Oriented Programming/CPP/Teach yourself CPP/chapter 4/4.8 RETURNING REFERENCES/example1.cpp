#include<iostream>
#include<random>
using namespace std;
int random(int x,int y){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(x, y);
    return distribution(gen);
}
int x;
int &f(){
    return x;
}
int main(){
    f()=100;
    cout<<x;
}