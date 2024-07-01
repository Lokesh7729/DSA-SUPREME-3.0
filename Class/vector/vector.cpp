#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // creation

    // cout<< *(marks.begin())<<endl;

    // vector<int> miles(10);

    // vector<int> distances(15,0);

    vector<int> marks;
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    marks.push_back(50);
    marks.push_back(50);

    // size()
    cout << "size : " << marks.size() << endl;
    // pop()
    marks.pop_back();
    cout << "size after removing element : " << marks.size() << endl;
    // front()
    cout << "front: " << marks.front() << endl;
    // back()
    cout << "back: " << marks.back() << endl;

    if (marks.empty() == true)
    {
        cout << "Vector is empty " << endl;
    }
    else
    {
        cout << "Vector is not empty" << endl;
    }
    // at
    cout << marks.at(0) << endl;

    // capacity
    cout << marks.size() << endl;
    cout << marks.capacity() << endl;

    // RESERVE()
    vector<int> vec;
    marks.reserve(10);
    cout << marks.capacity() << endl;

    // max-size
    cout << marks.max_size() << endl;

    // clear
    // marks.clear();
    // cout<<marks.size()<<endl;

    // insert
    marks.insert(marks.begin(), 50);
    cout << marks[0] << endl;

    // erase
    marks.erase(marks.begin(), marks.end());
    cout << marks.size() << endl;

    // swap
    vector<int> first;
    vector<int> second;

    first.push_back(10);
    first.push_back(11);
    first.push_back(12);
    first.push_back(13);

    // second.push_back(100);
    // second.push_back(200);
    // second.push_back(300);
    // second.push_back(400);

    // first.swap(second);

    // for each loop
    // for (int i : first)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // for (int i : second)
    // {
    //     cout << i << " ";
    // }

    // traversing the vector using iterator
    // create an iterator
    vector<int>::iterator it= first.begin();

    while (it != first.end())
    {
        cout<< *it <<" ";
        it++;
    }
    

// 2d vector

    vector<vector <int> > arr(5, vector<int> (4,0));
    int totalRows= arr.size();
    int totalColumns= arr[0].size();

    // 2d array created
    // with 5 rows
    // with 4 columns
    // with initial values of each cell as "0 "



     vector<vector<int> > brr(4);

     brr[0]= vector<int> (4);
     brr[1]= vector<int> (2);
     brr[2]= vector<int> (5);
     brr[3]= vector<int> (3);

    // int rotalrowcount= brr.size();
    // int totalcol=brr[i].size();



    return 0;
}