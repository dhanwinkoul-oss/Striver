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


// #include <bits/stdc++.h>

// using namespace std;

// void doSomething(int &num){
// cout << num << endl;
// num += 5;
// cout << num << endl;
// num += 5;
// cout << num << endl;

    
// }

// int main(){
// int num = 13;
// doSomething(num);

// cout << num << endl;


// return 0;
// }



// some more example 

// #include <bits/stdc++.h>

// using namespace std;


// void doSomething(int &num){


// }


// int main (){



//     int arr[5];
//     for (int i = 0; i <= 4; i = i + 1 ){
//      cout << i << endl;
//        cin >> arr[i];
//     }
    
//     for (int i = 0; i <= 4; i = i + 1 ){
     
//     cout << arr[i] << " ";
//     }





//     return 0;


// }


//  a better way to write this code 


#include <bits/stdc++.h>

using namespace std;


void doSomething(int arr[] , int n) {
arr [0] += 100;
cout << "value inside function :" << arr[0] << endl;

}


int main(){

    int n = 7;
    int arr [n];
    for (int i = 0; i <= n; i = i + 1){
    cin >> arr [i];
}


   doSomething(arr , n);
   cout << "value inside int main :" << arr[0] << endl;
   return 0;
}

































