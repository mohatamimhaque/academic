/*. Create a class BankAccount representing a bank account with private members balance, accountNumber, and customerName. Implement a friend function transferFunds() that takes two BankAccount objects as arguments and transfers funds from one account to another. Also, make another class BankManager a friend of BankAccount class, which can access the accountNumber and customerName of any BankAccount object. Test your program by creating multiple bank accounts, transferring funds between them, and displaying account information using the BankManager class*/
#include<iostream>
using namespace std;//2204039
class BankAccount{
    double balance;//2204039
    int accountNumber;//2204039
    string customerName;//2204039
    public:
        BankAccount(){};//2204039
        BankAccount(int accountNumber,
                    string customerName,double balance){
            this->balance=balance;//2204039
            this->accountNumber=accountNumber;//2204039
            this->customerName=customerName;//2204039
        }
        friend void transferFunds(BankAccount &o1,
                                  BankAccount &o2,int amount);//2204039
        friend void BankManager(const BankAccount &obj);//2204039
};//2204039
void transferFunds(BankAccount &o1,BankAccount &o2,int amount){
    o2.balance=o2.balance+amount;//2204039
    o1.balance=o1.balance-amount;//2204039
}
void BankManager(const BankAccount &obj){
    cout<<"Account Number :"<<obj.accountNumber<<endl
        <<"Customer Name :"<<obj.customerName<<endl
        <<"Balance :"<<obj.balance<<endl<<endl;//2204039
}
int main(){
    BankAccount obj1(2204039,"Mohatamim Haque",14500),
                obj2(2204074,"Raju Bhai",25500),
                obj3(2204084,"Ronju",17500);//2204039
    int amount = 2000;//2204039
    cout<<"Before transfer funds :"<<endl;
    BankManager(obj1);//2204039
    cout<<endl;
    transferFunds(obj1,obj2,amount);//2204039
    cout<<"After transfer funds :"<<endl;
    BankManager(obj1);//2204039
}

