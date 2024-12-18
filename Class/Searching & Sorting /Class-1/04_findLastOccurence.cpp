#include <iostream>
using namespace std;
// Finding last occurence

void findingLastOccurence(int arr[], int n, int target, int &ansIndex)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            //may or may not be last occurence
            //store and compute
            ansIndex = mid;
            //we want to find last occurence
            s = mid + 1;
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

    findingLastOccurence(arr, n, target, ansIndex);
    cout << "Last occurence index: " << ansIndex << endl;

    return 0;
}