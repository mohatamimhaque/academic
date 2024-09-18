#include<iostream>
#include<algorithm>
using namespace std;
class marks{
    int subject[3];
    public:
        marks(){};
        marks(int sub1,int sub2,int sub3){
           subject[0]=sub1;
           subject[1]=sub2;
           subject[2]=sub3;
        }
         int operator[](int p){
            return subject[p];
        }
        marks operator()(int s1,int s2){
            subject[0]=s1;
            subject[1]=s2;
            return *this;
        }
        void display(){
            for(int i=0;i<3;i++){
                cout<<"Subject "<<i<<':'<<subject[i]<<endl;
            }
        }
        marks *operator->(){
            return this;
        }
};


int main(){
    marks ronju(50,80,70);
    cout<<ronju[0]<<endl;
    ronju(48,52);
    ronju->display();

    return 0;
}
