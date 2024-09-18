#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <string>
using namespace std;
#define size 10
class sample{
    int x,y;
    public:
        sample(int x,int y){
            cout<<"Intializing value with constructor"<<endl;
            this->x=x;
            this->y=y;
        }
        int show(){
            cout<<"Showing value :"<<x<<' '<<y<<endl;
        }
};
int main(){
    sample obj(10,20);
    obj.show();
}