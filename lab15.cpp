#include<iostream>
using namespace std;

// Function prototypes


double factorial(int);


void getInfo(int&pick1, int &pick2) {
    do {
        cout << "How many balls (1-12) are in the pool to pick from? ";
        cin >> pick1;

        if (pick1 < 1 || pick1 > 12) {
            cout << "Input Error! There must be between 1 and 12 balls.\n";
        }
    } while (pick1 < 1 || pick1 > 12);
    do {
        cout << "How many balls (1-7) will be drawn? ";
        cin >> pick2;

        if (pick2 < 1 || pick2 > 7) {
            cout << "Input Error! must be between 1 and 7!\n";
        }
    } while (pick2 < 1 || pick2 > 7);
}

double computeWays(int n, int k) {
    return factorial(k) * factorial(n - k) / factorial(n);
}
double factorial (int num) {
    cin >> num;
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}




