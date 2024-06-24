#include<iostream>
using namespace std;


int findMinmunIn2DArray(int arr[][4], int rowSize, int colSize ){
    int minValue= INT_MAX;
    for (int i = 0; i < rowSize; i++)
    {
       for (int j = 0; j < colSize; j++)
       {
        minValue= min(arr[i][j], minValue);

       }
    }
    return minValue;
}

int findMaximumIn2DArray(int arr[][4], int rowSize, int colSize ){
    int maxValue= INT_MIN;
    for (int i = 0; i < rowSize; i++)
    {
       for (int j = 0; j < colSize; j++)
       {
        maxValue= max(arr[i][j], maxValue);

       }
    }
    return maxValue;
}
int main(){
    int arr[3][4]={
        {10,12,23,12},
        {23,34,45,25},
        {700,74,24,7}
    };

    int rowSize=3;
    int colSize=4;

int min = findMinmunIn2DArray(arr, rowSize,colSize);
cout<<"min : " <<min<<endl;
int max = findMaximumIn2DArray(arr, rowSize,colSize);
cout<<"max : " <<max<<endl;;



}

