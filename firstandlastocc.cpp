#include <iostream>
using namespace std;
int firstocc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastocc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[7] = {4,4,4,4,4,4,4};
    cout<<"the first occ is "<<firstocc(arr, 7, 4)<<endl;
    cout<<"the last occ is "<<lastocc(arr, 7, 4)<<endl;
    // total occurance
    int last = lastocc(arr,7,4);
    int first = firstocc(arr, 7, 4);
    int total = (last-first)+1;
    cout<< "total "<<total;
    return 0;
}