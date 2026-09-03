
// square fill pattern 


// #include <iostream>
// using namespace std;


// // nested for loop 


// int main (){


// for(int i = 1; i <= 4; i ++){ // for loop for the rows 


// for(int j = 1; j <= 5; j ++){ // this inner for loop for columns 

//      cout << " * ";
   
// }

// cout << endl;

// }

// return 0;
// } 


// right angled triangle using function and test cases 


// #include <bits/stdc++.h>
// using namespace std;


// void print2(int n) {
//     for (int i = 0; i < n; i++){
//         for(int j = 0; j < i; j++){
//             cout <<  "* ";
//         }
//         cout << endl;
//     }
// }


// int main (){
//     int t;
//     cin >> t;
//     for(int i = 0; i < t; i++){
//         int n;

//         cin >> n;
//         print2(n);

//     }
    
// }


// right half pyramid or (right angled triangle) for 1 case only predefined 



// #include <iostream>

// using namespace std;

// int main (){

// for(int i = 1; i <= 1; i++){
// cout << " *" << endl;
// for(int j = 2; j <= 2; j++){
// cout << " *" << " " << " *" << endl;
//     for(int k = 3; k <= 3; k++){

// cout << " *" << " " << " *" << " " << " *" << endl;
        
        
//     }
//   }

  
// }


// return 0;

// }






// reversed right half pyramid or (right angled triangle)

// #include <bits/stdc++.h>

// using namespace std;



// void pattern3 (int n){

//     for (int i = n; i <= n; i--){

//         for(int j = n; j <= n; j--){
//             cout << "*" << " " << endl;
//         }
//         cout << endl;
//     }
// }


// int main(){
//     int n;
//     cin >> n;

// pattern3(n);


//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void pattern_3(int n){
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            cout << "* ";

        }
        cout << endl;
    }
}


int main(){
  
        int n;
        cin >> n;
        pattern_3(n);
    
}

