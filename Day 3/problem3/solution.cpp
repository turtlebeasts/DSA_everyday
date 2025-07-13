// #include <iostream>

// int main()
// {
//     int nums[] = {2, 3, 1, 2, 4, 3};
//     int target = 7;
//     int start = 0;
//     int end = 0;
//     int length = 0;
//     int sum = 0;

//     while (end <= sizeof(nums) / sizeof(nums[0]))
//     {
//         if (sum == target)
//         {
//             break;
//         }
//         if (sum > target)
//         {
//             sum -= nums[start];
//             start++;
//         }
//         else
//         {
//             sum += nums[end];
//             end++;
//         }
//     }

//     std::cout << start << end;
// }