//
// Created by Kirby on 1/13/2016.
//
// Odd or Even Checker

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
    rem = remainder(num,2);
    switch (rem){
        case 0:
            cout << num << "is even.";
        case 1:
            cout << num << "is odd.";
        }

}
