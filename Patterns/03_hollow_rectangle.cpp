#include<iostream>
using namespace std;

int main(){
    // hollow rectangle
    int length, width;
    cout<<"enter length: ";
    cin>>length;
    cout<<"enter width ";
    cin>>width;


    // outer -> rows
    for (int row = 0; row < length; row++)
    {
        for (int col = 0; col < width; col++)
        {
                if (row==0 || row==length-1)
                {
                    cout<<"* ";
                }
                else{
                    if (col==0 || col==width-1)
                    {
                        cout<<"* ";
                    }else{
                        cout<<"  ";
                    }
                    
                }
                
        }
        
        cout<<endl;
    }
    
   
}
