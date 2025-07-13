#include <iostream>

int main()
{

    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    int max_sum = nums[0];
    int current_sum = nums[0];
    for (int i = 0; i < n; i++)
    {
        current_sum = std::max(nums[i], current_sum + nums[i]);
        max_sum = std::max(max_sum, current_sum);
    }

    std::cout << max_sum;

    return 0;
}