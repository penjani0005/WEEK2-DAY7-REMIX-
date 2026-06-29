#include <iostream>
#include <climits>
using namespace std;

// minfinder:find the minimum in the array
int minFinder(int arr[], int size)
{
    int minVal = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }
    return minVal;
}

// sumArray:sum all elements
int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

// searchArray: Linear search for the target value
int searchArray(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i; // return index if found
        }
    }
    return -1; // return -1 if not found
}

int main()
{

    int data[] = {9, 4, 7, 2, 5, 11};
    int size = sizeof(data) / sizeof(data[0]);
    int target = 7;

    cout << " Array: {9,4,7,2,5,11} " << endl;
    cout << " 1. Min: " << minFinder(data, size) << endl;
    cout << " 2. Sum: " << sumArray(data, size) << endl;
    cout << " 3. Search 7: index " << searchArray(data, size, target) << endl;

    return 0;
    // value tells you what you are looking for!
    // index tells you the position of what you are looking for
}
