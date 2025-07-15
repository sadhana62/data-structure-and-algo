#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

int miniLeng(string s, string p)
{
    unordered_map<char, int> mp;
    for (auto ch : p) {
        mp[ch]++;
    }

    int count = mp.size();
    int start = 0, end = 0, minL = INT_MAX;
    int minStart = 0;

    while (end < s.size())
    {
        if (mp.find(s[end]) != mp.end()) {
            mp[s[end]]--;
            if (mp[s[end]] == 0)
                count--;
        }

        while (count == 0)
        {
            if (end - start + 1 < minL) {
                minL = end - start + 1;
                minStart = start;
            }

            if (mp.find(s[start]) != mp.end()) {
                mp[s[start]]++;
                if (mp[s[start]] > 0)
                    count++;
            }
            start++;
        }
        end++;
    }

    if (minL == INT_MAX)
        return 0; // or -1 if no valid window exists

    return minL;
}

int main()
{
    string str, ptr;
    cout << "Enter the string\n";
    cin >> str;
    cout << "Enter the pattern\n";
    cin >> ptr;

    int res = miniLeng(str, ptr);
    if (res)
        cout << "Hence the minimum length of substring containing the pattern is " << res << endl;
    else
        cout << "No such substring found containing all characters of pattern\n";

    return 0;
}
