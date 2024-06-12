#include<iostream>
using namespace std;

void rangeOfOddNumber(int start, int end){
    for (int i = start ; i  <=end; i++)
    {
        int number=i;
        if (number&1)
        {
            cout<<number<<" ";
        }
    }
}
int main(){
    int start,end;
    cout<<"enter start number: ";
    cin>>start;
    cout<<"enter end number: ";
    cin>>end;
    rangeOfOddNumber(start,end);
}