// FEATURES

// 1.> contiguous memory
// 2.> dynamic sizing
// 3.> auromatic reallocation
// 4.> size and capacity
// 4.> array like access



#include<iostream>
using namespace std;
#include<vector>

void print2(vector<int>v){
    cout<<"printing vector method "<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
}

void print(vector<int>v){
    int size=v.size();
    for (int i = 0; i < size; i++)
    {
        cout<<v[i]<<endl;
    }   
}

int main(){

    vector<int>v;
    // inserting
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    // deleting
    v.pop_back();

    //printing
    print2(v);

    // clear the vector

    v.clear();

    //how to copy vector
    // vector<int> arr1={1,2,3,4,5};
    // vector<int>arr2(arr1);

    // print(arr2);  


    cout<<"Front element : "<<v[0]<<endl;
    cout<<"Front element : "<<v.front()<<endl;
    cout<<"Last element : "<<v[v.size()-1]<<endl;
    cout<<"Last element : "<<v.back()<<endl;


    
}