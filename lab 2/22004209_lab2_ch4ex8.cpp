#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int numerator;
    int denominator;
    char dummychar;
}fraction;

int main(){
    fraction f[3];
    cout << "Enter first fraction: ";
    cin >> f[0].numerator >> f[0].dummychar >> f[0].denominator;
    if(f[0].denominator==0){
        cout << "Error: Denominator cannot be zero." << endl;
        cout << "Enter first fraction: ";
        cin >> f[0].numerator >> f[0].dummychar >> f[0].denominator;
    }
    cout << "Enter second fraction: ";
    cin >> f[1].numerator >> f[1].dummychar >> f[1].denominator;
    if (f[1].denominator==0)
    {
        cout << "Error: Denominator cannot be zero." << endl;
        cout << "Enter second fraction: ";
        cin >> f[1].numerator >> f[1].dummychar >> f[1].denominator;
    }
    f[2].dummychar=f[1].dummychar;
    f[2].numerator = (f[0].numerator*f[1].denominator) + (f[0].denominator*f[1].numerator);
    f[2].denominator = f[0].denominator*f[1].denominator;
    cout << "Sum: " << f[2].numerator << f[2].dummychar << f[2].denominator << endl;
}