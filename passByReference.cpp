// PASS BY REFERENCE FUNCTIONS 

#include <bits/stdc++.h>
using namespace std;


 // just by adding and symbol to the start it becomes pass by reference functions
void doSomething(string &s){
    s[0] = 't';
    cout << s << endl;
}

int main(){

string s = "raj";
doSomething(s);
cout << s << endl;




return 0;
}