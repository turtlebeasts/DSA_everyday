#include <iostream>
using namespace std;

int firstUnique(int arr[], int n)
{
    int freq[10] = {0};

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for (int j = 0; j < n; j++)
    {
        if (freq[arr[j]] == 1)
        {
            return arr[j];
        }
    }
    return -1;
}

int main()
{
    int arr[] = {7, 3, 5, 4, 5, 3, 4};
    cout << firstUnique(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}