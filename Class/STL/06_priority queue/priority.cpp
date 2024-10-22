#include <iostream>
#include <queue>
using namespace std;

int main()
{

    // min heap -> minimum value -> highest priority
    priority_queue<int, vector<int>, greater<int>> phq;

    phq.push(100);
    // 100
    phq.push(50);
    // 50 100
    phq.push(60);
    // 50 60 100
    phq.push(10);
    // 10 50 60 100

    phq.pop();
    // 50 60 100
    phq.pop();
    // 60 100

    // creation
    priority_queue<int> pq;
    // max-heap -> maximum value -> Highest Priority

    pq.push(10);
    // 10
    pq.push(20);
    // 20 10
    pq.push(30);
    // 30 20 10
    pq.push(80);
    // 80 30 20 10
    pq.push(25);
    // 80 30 25 20 10

    // top element -> heighest priority
    cout << pq.top() << endl;
    // 80
    pq.pop();
    // 80 will be popped
    cout << pq.top() << endl;
    // 30

    if (pq.empty() == true)
    {
        cout << "pq is empty " << endl;
    }
    else
    {
        cout << "pq is not empty " << endl;
    }

    return 0;
}