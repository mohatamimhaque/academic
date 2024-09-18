#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <string>
using namespace std;
#define size 10
class stack{
  char STACK[size];
  int tos;
  char who;
  public:
    stack(char c);
    void push(char ch);
    char pop();
};
stack::stack(char c){
  tos=0;
  who=c;
}
void stack::push(char ch){
  if(tos==size){
    cout<<"STACK "<<who<<" is FUll\n";
  }else{
    STACK[tos++]=ch;
  }
}
char stack::pop(){
  if(tos==0){
    cout<<"STACK "<<who<<" is empty\n";
  }else{
    return STACK[tos--];
  }
}
int main(){
  stack obj('A');
  obj.pop();
  obj.push('p');
  obj.push('p');
  obj.push('p');
  obj.push('p');
  obj.push('p');
  obj.push('p');
  obj.push('p');
  obj.push('p');
  obj.push('p');
  obj.push('p');
  obj.push('p');
  obj.push('p');
}