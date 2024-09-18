// Allocating dynamic objects .
#include<iostream>
using namespace std;
class samp{
    int i,j;
    public:
        void set(int a,int b){
            this->i=a;
            this->j=b;
        }
        int product(){
            return i*j;
        }
};
int main(){
    samp *p=new samp;
    if(!p){
        cout<<"allocation error";
    }
    p->set(15,20);
    cout<<p->product()<<endl;
    delete p;
}