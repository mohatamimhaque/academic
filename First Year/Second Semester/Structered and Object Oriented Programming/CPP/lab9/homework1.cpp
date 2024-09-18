/*1. Overload the operator + for adding the timings
(hr, min, sec) of two clocks.*/
#include<iostream>
#include<string>
#include<cstring>
#include <cstdio> // for sscanf
using namespace std;//2204039
class addtime {
    int hr, min, sec;//2204039
public:
    addtime() {}
    addtime(char *str) {
        sscanf(str,"%d:%d:%d",&hr,&min,&sec);//2204039
    }
    addtime(int hr, int min, int sec) {
        this->hr = hr;//2204039
        this->min = min;//2204039
        this->sec = sec;//2204039
    }

    void show() {
        cout << ((hr < 10) ? "0" : "") << hr << ':'
             << ((min < 10) ? "0" : "") << min << ':'
             << ((sec < 10) ? "0" : "") << sec;//2204039
    }

    addtime operator+(const addtime &obj) {
        int hh, mm, ss;//2204039
        hh = this->hr + obj.hr;//2204039
        mm = this->min + obj.min;//2204039
        ss = this->sec + obj.sec;//2204039
        mm += (ss / 60);//2204039
        hh += (mm / 60);//2204039
        ss %= 60;//2204039
        mm %= 60;//2204039
        hh = hh >= 24 ? hh - 24 : hh;//2204039
        return addtime(hh, mm, ss);//2204039
    }
};//2204039
int main() {
    addtime obj1(14,04,23), obj2(16, 35, 41), obj;//2204039
    obj = obj1 + obj2;//2204039
    obj.show();//2204039
    return 0;//2204039
}
