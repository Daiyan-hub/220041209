#include <iostream>
using namespace std;

class Temperature{
    private:
        int temperature = 0;
        int increment;
    public:
        int track(){
            int temp_track=0;
            int i_track=0;
        }
        int setIncrementStep(int steps){
            increment=steps;
        }
        int getTemperature(){
            return temperature;
        }
        int incre_ment(){
            temperature += increment;
        }
        int resetTemperature(){
            temperature = 0;
        }
};

int main(){
    Temperature temp;
    int steps=5;
    temp.setIncrementStep(steps);
    temp.incre_ment();
    cout << temp.getTemperature() << endl;
    temp.resetTemperature();
    cout << temp.getTemperature() << endl;
}

