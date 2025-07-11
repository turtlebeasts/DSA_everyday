#include <iostream>
#include <unordered_map>

int main()
{

    std::unordered_map<int, int> map;
    int arr[] = {1, 2, 3, 3, 5, 6, 6, 100, 1};

    for (int i : arr)
    {
        map[i]++;
    }

    for (auto &i : map)
    {
        if (i.second > 1)
        {
            std::cout << i.first << " ";
        }
    }

    return 0;
}