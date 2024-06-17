#include<iostream>
using namespace std;

float areaOfCircle(float radius){
float area= 3.14 *radius*radius;
return area;
}

int main(){
    float radius;
    cin>>radius;
    float Area = areaOfCircle(radius);
    cout<<Area;
}