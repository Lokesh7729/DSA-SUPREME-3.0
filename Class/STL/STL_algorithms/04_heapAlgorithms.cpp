#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(12);
    arr.push_back(13);
    arr.push_back(15);
    arr.push_back(20);

    // max heap
    make_heap(arr.begin(), arr.end());

    // for(int a: arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;
    arr.push_back(99);
    push_heap(arr.begin(), arr.end());

    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;

    // deletion
    pop_heap(arr.begin(), arr.end());
    arr.pop_back();
    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;


    // sort heap  0(n)
    sort_heap(arr.begin(),arr.end());
    

    return 0;
}
