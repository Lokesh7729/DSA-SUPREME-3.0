#include<iostream>
#include<list>
using namespace std;

int main(){
    // creating list
    list<int> myList;

    // insertion
    // push_back()
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);

    // 10-> 20 -> 30 -> 40 

    // push_front()
    myList.push_front(50);
    // 50 -> 10-> 20 -> 30 -> 40 

    // pop_front()  
    myList.pop_front();
    // 10-> 20 -> 30 -> 40 

    // pop_back()
    myList.pop_back();
    // 10-> 20 -> 30

    // front
    cout<<myList.front()<<endl;
    // back
    cout<<myList.back()<<endl;

    myList.push_back(10);
    // 10-> 20 -> 30 -> 10


    // traversing list
    cout<<"before removing : "<<endl; 
    list<int>::iterator it= myList.begin();
    while (it != myList.end())  
    {
        cout<< *it << " ";
        it++;
    }

    myList.remove(10);

    cout<<endl;
    cout<<"after removing : "<<endl; 
    list<int>::iterator it2= myList.begin();
    while (it2 != myList.end())  
    {
        cout<< *it2 << " ";
        it2++;
    }





    // cout<<myList.size()<<endl;
    // myList.clear();
    // cout<<myList.size()<<endl;

    // if (myList.empty()== true)      
    // {
    //     cout<<"List is empty "<<endl;
    // }else{
    //     cout<<"List is not empty"<<endl;
    // }

    list <int> first;
    first.push_back(10);
    first.push_back(11);
    first.push_back(12);
    first.push_back(13);

    // 10 11 12 13 

    list <int>second;

    second.push_back(100);
    second.push_back(110);
    second.push_back(120);
    second.push_back(130);

    // 100 110 120 130


    cout<<endl;
    cout<<"before swaping : "<<endl; 
    list<int>::iterator it3= first.begin();
    while (it3 != first.end())  
    {
        cout<< *it3 << " ";
        it3++;
    }
     

     first.swap(second);


 cout<<endl;
    cout<<"after swaping : "<<endl; 
    list<int>::iterator it4= first.begin();
    while (it4 != first.end())  
    {
        cout<< *it4 << " ";
        it4++;
    }
    // insert
    first.insert(first.begin(),10);
      cout<<"after inserting : "<<endl; 
    list<int>::iterator it5= first.begin();
    while (it5 != first.end())  
    {
        cout<< *it5 << " ";
        it5++;
    }

    return 0;
}