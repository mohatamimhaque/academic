#include<iostream>
#include<random>
using namespace std;
int random(int x,int y){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(x, y);
    return distribution(gen);
}
class samp{
    int x;
    public:
        samp(){x=0;}
        samp(int n){x=n;}
        int getx(){return x;};
};
int main(){
    samp obj1[10];
    samp obj2[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++){
        cout<<"obj1["<<i+1<<"] :"<<obj1[i].getx()<<endl;
        cout<<"obj2["<<i+1<<"] :"<<obj2[i].getx()<<endl;
    }

    return 0;
}