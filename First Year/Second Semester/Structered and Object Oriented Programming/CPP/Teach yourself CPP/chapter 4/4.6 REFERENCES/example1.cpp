#include<iostream>
#include<random>
using namespace std;
int random(int x,int y){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(x, y);
    return distribution(gen);
}

void swappers(int &x, int &y) {
  x=x+y;
  y=x-y;
  x=x-y;
}
int main() {
    int a = random(87,99);
    int b = random(11,99);
    cout << "before swap: " << a << " " << b << endl;
    swappers(a, b);
    cout << "after swap: " << a << " " << b << endl;
    return 0;
}
