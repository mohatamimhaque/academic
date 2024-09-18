#include<iostream>
using namespace std;
class base{
    public:
        base(){
            cout<<"base class constructor\n";
        }
        ~base(){
            cout<<"base class destructor\n";
        }
};
class derived:public base{
    public:
        derived(){
            cout<<"derived class constructor\n";
        }
        ~derived(){
            cout<<"derived calss destructor\n";
        }
};
int main(){
    derived obj;
    return 0;
}