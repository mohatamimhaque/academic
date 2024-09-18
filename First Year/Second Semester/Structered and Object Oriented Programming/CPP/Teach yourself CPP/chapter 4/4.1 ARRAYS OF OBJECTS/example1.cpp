#include<iostream>
using namespace std;
class samp{
    int a;
    public:
        int set_data(int a){
            this->a=a;
        }
        void show(){
            cout<<"obj :"<<a<<endl;
        }
};
int main(){
    samp obj[5];
    for(int i=0;i<5;i++){
        obj[i].set_data(i+1);
    }
    for(int i=0;i<5;i++){
        obj[i].show();
    }
}