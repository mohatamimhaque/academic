//As a short first example, this program allocates memory to hold an integer:
// A simple example of new and delete .
# include <iostream >
using namespace std;
int main(){
    int *p;
    p=new int;
    if(!p){
        cout<<"allocation Error";
    }
    *p=100;
    cout<<*p<<endl;
    delete p;

    return 0;
}