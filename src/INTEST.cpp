//
// Created by Ujjwal Prakash on 16/02/21.
// CodeChef ID - INTEST
//
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, i, val, count = 0;
    cin >> n >> k;
    for (i = 0; i < n; i++) {
        cin >> val;
        if (val % k == 0) {
            count += 1;
        }
    }
    cout << count << "\n";
    return 0;
}