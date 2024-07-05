#include<iostream>
#include<vector>
#include<forward_list>
using namespace std;

int main(){
    
    // // iterator revision
    // vector<int> arr;
    // arr.push_back(10);
    // arr.push_back(40);
    // arr.push_back(30);

    // // traversing using iterator

    // vector<int>::iterator itr= arr.begin();

    // while (itr!= arr.end())
    // {
    //     cout<<  *itr << " ";
    //     itr++;
    // }
    


    // forward iterator

    forward_list<int>list;

    list.push_front(10);
    list.push_front(20);
    list.push_front(30);
    list.push_front(40);


    // traverse using iterator

    forward_list<int>::iterator it = list.begin();
  
    while (it!= list.end())
    {
        (*it)= (*it)+5; 
        it++;
    }
    it= list.begin();
    while (it!= list.end())
    {
        cout<<*it<< " ";
        it++;
    }
    









    return 0;
}