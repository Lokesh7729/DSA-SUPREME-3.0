#include<iostream>
#include<queue>
using namespace std;

int main(){

    // creation
    queue<int> q;

    // insertion
    q.push(10);
    //10
    q.push(20);
    // 10 20 
    q.push(30);
    // 10 20 30 
    q.push(40);
    // 10 20 30 40 

    // pop
    q.pop();
    // 20 30 40

    // empty

    // front
    cout<<"front : " << q.front()<<endl;

    // back
    cout<<"back : " << q.back()<<endl;

    cout<<q.size()<<endl;


    // swap

    queue<int>first;
    queue<int>second;

    first.push(10);
    first.push(20);

    second.push(100);
    second.push(200);

    first.swap(second);

    cout<<first.front()<< " " << first.back()<<endl;

    return 0;
}