#include<iostream>
using namespace std;

// Function prototypes
void getInfo(int&, int&);
double computeWays(int, int);
double factorial(int);

/*******************************************************************
* getLotteryInfo                                                   *
* Gets and validates lottery info from the user and places it in   *
* reference parameters referencing variables in the main function. *
********************************************************************/
void getInfo(int&pick1, int &pick2) {
    do {
        cout << "How many balls (1-12) are in the pool to pick from? ";
        cin >> pick1;

        if (pick1 < 1 || pick1 > 12) {
            cout << "Input Error! There must be between 1 and 12 balls.";
        }
    } while (pick1 < 1 || pick1 > 12);
    do {
        cout << "How many balls (1-7) will be drawn? ";
        cin >> pick2;
    } while (pick2 < 1 || pick2 > 12);
}

/*******************************************************************
* computeWays                                                      *
* Computes and returns the number of different possible sets       *
* of k numbers that can be chosen from a set of n numbers.         *
* The formula for this is     k!(n- k)!                            *
*                             --------                             *
*                                 n!                               *
* Note that the computation is done in a way that does not require *
* multiplying two factorials together. This is done to prevent any *
* intermediate result becoming so large that it causes overflow.   *
********************************************************************/

double computeWays(int n, int k) {
    return factorial(k) * factorial(n - k) / factorial(n);
}
double fact(int num) {
    if (num == 0) {
        return 1;
    } else if (num > 0) {
        return num * factorial(num - 1);
    }
}

/*******************************************************************
* factorial                                                        *
* This function computes factorials recursively.                   *
*******************************************************************/


