# Pro Temperature Converter v2.0

**INTERN ID - CITS6602**

## Description

This upgraded C++ temperature converter features a modern, streamlined console interface. Instead of tedious menus, users input a value alongside its unit (e.g., '37 C'). The tool instantly parses the input and elegantly displays Celsius, Fahrenheit, and Kelvin conversions in an ASCII table.

## Features

- **Streamlined Input Parsing**: Simply type your temperature and unit together (like `98.6 F` or `300 K`) for instant processing.
- **Unified Results Table**: No more digging through menus. The application instantly computes and displays all three temperature scales (Celsius, Fahrenheit, and Kelvin) simultaneously in a clean ASCII table.
- **Robust Error Handling**: Safely catches invalid formats and warns against impossible temperatures (like negative Kelvin).
- **Continuous Execution**: Generates results seamlessly in a loop without requiring program restarts.

## Prerequisites

To run this converter, you will need:
- A modern C++ compiler (like `g++`, `clang++`, or MSVC)

## How to Build and Run

1. **Clone the repository**:
   ```bash
   git clone <your-repository-url>
   cd <repository-directory>
   ```

2. **Compile the code**:
   Using `g++`:
   ```bash
   g++ -o temp_v2 main.cpp
   ```

3. **Run the executable**:
   - On Windows:
     ```bash
     .\temp_v2.exe
     ```
   - On Linux/macOS:
     ```bash
     ./temp_v2
     ```

## License

This project is open-source and available under the [MIT License](LICENSE).
