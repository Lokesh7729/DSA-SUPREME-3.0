#include <iostream>
using namespace std;
// Finding first occurence

void findingFirstOccurence(int arr[], int n, int target, int &ansIndex)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // ans found -> may or may not be first occurence
            // store and compute
            ansIndex = mid;
            // kyu ki first index ki baat hori hai
            // left mai jaau ya right mai
            // left mai jayinge
            e = mid - 1;
        }
        if (target > arr[mid])
        {
            s = mid + 1;
        }
        if (target < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
}

int main()
{
    int arr[] = {5, 10, 20, 20, 20, 20, 20, 20, 20, 30, 40, 50, 60};
    int n = 11;
    int target = 20;
    // -1 means target not found
    int ansIndex = -1;

    findingFirstOccurence(arr, n, target, ansIndex);
    cout << "first occurence index: " << ansIndex << endl;

    return 0;
}