#include <iostream> 
using namespace std;
int main() {
    double celsius;
    cin >> celsius;
    double fahrenheit = (celsius * 9.0 / 5.0) + 32;
     cout << "The temperature in Fahrenheit is equal to " << fahrenheit << endl;

    return 0;
}