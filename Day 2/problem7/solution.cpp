#include <iostream>
#include <set>

int main()
{
    std::set<int> leaders;
    int arr[] = {6, 1, 2, 3, 4, 8, 1, 2, 3, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    leaders.insert(arr[n - 1]);
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > arr[i + 1])
        {
            leaders.insert(arr[i]);
        }
    }

    std::cout << "leaders: [ ";
    for (int s : leaders)
    {
        std::cout << s << " ";
    }
    std::cout << "]";
    return 0;
}