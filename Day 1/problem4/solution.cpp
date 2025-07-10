#include <iostream>
using namespace std;

int maximum_sum(int arr[], int k, int arr_size)
{
    int max, window_sum = 0;

    if (arr_size < k)
    {
        return -1;
    }

    for (int i = 0; i < k; i++)
    {
        window_sum += arr[i];
    }

    max = window_sum;

    for (int i = k; i < arr_size; i++)
    {
        window_sum = window_sum - arr[i - k] + arr[i];
        if (max < window_sum)
        {
            max = window_sum;
        }
    }

    return max;
}

int main()
{
    int arr[] = {2, 1, 5, 1, 3, 2};
    int k = 3;
    cout << maximum_sum(arr, k, sizeof(arr) / sizeof(arr[0]));
    return 0;
}