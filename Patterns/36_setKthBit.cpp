#include<iostream>
using namespace std;


 int setKthBit(int N, int K){
    N=N|(1<<K);
    return N;
 }


int main(){
    int N,K;
    cin>>N>>K;
cout<<setKthBit(N,K)<<endl;


   
}