#include <bits/stdc++.h>
using namespace std;

int main(){
    char l;
    enum etype { laborer, secretary, manager, accountant, executive,researcher };
    etype employee;
    cout << "Enter employee type (first letter only)  - laborer, secretary, manager, accountant, executive, researcher: ";
    cin >> l;
    switch (l){
        case 'l':
            employee = laborer;
            break;
        case 's':
            employee = secretary;
            break;
        case 'm':
            employee = manager;
            break;
        case 'a':
            employee = accountant;
            break;
        case 'e':
            employee = executive;
            break;
        case 'r':
            employee = researcher;
            break;
    }
    switch (employee){
        case laborer:
            cout << "Employee type is laborer";
            break;
        case secretary:
            cout << "Employee type is secretary";
            break;
        case manager:
            cout << "Employee type is manager";
            break;
        case accountant:
            cout << "Employee type is accountant";
            break;
        case executive:
            cout << "Employee type is executive";
            break;
        case researcher:
            cout << "Employee type is researcher";
            break;
    }
}

