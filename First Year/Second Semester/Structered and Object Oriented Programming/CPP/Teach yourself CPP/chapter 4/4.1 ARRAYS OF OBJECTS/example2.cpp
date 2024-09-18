#include<iostream>
using namespace std;
class samp{
    int a;
    public:
        samp(){
           a=0; 
        }
        samp(int a){
            this->a=a;
        }
        void show(){
            cout<<"obj :"<<a<<endl;
        }
};
int main(){
    samp obj[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        obj[i].show();
    }
}