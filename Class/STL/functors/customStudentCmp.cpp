#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
using namespace std;

class Student {
    public:
    int marks;
    string name;
    Student(){

    }
    Student(int m , string n){
        this-> marks=m;
        this-> name=n;
    }

};

class comparator{
    public:
    bool operator()(Student a, Student b){
        return a.marks > b.marks;
    }
};

int main(){
    

    vector<Student>arr;
    arr.push_back(Student(90,"love"));
    arr.push_back(Student(95,"lakshay"));
    arr.push_back(Student(85,"striver"));


    sort(arr.begin(),arr.end(),comparator( ));

    for( Student a: arr){
        cout<< a.marks<< " " <<a.name <<endl;
    }



    return 0;
}