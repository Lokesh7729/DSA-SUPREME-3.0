#include<iostream>
using namespace std;

int main(){
    int n1 = 20;
    int n2 = 40;
    int a = 20;
    int b = 40;
    int gcd=1;

    // for (int i = 1; i < min(n1,n2); i++)
    // {
        // if (n1%i==0 && n2%i==0)   gcd=i;
    //     
        
    // }
    // for (int i = min(n1,n2); i > 1; i--)
    // {
    //     if (n1%i==0 && n2%i==0) 
    //     {
    //         cout<<i;
    //         break;
    //     }
        
    // }
    // cout<<gcd<<endl;


    // Euclidean Algorithms 

    // gcd ( a , b ) = gcd ( a - b , b )  -> 0 
    //  gcd(a,b) = = gcd ( a%b ,b )  

    while (a>0 && b>0)
    {
        if (a>b) {
            a=a%b;
        }else{
            b=b%a;
        }
        
    }
    if (a==0) cout<<b;
    else cout<<a;
    
    
}

//tc- > O(log(fie) min(a,b))



    