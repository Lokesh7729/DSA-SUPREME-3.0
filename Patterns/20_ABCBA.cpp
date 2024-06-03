#include<iostream>
using namespace std;
void ABCBA(int n){

    for (int i = 0; i < n; i++)
    {
        char ch= 'A'; // ASCII 64 initialize  
        for (int j = 0; j < i+1; j++){
            cout<<ch;
           ch++;
        }
        ch--;
        while (ch>'A')
        {
            ch--;
            cout<< ch;
    
        }
        




        cout<<endl;
        
    }   
}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    ABCBA(n);
}