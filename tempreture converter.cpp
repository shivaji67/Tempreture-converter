#include <iostream>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    int choice;
    double temperature, convertedTemperature;

    std::cout << "Temperature Converter" << std::endl;
    std::cout << "1. Convert Celsius to Fahrenheit" << std::endl;
    std::cout << "2. Convert Fahrenheit to Celsius" << std::endl;
    std::cout << "Enter your choice (1 or 2): ";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> temperature;
        convertedTemperature = celsiusToFahrenheit(temperature);
        std::cout << "Temperature in Fahrenheit: " << convertedTemperature << "°F" << std::endl;
    } else if (choice == 2) {
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> temperature;
        convertedTemperature = fahrenheitToCelsius(temperature);
        std::cout << "Temperature in Celsius: " << convertedTemperature << "°C" << std::endl;
    } else {
        std::cout << "Invalid choice. Please restart the program and select either 1 or 2." << std::endl;
    }

    return 0;
}
