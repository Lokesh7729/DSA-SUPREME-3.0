#include <iostream>
using namespace std;

class Student
{
public:
    int marks;
    string name;
    Student()
    {
    }
    Student(int m, string n)
    {
        this->marks = m;
        this->name = n;
    }
};

// functor
class studentComparator
{
public:
    bool operator()(Student a, Student b)
    {
        return a.marks < b.marks;
    }
};

int main()
{
    Student s1;
    Student s2;
    s1.marks = 93;
    s1.name = "lokesh";

    s2.marks = 99;
    s2.name = "abeer";

    studentComparator cmp;

    if (cmp(s1, s2))
    {
        cout << "lokesh ke marks abber se kam hai";
    }
    else
    {
        cout << "abber ke marks lokesh se kam hai ";
    }

    return 0;
}