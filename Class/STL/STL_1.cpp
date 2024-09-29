#include<iostream>
using namespace std;

void fun(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    
}

void print(vector<int>v){
    int size= v.size();
    for (int i = 0; i < size; i++)
    {
        cout<<v[i]<<endl;
    }
    
}

int main (){
    // int n;
    // cin>>n;
    // int *arr = new int[n]; // each element be 0 , or garbage 
    // for (int i = 0; i < n; i++)
    // {
    //     int data;
    //     cin>>data;
    //     arr[i]=data;
    // }
    // fun(arr,n);

    // vector initialization 
    vector<int>v;
    vector<int>arr2(5,-1); // init with n size with specific data 
    // arr2.push_back(50);
    // print(arr2);
   
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

   // i want to clear the vector
//    print(v);
//    v.clear();
//    print(v);


}