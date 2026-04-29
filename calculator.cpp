#include <iostream>
#include <cmath>
#include <stack>
using namespace std;

// Calculator class
class Calculator {
public:
    // Perform basic arithmetic operations
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero!" << endl;
            return NAN;  // Return NaN for division by zero
        }
    }

    // Additional functions
    double squareRoot(double a) {
        if (a < 0) {
            cout << "Error: Negative input for square root!" << endl;
            return NAN;
        }
        return sqrt(a);
    }

    double power(double base, double exponent) {
        return pow(base, exponent);
    }

    double logarithm(double a) {
        if (a <= 0) {
            cout << "Error: Logarithm of zero or negative number!" << endl;
            return NAN;
        }
        return log(a);
    }

    double sine(double angle) {
        return sin(angle);
    }

    double cosine(double angle) {
        return cos(angle);
    }

    double tangent(double angle) {
        return tan(angle);
    }

    // Memory store functionality
    void memoryStore(double value) {
        memory.push(value);
    }

    double memoryRecall() {
        if (!memory.empty()) {
            return memory.top();
        } else {
            cout << "No value in memory!" << endl;
            return NAN;
        }
    }

    void memoryClear() {
        if (!memory.empty()) {
            memory.pop();
        }
    }

private:
    stack<double> memory; // Memory stack to store values
};

int main() {
    Calculator calc;
    int choice;
    double num1, num2;

    do {
        cout << "\nAdvanced C++ Calculator\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Square Root\n";
        cout << "6. Power\n";
        cout << "7. Logarithm (base e)\n";
        cout << "8. Sine\n";
        cout << "9. Cosine\n";
        cout << "10. Tangent\n";
        cout << "11. Memory Store\n";
        cout << "12. Memory Recall\n";
        cout << "13. Memory Clear\n";
        cout << "14. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << calc.add(num1, num2) << endl;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << calc.subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << calc.multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << calc.divide(num1, num2) << endl;
            break;
        case 5:
            cout << "Enter a number: ";
            cin >> num1;
            cout << "Square root: " << calc.squareRoot(num1) << endl;
            break;
        case 6:
            cout << "Enter base and exponent: ";
            cin >> num1 >> num2;
            cout << "Result: " << calc.power(num1, num2) << endl;
            break;
        case 7:
            cout << "Enter a number: ";
            cin >> num1;
            cout << "Logarithm: " << calc.logarithm(num1) << endl;
            break;
        case 8:
            cout << "Enter angle in radians: ";
            cin >> num1;
            cout << "Sine: " << calc.sine(num1) << endl;
            break;
        case 9:
            cout << "Enter angle in radians: ";
            cin >> num1;
            cout << "Cosine: " << calc.cosine(num1) << endl;
            break;
        case 10:
            cout << "Enter angle in radians: ";
            cin >> num1;
            cout << "Tangent: " << calc.tangent(num1) << endl;
            break;
        case 11:
            cout << "Enter a value to store in memory: ";
            cin >> num1;
            calc.memoryStore(num1);
            cout << "Value stored in memory." << endl;
            break;
        case 12:
            cout << "Memory Recall: " << calc.memoryRecall() << endl;
            break;
        case 13:
            calc.memoryClear();
            cout << "Memory cleared." << endl;
            break;
        case 14:
            cout << "Exiting calculator. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
            break;
        }

    } while (choice != 14);

    return 0;
}