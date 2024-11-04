#include <iostream>
using namespace std;
// Finding last occurence
void findingFirstOccurence(int arr[], int n, int target, int &ansIndex)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // may or may not be first occurence
            // store and compute
            ansIndex = mid;
            // we want to find first occurence
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

void findingLastOccurence(int arr[], int n, int target, int &ansIndex)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // may or may not be last occurence
            // store and compute
            ansIndex = mid;
            // we want to find last occurence
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
    int ansIndexFirst = -1;
    int ansIndexLast = -1;

    findingFirstOccurence(arr, n, target, ansIndexFirst);
    findingLastOccurence(arr, n, target, ansIndexLast);
    cout << "first occurence index: " << ansIndexFirst << endl;
    cout << "last occurence index : " << ansIndexLast << endl;
    cout << "total occurence : " << ((ansIndexLast - ansIndexFirst) + 1);

    return 0;
}