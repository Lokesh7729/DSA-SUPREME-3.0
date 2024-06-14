#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"enter number: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int totalCol=i+1;
        for (int j = 0; j < totalCol; j++)
        {
            if (i==0 || i==1 || i==n-1 || j==0 || j==totalCol-1){
               cout<<j+1<<" ";
            }
            else{
                cout<<"  ";
            }
        }
    cout<<endl;
    }
}