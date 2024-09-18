#include<iostream>
using namespace std;

class marks{
    int mark[3];
    public:
        marks(int *mark){
            for(int i=0;i<3;i++){
                this->mark[i] = mark[i];
            }
        }
        void display(){
             for(int i=0;i<3;i++){
                cout<<"Subject "<<i<<": "<<this->mark[i]<<endl;
            }
        }
        int operator[](int p){
            return mark[p];
        }
        marks operator()(int s0,int s1){
            mark[0]=s0;
            mark[1]=s1;
            return *this;
        }
};
int main(){
    int arr[3]={50,80,78};
    marks obj(arr);
    obj.display();

    obj(52,32);obj.display();


}
