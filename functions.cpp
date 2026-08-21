//  here we will be studying the call/pass by value and reference 


#include <bits/stdc++.h>

using namespace std;

void printName(string name) {
    cout << "HEY " << name << endl;
}


int main (){
string name;
cin >> name;

printName(name);


string name2;
cin >> name2;

printName(name2);
    return 0;
}