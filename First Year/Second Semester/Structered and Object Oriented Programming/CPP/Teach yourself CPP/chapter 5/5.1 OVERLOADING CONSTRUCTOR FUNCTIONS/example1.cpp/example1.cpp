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
    samp obj;
    cout<<obj.getx()<<endl;
    samp ob(random(100,300));
    cout<<ob.getx()<<endl;

    return 0;
}