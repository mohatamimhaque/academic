#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int *p=new int(20);
    string *str=new string("Mohatamim");
    char *ch=new char[20];
    strcpy(ch,"Haque");
    cout<<*p<<endl;
    cout<<*str;
    printf(" %s",ch);

    delete p;
    delete str;
    delete[] ch;
}