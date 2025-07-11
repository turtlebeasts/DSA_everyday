#include <iostream>

int main()
{
    int arr[] = {1, 8, 7, 56, 90};
    int greatest = arr[0];

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (greatest < arr[i])
        {
            greatest = arr[i];
        }
    }
    std::cout << greatest;
    return 0;
}