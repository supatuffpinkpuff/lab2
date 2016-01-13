//
// Created by Kirby on 1/13/2016.
//

double calc() {
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