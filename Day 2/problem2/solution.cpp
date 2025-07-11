#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    unordered_map<int, int> freq;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        freq[arr[i]]++;
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (freq[arr[i]] > 1)
        {
            cout << arr[i];
            break;
        }
    }
    return 0;
}