#include "eecs230.h"

//
// Lab 2 programs
//

int illegalStatements() {
    /* Start here! */
    //int double = 0;
    //double char = 2.5;
    //char mychar = 'd'; mychar += 12;
    //unsigned int a = -1;
    //int pi = 3.14;
    //short num = 1e9;
    //string mystring = 5;
    return 0;
}

void oddoreven(){
    //Getting an integer from user
    cout << "Enter an integer to check if even or odd:\n";
    int num;
    cin >> num;

    while(!(cin)) {
        cin.clear();
        cin.ignore(999, '\n');
        cout << "One of these is not an integer. Please re-enter:\n";
        cin >> num;
    }

    //Gets remainder
    int rem;
    rem = num%2;
    if (rem == 0) {
        cout << num << " is even.";
    }
    if (rem == 1) {
        cout << num << " is odd.";
    }
    }

void calc() {
    // collecting inputs
    char op;
    double one;
    double two;
    double ans;

    cout << "Enter the operation, and two numbers, separated by spaces:\n";
    cin >> op >> one >> two;
    // check which operation and calculate
    if (op == '+')
        ans = one + two;
    if (op == '-')
        ans = one - two;
    if (op == '*')
        ans = one * two;
    if (op == '/')
        ans = one / two;

    //display results

    cout << "Result:" << ans;
}

int main() {
/*    illegalStatements();
    cout << "Start with Exercise 1 (legal/illegal statements)" << endl;
    cout << "Then work on the exercises and code them up." << endl;*/

    //oddoreven();

    calc();
}

