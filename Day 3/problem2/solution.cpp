#include <iostream>
#include <map>

int main()
{
    std::string text = "pwwkew";
    std::map<char, int> lastseen;
    int max_length = 0;
    int start = 0;
    char current;

    for (int end = 0; end < text.size(); end++)
    {
        current = text[end];

        if (lastseen.find(current) != lastseen.end() && lastseen[current] >= start)
        {
            start = lastseen[current] + 1;
        }

        lastseen[current] = end;
        max_length = std::max(max_length, end - start + 1);
    }

    std::cout << max_length;

    return 0;
}