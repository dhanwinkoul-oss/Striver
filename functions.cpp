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


// #include <bits/stdc++.h>
// using namespace std;

// void sum(int num1 , int num2){
// int num3 = num1 + num2; // x + y = z example
// cout <<  "result is " << num3;

// }
  
// int main(){

//     int num1 , num2;
//     cin >> num1 >> num2;
//     sum(num1 , num2);


//     return 0;
// }

// functions which dont ahve a return value but have parameters

// #include <bits/stdc++.h>

// using namespace std;



// // this is an example of pass by value functions 
// void doSomething(int num){

//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }



// int main (){
//     int num = 10;
//     doSomething(num);
//     cout << num << endl; //  it will return the value 10
//     // in pass by value function the copy of original value is passed therefore printing 10 in this case
//    //The function receives a copy of the argument. Changes made inside the function don't affect the original variable.

//     return 0;
// }

// some more examples 

// #include <bits/stdc++.h>


// using namespace std;


// void doSomething(string s){
//     s[0] = 't';
//     cout << s << endl;

// }


// int main()
// {
    
//  string s = "raj";
//  doSomething(s);  // it will return the original value of s ie raj also along with the 
 
//  // changed value of s to taj  
 
//  cout << s << endl;


// return 0;
// }







