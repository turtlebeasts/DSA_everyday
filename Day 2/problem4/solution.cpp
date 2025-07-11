#include <iostream>
#include <vector>
#include <map>

int main()
{
    std::map<int, std::vector<int>> arrays;
    int nums[] = {-1, 0, 1, 2, -1, -4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int count = 0;
    for (int i = 0; i < n - 3; i++)
    {
        if ((nums[i] + nums[i + 1] + nums[i + 2]) == 0)
        {
            count++;
            arrays[count] = {nums[i], nums[i + 1], nums[i + 2]};
        }
    }

    if (count)
    {
        for (auto &p : arrays)
        {
            std::cout << p.first << " [";
            for (int i : p.second)
            {
                std::cout << i << ", ";
            }
            std::cout << "]" << std::endl;
        }
    }
    return 0;
}