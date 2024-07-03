#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printDouble(int a){
    cout<< 2*a << " "; 
}

bool checkEven(int a ){
    return a%2==0;
}

int main(){
    vector<int>arr(5);
    arr[0]=10;
    arr[1]=11;
    arr[2]=12;
    arr[3]=13;
    arr[4]=14;
    arr[5]=15;

    // for_each(arr.begin(), arr.end(),printDouble);
    // int target=40;
    // vector<int> :: iterator it = find(arr.begin(),arr.end(),target);
    // auto it = find(arr.begin(),arr.end(),target);
    // cout<< *it <<endl;

    // // find_if 
    // auto it = find_if(arr.begin(),arr.end(),checkEven);
    // cout<<*it <<endl;

    // // count 
    // int target =50;
    // int ans= count (arr.begin(),arr.end(),target);
    // cout<<ans<<endl;
    
    // // count if
    // int countAns=count_if(arr.begin(),arr.end(), checkEven);
    // cout<<countAns<<endl;

    // // sort
    // sort(arr.begin(), arr.end());
    // for(int a: arr){
    //     cout<<a << " ";
    // }
    // cout<<endl;

    // // reverse
    // // reverse(arr.begin(),arr.end());  
    // for(int a : arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;
    // // rotate 

    // rotate(arr.begin(), arr.begin()+3, arr.end());
    //  for(int a : arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl; 


    //unique
    // auto it2 = unique(arr.begin(),arr.end());
    // arr.erase(it2, arr.end());
    // for(int a: arr){
    // cout<< a <<" ";
    // }

    // partition 
    auto it = partition(arr.begin(),arr.end(),checkEven);
    for (int a : arr)
    {
        cout<<a<<" ";
    }
    

    return 0;
    
}