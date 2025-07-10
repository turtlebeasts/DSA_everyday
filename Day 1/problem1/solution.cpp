#include <iostream>
using namespace std;

int main()
{
    string s1 = "rail safety";
    string s2 = "fairy tales";
    int ascii_array1[26] = {0};
    int ascii_array2[26] = {0};
    bool anagram = true;

    for (char ch : s1)
    {
        if (ch != ' ')
        {
            ascii_array1[ch - 'a']++;
        }
    }

    for (char ch : s2)
    {
        if (ch != ' ')
        {
            ascii_array2[ch - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (ascii_array1[i] != ascii_array2[i])
        {
            anagram = false;
            break;
        }
    }

    if (anagram)
    {
        cout << "Anagram";
    }
    else
    {
        cout << "Not anagram";
    }
    return 0;
}