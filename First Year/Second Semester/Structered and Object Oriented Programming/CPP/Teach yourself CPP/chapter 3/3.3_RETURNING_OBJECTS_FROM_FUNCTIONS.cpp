#include<iostream>
using namespace std;
class myClass{
    int a;
    char c;
    public:
        myClass(char c){
            cout<<"Constructor #"<<c<<endl;
            this->c=c;
        }
       ~myClass(){
            cout<<"Destructor #"<<c<<endl;
        }
        void set(int a){
            this->a=a;
        }
        int show(){
            return a;
        }
};
myClass input(){
    int x;
    myClass o('Y');
    cin>>x;
    o.set(x);
    return o;

}

int main(){
    myClass obj('X');
    obj=input();
    cout<<obj.show()<<endl;
    return 0;
}
