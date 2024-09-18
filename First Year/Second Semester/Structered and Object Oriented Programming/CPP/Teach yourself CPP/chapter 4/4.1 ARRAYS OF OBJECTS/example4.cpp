// Create a two - dimensional array of objects .
#include<iostream>
using namespace std;
class samp{
    int row,column;
    public:
        samp(){
           row=column=0; 
        }
        samp(int a,int b){
            row=a;
            column=b;
        }
        void show(){
            cout<<"row :"<<row<<" column "<<column<<endl;
        }
};
int main(){
    samp obj[4][2]={samp(0,0),samp(0,1),
                    samp(1,0),samp(1,1),
                    samp(2,0),samp(2,1),
                    samp(3,0),samp(3,1)};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            obj[i][j].show();
        }
    }
}