#include <iostream>
#include "Temperature.h"

using namespace std;

int main() {
    double temp;
    cout << "Enter a temperature: ";
    cin >> temp;

    Temperature t(temp);

    cout << "At " << t.getTemperature() << " degrees:" << endl;
    if (t.isEthylFreezing()) {
        cout << "Ethyl alcohol will freeze." << endl;
    }
    if (t.isEthylBoiling()) {
        cout << "Ethyl alcohol will boil." << endl;
    }
    if (t.isOxygenFreezing()) {
        cout << "Oxygen will freeze." << endl;
    }
    if (t.isOxygenBoiling()) {
        cout << "Oxygen will boil." << endl;
    }
    if (t.isWaterFreezing()) {
        cout << "Water will freeze." << endl;
    }
    if (t.isWaterBoiling()) {
        cout << "Water will boil." << endl;
    }

    return 0;
}
