
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



// void pattern2_a(int n){

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

// pattern2_a(n);


//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// void pattern2_b(int n){
//     for(int i = 0; i<n; i++){
//         for(int j = i; j<n; j++){
//             cout << "* ";

//         }
//         cout << endl;
//     }
// }


// int main(){
  
//         int n;
//         cin >> n;
//         pattern2_b(n);
    
// }




// pattern 3


// #include <bits/stdc++.h>

// using namespace std;


// void pattern3(int n){
//     for (int i = 1; i <= n ; i ++ ){
//         for (int j = 1; j <= i; j ++ ){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// int main(){
// int t;
// cin >> t;
// for (int i = 0; i <= t; i ++){
//     int n;
//     cin >> n;
//     pattern3(n);
// }
// }







// rules for patterns 

// 1 for outer loop , count no of rows / lines 

// 2 for inner loop , focus on columns and somehow connect them to the rows 

// 3 print the "* " inside the inner for loop 

// 4 observe symmetry (optional)


// pattern 4 with test cases 
// #include <bits/stdc++.h>

// using namespace std;


// void pattern4(int n){
//     for (int i = 1; i <= n ; i ++ ){
//         for (int j = 1; j <= i; j ++ ){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// int main(){
// int t;
// cin >> t;
// for (int i = 0; i <= t; i ++){
//     int n;
//     cin >> n;
//     pattern4(n);
// }
// }

// pattern 5 with test cases


// #include <bits/stdc++.h>
// using namespace std;

// void pattern5(int n){
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout << i << " ";
//         }
//       cout << endl;

//     }
// }


// int main(){
//     int t; 
//     cin >> t;
//     for (int i = 0; i<t;i++){

//         int n;
//         cin >> n;
//         pattern5(n);
//     }
// }

// pattern 6 with test cases


// #include <bits/stdc++.h>
// using namespace std;

// void pattern6(int n){
//     for (int i = 1; i<=n; i++){
//         for(int j = 0; j < n - i + 1; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }


// int main(){

//     int t;
//     cin >> t;
//     for(int i=0;i <t; i++){
//         int n;
//         cin >> n;
//         pattern6(n);
//     }
// }



// pattern 7 




// #include <bits/stdc++.h>
// using namespace std;

// void pattern7(int n){
//     for (int i = 0; i<=n; i++){
//         for(int j = 1; j < n - i + 1; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }


// int main(){

//     int t;
//     cin >> t;
//     for(int i=0;i <t; i++){
//         int n;
//         cin >> n;
//         pattern7(n);
//     }
// }




// pattern 8


// #include <bits/stdc++.h>
// using namespace std;

// void pattern8(int n){
//     for (int i = 0; i<=n; i++){
//         //space
//         for(int j = 0; j < n - i + 1; j++){
//             cout << " ";
//         }
//         //star
//         for(int j = 0; j < 2*i+1; j++){
//             cout << "*";
//         }
//         // space 
//          for(int j = 0; j < n - i + 1; j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }


// int main(){

//     int t;
//     cin >> t;
//     for(int i=0;i <t; i++){
//         int n;
//         cin >> n;
//         pattern8(n);
//     }
// }

// pattern 9
 
// #include <bits/stdc++.h>
// using namespace std;

// void pattern9(int n){
//     for (int i = 0; i<=n; i++){
//         //space
//         for(int j = 0; j < i; j++){
//             cout << " ";
//         }
//         //star
//         for(int j = 0; j < 2 * n - (2*i+1); j++){
//             cout << "*";
//         }
//         // space 
//          for(int j = 0; j < i; j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }


// int main(){

//     int t;
//     cin >> t;
//     for(int i=0;i <t; i++){
//         int n;
//         cin >> n;
//         pattern9(n);
//     }
// }



// pattern 10

// #include <bits/stdc++.h>
// using namespace std;

// void pattern8(int n){
//     for (int i = 0; i<=n; i++){
//         //space
//         for(int j = 0; j < n - i + 1; j++){
//             cout << " ";
//         }
//         //star
//         for(int j = 0; j < 2*i+1; j++){
//             cout << "*";
//         }
//         // space 
//          for(int j = 0; j < n - i + 1; j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// void pattern9(int n){
//     for (int i = 0; i<=n; i++){
//         //space
//         for(int j = 0; j < i; j++){
//             cout << " ";
//         }
//         //star
//         for(int j = 0; j < 2 * n - (2*i+1); j++){
//             cout << "*";
//         }
//         // space 
//          for(int j = 0; j < i; j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }


// int main(){

//     int t;
//     cin >> t;
//     for(int i=0;i <t; i++){
//         int n;
//         cin >> n;
//         pattern8(n);
//         pattern9(n);
//     }
// }



//pattern 11 
// #include <bits/stdc++.h>

// using namespace std;


// void pattern11(int n){

//     for(int i = 1; i<=2*n-1; i++){
//         int stars = i;
//         if(i > n) stars = 2*n-i;
//         for (int j = 1; j<=stars; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int t;
//     cin >> t;
//     for(int i = 0; i < t; i++){
//         int n;
//         cin >> n;
//         pattern11(n);
//     } 
// }




// pattern 12 
#include <bits/stdc++.h>

using namespace std;


void pattern12(int n){
    int start = 1;
    for(int i = 0; i<n; i++){
        
        if(i % 2 == 0) start = 1;
        else start = 0;
        for (int j = 0; j <= i; j++){
            cout << start;
            start = 1- start;
        }
        cout << endl;
    }
}
int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        pattern12(n);
    } 
}


