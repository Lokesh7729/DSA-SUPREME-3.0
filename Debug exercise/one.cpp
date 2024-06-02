#include<iostream>
using namespace std;

int main() {
	char c;
    cin>>c;
    if('a'<=c && c<= 'z'){ // WE have to use && insted of || 
        cout<<0;
    }
	else if('A'<=c && c<= 'Z'){ // WE have to use && insted of || 
        cout<<1;
    }
    else{
        cout<<-1;
    }
}