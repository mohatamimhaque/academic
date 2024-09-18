/*
Illustrate assigning function pointers to
overloaded functions .
*/
# include <iostream >
using namespace std;

void space(int count){
    while(count--){
        cout<<' ';
    }
    cout<<endl<<"Space"<<endl;
}

void space(int count,char c){
    while(count--){
        cout<<c;
    }
    cout<<endl<<"char"<<endl;

}
void (*fp1)(int);
void (*fp2)(int,char);

int main(){
    fp1=space;
    fp2=space;

    fp1(22);
    fp2(22,'c');

}

