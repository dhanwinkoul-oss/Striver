#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    // i represents the row number, starting from 1 up to n
    for(int i = 1; i <= n; i++){
        // j starts at n and goes down. 
        // In row 1, it stops at 1. In row 2, it stops at 2.
        for(int j = n; j >= i; j--){
            cout << j;
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        pattern(n);
    }
    return 0;
}