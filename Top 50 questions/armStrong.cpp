#include <iostream>
#include <cmath>
using namespace std;

// Better name: counts the number of digits
int countDigits(int num) {
    if (num == 0) return 1;          // Special case for 0
    if (num < 0) return countDigits(-num);  // Handle negative by making positive
    
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

bool isArmstrongNumber(int number) {
    if (number < 0) return false;    // Negative numbers are not Armstrong
    
    int original = number;
    int digits = countDigits(number);
    int sum = 0;
    
    while (number > 0) {
        int digit = number % 10;
        
        // Manual power calculation to avoid floating-point issues
        int powered = 1;
        for (int i = 0; i < digits; i++) {
            powered *= digit;
        }
        
        sum += powered;
        number /= 10;
    }
    
    // Special case for 0
    if (original == 0) return true;
    
    return sum == original;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if (isArmstrongNumber(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is NOT an Armstrong number." << endl;
    }
    
    return 0;
}