#include<iostream>
using namespace std;


float calculator(int sb1,int sb2, int sb3, int sb4, int sb5){
    int sum= sb1+sb2+sb3+sb4+sb5;
    int total= 300;
    float percentage= (sum*100.0)/total;
    return percentage;

}


int main(){
cout<<"percentage:"<<calculator(42,44,44,51,48);
}