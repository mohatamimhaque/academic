#include<iostream>
#include<random>
using namespace std;
int random(int x,int y){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(x, y);
    return distribution(gen);
}
class myclass{
    int who;
    public:
        myclass(int n){who=n;cout<<"constructing :"<<who<<endl;}
        ~myclass(){cout<<"destructing :"<<who<<endl;};
        int id(){return who;}
};
void show(myclass &o){
    cout<<"reveived:"<<o.id()<<endl;
}
int main(){
    myclass obj(random(12,23));
    show(obj);
    return 0;
}