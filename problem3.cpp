#include <iostream>
#include <cmath>  
int main() {
    double celsius;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    fahrenheit = std::round(fahrenheit * 10) / 10;
    std::cout << "The temperature in Fahrenheit is equal to " << fahrenheit << std::endl;
    return 0;
}