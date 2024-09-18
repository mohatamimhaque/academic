// Allocating dynamic objects .
#include<iostream>
using namespace std;
class samp{
    int i,j;
    public:
        samp(int a,int b){
            this->i=a;
            this->j=b;
        }
        int product(){
            return i*j;
        }
};
int main(){
    samp *p=new samp(10,20);
    if(!p){
        cout<<"allocation error";
    }
    cout<<p->product()<<endl;
    delete p;
}