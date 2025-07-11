#include <iostream>
#include <algorithm>

int main()
{
    int arr[] = {4, 2, -1, 8, 1, -28};
    int n = sizeof(arr) / sizeof(arr[0]);
    int smallest_missing = 1;
    std::sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 0)
            continue;
        if (arr[i] == smallest_missing)
        {
            smallest_missing++;
        }
        else if (arr[i] > smallest_missing)
        {
            break;
        }
    }

    std::cout << smallest_missing;

    return 0;
}