//  here we will be studying the call/pass by value and reference 


// #include <bits/stdc++.h>

// using namespace std;

// void printName(string name) {
//     cout << "HEY " << name << endl;
// }


// int main (){
// string name;
// cin >> name;

// printName(name);


// string name2;
// cin >> name2;

// printName(name2);
//     return 0;
// }




// take 2 num as input and print their sum : 

// #include <bits/stdc++.h>
// using namespace std;

// int sum(int num1 , int num2){
// int num3 = num1 + num2;
// return num3;

// }
  
// int main(){

//     int num1 , num2;
//     cin >> num1 >> num2;
//     int result = sum(num1 , num2);


//     cout << "result is " << result << "\n";
//     return 0;
// }



// now if we had don eit using void return type ::


#include <bits/stdc++.h>
using namespace std;

void sum(int num1 , int num2){
int num3 = num1 + num2; // x + y = z example
cout <<  "result is " << num3;

}
  
int main(){

    int num1 , num2;
    cin >> num1 >> num2;
    sum(num1 , num2);


    return 0;
}
