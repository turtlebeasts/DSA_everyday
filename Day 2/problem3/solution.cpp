#include <iostream>
#include <unordered_map>

int main()
{
    int arr[] = {1, 2, 3, 9};
    int k = 8;
    std::unordered_map<int, int> differences;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (differences.find(arr[i]) == differences.end())
        {
            differences[k - arr[i]] = arr[i];
        }
        else
        {
            std::cout << arr[i] << "+" << differences[arr[i]] << "=" << k;
            return 0;
        }
    }

    std::cout << "No elements found";
    return 0;
}