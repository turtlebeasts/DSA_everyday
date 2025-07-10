#include <iostream>
using namespace std;

bool anagram_possibility(string s1, string s2)
{
    int frequency_array[26] = {0};
    int mismatch_count = 0;

    for (char ch : s1)
    {
        if (ch != ' ')
        {
            frequency_array[ch - 'a']++;
        }
    }

    for (char ch : s2)
    {
        if (ch != ' ')
        {
            frequency_array[ch - 'a']++;
        }
    }

    for (int i : frequency_array)
    {
        if (i % 2 != 0)
        {
            mismatch_count++;
        }
    }

    if (mismatch_count < 3)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s1 = "aabb";
    string s2 = "abbb";

    if (anagram_possibility(s1, s2))
    {
        cout << "Anagram possible";
    }
    else
    {
        cout << "Anagram not possible";
    }
    return 0;
}