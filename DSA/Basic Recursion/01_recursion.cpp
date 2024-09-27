// * Recursion -> When a function call itself until a specifed condition is met .
// ? non ending recursion -> no condition to stop -> stack overflow -> Segmentation Fault error
// ( recursion tree )
// base case

#include<iostream>
using namespace std;

int cnt = 0;

void print(){
   
   // Base Condition.
   if(cnt == 3)  return;
   cout<<cnt<<endl;

   // Count Incremented
   cnt++;
   print();

}

int main(){
    print();
  return 0;
}