// // PASS BY REFERENCE FUNCTIONS 

// #include <bits/stdc++.h>
// using namespace std;


//  // just by adding and symbol to the start it becomes pass by reference functions
// void doSomething(string &s){
//     s[0] = 't';
//     cout << s << endl;
// }

// int main(){

// string s = "raj";
// doSomething(s);
// cout << s << endl;




// return 0;
// }


// more example 


#include <bits/stdc++.h>

using namespace std;

void doSomething(int &num){
cout << num << endl;
num += 5;
cout << num << endl;
num += 5;
cout << num << endl;

    
}

int main(){
int num = 13;
doSomething(num);

cout << num << endl;


return 0;
}













































