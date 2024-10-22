// * 1) Print Name 5 Times

#include<iostream>
using namespace std;
// int cnt=1;

// void one(string name){
//     if (cnt==6)  return;
//     cout<<"Good morning "<<name<<endl;
//     cnt++;
//     one(name);
    
// }
// int main(){
    // string name;
    // cout<<"enter your name : ";
    // cin>>name;
    // one(name);

// }

// void j(int i ,int n ){
//     if (i>n) 
//     {
//         return;
//     }
//     cout<<"Lokesh"<<endl;
//     j(i+1,n);
    
// }

// int main(){
//     int n;
//     cin>>n;
//     j(1,n);
// }

// * print (1-n ) 

// void j(int i ,int n ){
//     if (i>n) 
//     {
//         return;
//     }
//     cout<<i<<endl;
//     j(i+1,n);
    
// }

// int main(){
//     int n;
//     cin>>n;
//     j(1,n);
// }

// * print ( n -> 1 )

// void j(int i ,int n ){
//     if (i<1) 
//     {
//         return;
//     }
//     cout<<i<<endl;
//     j(i-1,n); 
// }
// int main(){
//     int n;
//     cin>>n;
//     j(n,n);
// }


#include<iostream>
using namespace std;

void call(int i, int n) {
    // Base case: if i becomes greater than n, stop the recursion
    if (i > n) {
        return; // Exit the function when i exceeds n
    }
    cout << "lokesh" << endl; 
    // Print "lokesh" once for the current call

    call(i + 1, n); 
    // Recursive call: increment i by 1 and call the function again until i exceeds n
}

int main() {
    int n;
    cout << "Enter any number: "; 
    // Prompt the user to enter a number
    
    cin >> n; 
    // Store the user input in variable 'n'

    call(1, n); 
    // Call the recursive function with i starting at 1, and n as the limit

    return 0; 
    // End the program
}

/* 

call(1, 3) prints "lokesh", then calls call(2, 3)
call(2, 3) prints "lokesh", then calls call(3, 3)
call(3, 3) prints "lokesh", then calls call(4, 3)
call(4, 3) hits the base case (i > n), and the recursion stops.

*/