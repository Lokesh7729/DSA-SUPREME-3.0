#include<iostream>
using namespace std;

void print(int ar[], int size){

}

int main(){
    int arr[10];

    int crr[]= {10,20,30,40};

    int drr[4]={0};

    cout<<drr[0]<<endl;
    cout<<crr[3]<<endl;

    // fill method in arrays 

    int arrr[4];
    fill(arrr,arrr+4,23);
    cout<<arrr[0]<<" ";
    cout<<arrr[1]<<" ";
    cout<<arrr[2]<<" ";
    cout<<arrr[3]<<" "<<endl;



    // input from user

    int array[5];

    for (int i = 0; i < 5; i++)    
    {
        cout<<"enter the value for box index "<< i<<" :";
        cin>>array[i];
    }
    
    for (int i = 0; i < 5; i++) 
    {
        cout<<i[array]<<" ";
    }
 


    // 



    int ar[]={10,20,30,40,50};
    int size=5;

    print(ar,size);



    return 0;
}