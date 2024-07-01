#include<iostream>
#include<queue>
using namespace std;

int main(){
    // creation
    deque<int> dq;

    // insertion
    dq.push_back(10);
    // 10 
    dq.push_back(20);
    // 10 20
    dq.push_front(100);
    // 100 10 20 
    dq.push_front(200);
    // 200 100 10 20
    dq.push_front(300);
    // 300 200 100 10 20


    dq.pop_front();
    // 200 100 10 20
    dq.pop_back();
    // 200 100 10

    cout<<dq.size()<<endl;

    // front
    cout<<dq.front()<<endl;
    // back
    cout<<dq.back()<<endl;
    // empty 
    if (dq.empty()==true)
    {
        cout<<"deque is empty"<<endl;
    }else{
        cout<<"deque is not empty"<<endl;
    }
    

    deque<int> ::iterator it = dq.begin();
    while (it != dq.end())
    {
        cout<< *it <<" ";
        it++;
    }
    cout<<endl;


    // -> [] or at 
    cout<<dq[0]<<endl;
    cout<<dq.at(2)<<endl;
    
    // clear
    dq.clear();
    cout<<dq.size()<<endl;
    // insertion
    dq.insert(dq.begin(),101);
    cout<<dq[0]<<endl;

    // erase

    dq.erase(dq.begin(),dq.end());
    cout<<dq.size()<<endl;






    return 0;
}