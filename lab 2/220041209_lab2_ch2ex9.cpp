#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    char dummychar;
    cout << "Enter first fraction: ";
    cin >> a >> dummychar >> b;
    if(b==0){
        cout << "Error: Denominator cannot be zero.";
        cout << "Enter first fraction: ";
        cin >> a >> dummychar >> b;
    }
    cout << "Enter second fraction: ";
    cin >> c >> dummychar >> d;
    if (d==0)
    {
        cout << "Error: Denominator cannot be zero.";
        cout << "Enter second fraction: ";
        cin >> c >> dummychar >> d;
    }
    
    int sum;
    if(b==d) sum = a+c;
    else sum = (a*d) + (b*c);
    
    cout << "Sum: " << sum << dummychar << b*d << endl;

}