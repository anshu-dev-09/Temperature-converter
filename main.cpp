#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void printHeader() {
    cout << "\n";
    cout << "  ╔════════════════════════════════════════════════════╗\n";
    cout << "  ║          PRO TEMPERATURE CONVERTER v2.0            ║\n";
    cout << "  ╚════════════════════════════════════════════════════╝\n";
}

void printResults(double c, double f, double k) {
    cout << "\n";
    cout << "  ┌────────────────────────────────────────────────────┐\n";
    cout << "  │                 CONVERSION RESULTS                 │\n";
    cout << "  ├────────────────────────────────────────────────────┤\n";
    cout << "  │  Celsius    (°C) : " << setw(20) << left << fixed << setprecision(2) << c << "          │\n";
    cout << "  │  Fahrenheit (°F) : " << setw(20) << left << fixed << setprecision(2) << f << "          │\n";
    cout << "  │  Kelvin      (K) : " << setw(20) << left << fixed << setprecision(2) << k << "          │\n";
    cout << "  └────────────────────────────────────────────────────┘\n";
}

int main() {
    double temp;
    char unit;
    
    while (true) {
        printHeader();
        cout << "\n  Enter temperature followed by unit (C, F, or K).\n";
        cout << "  Example: 37 C, 98.6 F, 300 K\n";
        cout << "  Enter '0 Q' to quit the program.\n\n";
        cout << "  >> Input: ";
        
        if (!(cin >> temp >> unit)) {
            cout << "  [!] Invalid input format. Please try again.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        unit = toupper(unit);

        if (unit == 'Q') {
            cout << "\n  Shutting down converter... Goodbye!\n";
            break;
        }

        double celsius, fahrenheit, kelvin;

        switch (unit) {
            case 'C':
                celsius = temp;
                fahrenheit = (temp * 9.0 / 5.0) + 32.0;
                kelvin = temp + 273.15;
                printResults(celsius, fahrenheit, kelvin);
                break;
            case 'F':
                celsius = (temp - 32.0) * 5.0 / 9.0;
                fahrenheit = temp;
                kelvin = celsius + 273.15;
                printResults(celsius, fahrenheit, kelvin);
                break;
            case 'K':
                celsius = temp - 273.15;
                fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
                kelvin = temp;
                if (temp < 0) {
                     cout << "  [!] Warning: Kelvin temperature cannot be below absolute zero (0 K).\n";
                } else {
                     printResults(celsius, fahrenheit, kelvin);
                }
                break;
            default:
                cout << "  [!] Invalid unit '" << unit << "'. Please use C, F, or K.\n";
        }
        
        cout << "\n  Press Enter to continue...";
        cin.ignore(10000, '\n');
        if (cin.peek() == '\n') cin.get();
    }

    return 0;
}
