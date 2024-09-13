#include <bits/stdc++.h>
using namespace std;

typedef struct{
    string brand;
    string model;
    int year;
    string fuelType;
    double mileage;
} car_type;

void display_car_information(string brand1, string model1, string fueltype, int year1, double mileage1){
    cout << "Brand: " << brand1 << endl;
    cout << "Model: " << model1 << endl;
    cout << "Year: " << year1 << endl;
    cout << "Fuel Type: " << fueltype << endl;
    cout << "Mileage: " << mileage1 << endl;
}

void check_fuel_efficiency(double mile_age){
    if(mile_age > 15) cout << "The car is fuel-efficient" << endl;
    else cout << "The car is not fuel-efficient" << endl;
}

double fuel_consumption(double mile_age, int distance){
    double litre;
    litre = (double)distance / mile_age;
    return litre;
}

void fuel_cost(string fuel, int distance, double cost, double mile_age){
    double total_cost;
    if (fuel == "Electric") {
        cout << "This car is electric, efficiency measured in km/charge." << endl;
    } else {
        total_cost = fuel_consumption(mile_age, distance) * cost;
        cout << "Estimated fuel cost for " << distance << " km: $" << total_cost << endl;
    }
}

int main(){
    int n, fixed_distance;
    double petrol, diesel, hybrid;

    cout << "Input the number of cars: ";
    cin >> n;

    car_type car[n];

    for(int i = 0; i < n; i++){
        cout << "Give the information of the car: " << endl;
        cout << "Brand: ";
        cin >> car[i].brand;
        cout << "Model: ";
        cin >> car[i].model;
        cout << "Year: ";
        cin >> car[i].year;
        cout << "Fuel Type: ";
        cin >> car[i].fuelType;
        cout << "Mileage: ";
        cin >> car[i].mileage;
    }

    cout << "Input fixed distance: ";
    cin >> fixed_distance;

    cout << "Input the fuel price per liter for petrol, diesel, and hybrid: " << endl;
    cin >> petrol >> diesel >> hybrid;

    for (int i = 0; i < n; i++){
        cout << "Car " << i + 1 << ":" << endl;
        display_car_information(car[i].brand, car[i].model, car[i].fuelType, car[i].year, car[i].mileage);
        check_fuel_efficiency(car[i].mileage);

        if (car[i].fuelType == "Petrol") {
            fuel_cost(car[i].fuelType, fixed_distance, petrol, car[i].mileage);
        } else if (car[i].fuelType == "Diesel") {
            fuel_cost(car[i].fuelType, fixed_distance, diesel, car[i].mileage);
        } else if (car[i].fuelType == "Hybrid") {
            fuel_cost(car[i].fuelType, fixed_distance, hybrid, car[i].mileage);
        } else {
            fuel_cost(car[i].fuelType, fixed_distance, petrol, car[i].mileage);
        }
    }

    return 0;
}
