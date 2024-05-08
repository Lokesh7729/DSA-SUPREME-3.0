#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        
        int totalColumns= row+1;
        for (int col = 0; col < totalColumns; col++)
        {
            if (row==0 || row==1 || row==n-1)
            {
                cout<<"* ";
            }
            else{
                if (col==0 || row==col || totalColumns-1)
                {
                    cout<<"* ";
                }else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    
}