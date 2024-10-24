#include <iostream>
using namespace std;

void leftRotateTheArray(int arr[], int n, int k)
{
    k = k % n;
    // storing in temp variable
    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    // left shifting
    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }
    // putting back temp
    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[i - (n - k)];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << "Enter the number of place you want to shift the array : ";
    cin >> k;
    cout << "before : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    leftRotateTheArray(arr, n, k);
    cout << "after : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
