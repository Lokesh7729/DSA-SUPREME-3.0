#include<iostream>
#include<math.h>
using namespace std;
float calculateMiles(int km){
    float miles= 0.6212371;
    return km*miles;
}
int main(){
    int km;
    cout<<"Enter distance in KM to convert into miles :";
    cin>>km;

    float miles = calculateMiles(km);
    cout<<miles<<" miles";
}