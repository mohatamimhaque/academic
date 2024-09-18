#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <string>
using namespace std;
#define size 10
struct sample{
    int x,y;
    sample(int x,int y){
        cout<<"Intializaion with constructor\n";
        this->x=x;
        this->y=y;
    }
    void show(){
        cout<<"Showing value :\n"<<x<<' '<<y<<endl;
    }

};
int main(){
    int a,b;
    cout<<"Enter two integer :";
    cin>>a>>b;
    sample obj(a,b);
    obj.show();
}