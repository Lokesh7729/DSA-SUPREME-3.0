#include<iostream>
using namespace std;

bool serach2DArray(int arr[][4], int rowSize, int colSize, int target){

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
             if (arr[i][j]==target)
             {
                cout<<"element found"<<endl;
                return true;
             }
        }   
    }
    return false;
}

int main(){
    int arr[3][4]={
        {10,20,23,34},
        {30,40,43,76},
        {50,60,65,79}
    };
    int rowSize=3;
    int colSize=4;
    int target=79;

    int ans = serach2DArray(arr,rowSize,colSize,target);
    cout<<ans;
    
    


}