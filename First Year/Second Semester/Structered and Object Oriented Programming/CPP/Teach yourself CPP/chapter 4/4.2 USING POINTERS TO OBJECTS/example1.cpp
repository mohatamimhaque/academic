#include<iostream>
using namespace std;
class samp{
    int a,b;
    public:
        samp(){
            a=b=0;
        };
        samp(int a,int b){
            this->a=a;
            this->b=b;
        }
        int get_a(){return a;};
        int get_b(){return b;};

};
int main(){
    samp obj[4]={samp(1,2),samp(4,3),samp(9,5),samp(7,2)};
    samp *p;
    p=obj;
    for(int i=0;i<4;i++){
        cout<<p->get_a()<<' '<<p->get_b()<<endl;
        p++;
    }
}