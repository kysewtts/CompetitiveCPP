//
// Created by Ujjwal Prakash on 15/02/21.
// CodeChef ID - HS08TEST
//
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int withdraw;
    float balance;
    cin >> withdraw >> balance;
    cout << fixed;
    if (withdraw % 5 == 0 && balance >= (withdraw + 0.5)) {
        cout << setprecision(2) << balance - withdraw - 0.5 << "\n";
    } else {
        cout << setprecision(2) << balance << "\n";
    }
    return 0;
}
