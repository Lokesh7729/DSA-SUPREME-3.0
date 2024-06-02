#include<iostream>
using namespace std;

int main(){
    int length, width;
    cout<<"enter length: ";
    cin>>length;
    cout<<"enter width ";
    cin>>width;

    for (int  row = 0; row < length; row++)
    {
        for (int col = 0; col < width; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
            
    }
    



    return 0;
}