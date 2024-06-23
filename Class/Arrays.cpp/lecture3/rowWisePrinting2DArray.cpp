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

int rowWiseSum(int arr[][3], int rowSize, int colSize ){
    for (int i = 0; i < rowSize; i++)
    {
        int sum =0;
       for (int j = 0; j < colSize; j++)
       {
        sum = sum+ arr[i][j];
    }
    cout<<sum<<" ";
}
cout<<endl;
}

int colWiseSum(int arr[][3], int rowSize, int colSize ){
    for (int i = 0; i < colSize; i++)
    {
        int sum =0;
       for (int j = 0; j < rowSize; j++)
       {
        sum = sum+ arr[j][i];
    }
    cout<<sum<<" ";
}
cout<<endl;
}

int main(){
    int arr[3][3]={
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };

    int rowSize=3;
    int colSize=3;

int rowSum = rowWiseSum(arr, rowSize,colSize);
int colSum = colWiseSum(arr, rowSize, colSize);



}

