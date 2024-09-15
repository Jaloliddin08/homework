#include <iostream>
using namespace std;

int main() {
    double sardor_height_cm, mike_height_ft;
    cout << "Enter Sardor's height in cm: ";
    cin >> sardor_height_cm;
    cout << "Enter Mike's height in feet: ";
    cin >> mike_height_ft;
    double mike_height_cm = mike_height_ft * 30.48;
    cout << (mike_height_cm > sardor_height_cm) << endl;

    return 0;
}