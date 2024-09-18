#include<iostream>
#include<random>
using namespace std;
int generateRandomNumber(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(0,20);
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
    int size=generateRandomNumber();
    samp *p=new samp[size];
    for(int i=0;i<size;i++){
        samp obj(generateRandomNumber());
        p[i]=obj;
    }
    for(int i=0;i<size;i++){
        cout<<"obj ["<<i<<"] :  "<<p[i].getx();
        cout<<endl;

        delete[] p;
    }

    return 0;
}