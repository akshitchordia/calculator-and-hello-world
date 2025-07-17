#include <iostream>
using namespace std;

// Name - Akshit Chordia
// PRN - 24070123007
// Batch - EnTC - A1

int main() {
    float n1, n2, add, sub, multi, divi;

    cout << "Enter First number: ";
    cin >> n1;

    cout << "Enter Second Number: ";
    cin >> n2;

    add = n1 + n2;
    cout << "The addition is: " << add << endl;

    sub = n1 - n2;
    cout << "The subtraction is: " << sub << endl;

    multi = n1 * n2;
    cout << "The multiplication is: " << multi << endl;

    if (n2 == 0) {
        cout << "Division by 0 is not possible" << endl;
    } else {
        divi = n1 / n2;
        cout << "The division is: " << divi << endl;
    }

    return 0;
}
//output
//Enter First number: 45
//Enter Second Number: 43
//The addition is: 88
//The subtraction is: 2
//The multiplication is: 1935
//The division is: 1.04651

}

//output
//
