#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){


    vector<int>arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(5);
    arr.push_back(30);
    arr.push_back(40);
    // min element 
    auto min=  min_element(arr.begin(),arr.end());
    cout<< *min <<endl;

    // max element 
    auto max = max_element(arr.begin(),arr.end());
    cout<<*max<<endl; 





    return 0;
}