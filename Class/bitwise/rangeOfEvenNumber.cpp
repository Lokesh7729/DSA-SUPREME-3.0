#include<iostream>
using namespace std;

void rangeOfEvenNumber(int start, int end){
    for (int i = start ; i  <=end; i++)
    {
        int number=i;
        if (!(number&1))
        {
            cout<<number<<" ";
        }
    }
}
int main(){
    int start,end;
    cout<<"enter any number";
    cin>>start>>end;
    rangeOfEvenNumber(start,end);
}