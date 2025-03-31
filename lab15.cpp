#include<iostream>
using namespace std;

// Function prototypes


double factorial(int);


void getInfo(int&pick1, int &pick2) {
    cout << "How many balls (1-12) are in the pool to pick from? ";
    cin >> pick1;

    while (pick1 < 1 || pick1 > 12 || cin.fail()) {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Input Error! There must be between 1 and 12 balls.\n";
        cout << "How many balls (1-12) are in the pool to pick from? ";
        cin >> pick1;
    }
    cout << "How many balls (1-" << pick1 << ") are in the pool to pick from? ";
    cin >> pick2;
    while (pick2 < 1 || pick2 > pick1 || cin.fail()) {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Input Error! There must be between 1 and 12 balls.\n";
        cout << "How many balls (1-" << pick1 << ") are in the pool to pick from? ";
        cin >> pick2;
    }
}

double computeWays(int n, int k) {
    return factorial(k) * factorial(n - k) / factorial(n);
}

double factorial (int num) {

    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}




