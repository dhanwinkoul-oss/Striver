
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



// right half pyramid or (right angled triangle)


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

#include <bits/stdc++.h>

using namespace std;



void pattern3 (int n){

    for (int i; i <= n; i--){

        for(int j; j <= i; j++){
            cout << "*" << " " << endl;
        }
        cout << endl;
    }
}


int main(){
    int n;
    cin >> n;

pattern3(n);


    return 0;
}

















