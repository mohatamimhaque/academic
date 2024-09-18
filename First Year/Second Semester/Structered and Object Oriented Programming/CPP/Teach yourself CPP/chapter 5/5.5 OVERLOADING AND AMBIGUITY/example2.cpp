#include<iostream>
using namespace std;

void f(unsigned char c){
    cout<<"unsigned char :"<<c<<endl;
}
void f(char c){
    cout<<"char :"<<c<<endl;
}

int main(){
    f('A');
    f('6');
}