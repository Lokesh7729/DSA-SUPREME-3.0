#include<iostream>
using namespace std;

void fancyPattern12(int n){

    cout<<"you number is " << n<<endl;

    //  outerloop
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*(i)+1; j++)
        {
           if (j%2==0)
           {
            cout<<i+1;
           }else{
            cout<<" * ";
           }  
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    fancyPattern12(n);
}