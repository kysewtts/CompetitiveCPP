//
// Created by Ujjwal Prakash on 21/02/21.
// CodeChef ID - FCTRL
//
#include <iostream>
#include <cstdlib>

using namespace std;

int findZeros(int n){
    int count = 0, i = 5;
    while(n/i >= 1){
        count += n/i;
        i *= 5;
    }
    return count;
}

int main() {
    int T, *ptr, i, n, res;
    cin >> T;
    ptr = (int *)malloc(T * sizeof(int));
    for(i=0; i<T; i++) {
        cin >> n;
        *(ptr + i) = n;
    }
    for(i=0; i<T; i++){
        res = findZeros(*(ptr + i));
        cout<<res<<"\n";
    }
    free(ptr);
    return 0;
}
