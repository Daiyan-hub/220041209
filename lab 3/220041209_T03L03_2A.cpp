#include <iostream>
using namespace std;

class bank_account{
    private:
        string name;
        int accountnum;
        string acctype;
        int balance1;
    public:
        void customerDetails(string customer, int accnum){
            name=customer;
            accountnum = accnum;
        }
        void accountType(string type){
            acctype = type;
        }
        void balance(int amount){
            balance1 = amount;
            cout << "Balance: " << balance1 << endl;
        }
        void deposit(int deposit1){
            balance1 += deposit1;
            cout << "Balance After Deposit: " << balance1 << endl;
        }
        void withdraw(int withdrawal){
            cout << "Balance: " << balance1 << endl;;
            balance1 -= withdrawal;
        }
        void display(){
            cout << "Name of customer: "<< name << endl;
            cout << "Account Number: "<< accountnum << endl;
            cout << "Account type: " << acctype << endl;
            cout << "Final Balance: " << balance1 << endl;
        }
};

int main(){
    bank_account Daiyan;
    Daiyan.customerDetails("Daiyan", 1234567890);
    Daiyan.accountType("Savings");
    Daiyan.balance(2000);
    Daiyan.deposit(1000);
    Daiyan.withdraw(500);
    Daiyan.display();
}