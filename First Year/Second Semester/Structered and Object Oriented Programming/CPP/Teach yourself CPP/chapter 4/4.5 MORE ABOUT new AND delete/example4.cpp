//Allocating dynamic objects.
#include<iostream>
#include<random>
using namespace std;
class samp{
    int i,j;
    public:
        void set(int a,int b){
            this->i=a;
            this->j=b;
        }
        void product() {
            cout << "Product of " << i << " and " << j << ": " << i * j << endl;
        }
};
int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(8, 10);
    int size=distribution(gen);
    cout<<"Creating obj :"<<size<<endl;
    samp *p=new samp[size];
    if(!p){
        cout<<"allocation error";
    }
    for(int i=0;i<size;i++){
    int a = distribution(gen);
    int b = distribution(gen);
        p[i].set(a,b);
    }
    for(int i=0;i<size;i++){
        p[i].product();
    }

    delete[] p;
    
    
}