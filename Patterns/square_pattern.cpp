#include<iostream>
using namespace std;

int main(){
    int side;
    cout<<"enter side: ";
    cin>>side;
    for (int row = 0; row <side ; row++)
 {
        // inner loop 
        for (int col = 0; col < side; col++)
        {
            // every single column -> single star
            cout<<"* ";
        }
        // every 4 line we go to next line 
        cout<<endl;
    }
    
return 0;
}