#include <iostream>
using namespace std;

class RationalNumber{
    private:
        int numerator;
        int denominator;
    public:
        void assign(int num, int denom){
            if (denom == 0) cout << "You cannot assign 0 as denominator" << endl;
            numerator = num;
            denominator = denom;
        }
        float convert(){
            float num = (float)numerator/(float)denominator;
            return num; 
        }
        void invert(){
            if (denominator == 0){
                cout << "Inversion Failed" << endl;
                return;
            }   
            int temp; 
            temp= numerator;
            numerator= denominator;
            denominator = temp;
        }
        void print(){
            cout << "The Rational Number is "<< numerator << "/" << denominator << endl;
        }

};

int main(){
    RationalNumber num;
    num.assign(1, 0);
    cout << num.convert() << endl;
    num.invert();
    num.print();
}