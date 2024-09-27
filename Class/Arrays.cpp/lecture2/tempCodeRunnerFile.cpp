
int printAllPairs1(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            cout<<arr[i]<<","<<arr[j]<< " ";
        }
        
    cout<<endl;
    }
}