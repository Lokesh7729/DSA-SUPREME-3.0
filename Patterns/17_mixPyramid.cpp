#include<iostream>
using namespace std;

int main(){

    int n=4;

    for (int i = 0; i <n; i++)
    {
        // 1 stars
        for (int j = 0; j < n-i; j++)
        {
           cout<<"* ";
        }

        for (int j = 0; j < 2*i+1; j++)
        {
            cout<<"  ";
        }
        

        // 3 . stars
        for (int j = 0; j < n-i; j++)
        {
           cout<<"* ";
        }
    cout<<endl;
    }


    // part -2 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i +1; j++)
        {
            cout<<"* ";
        }
        for (int j = 0; j < 2*(n-i)-1; j++)
        {
            cout<<"  ";
        }
        for (int j = 0; j < i +1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    

}