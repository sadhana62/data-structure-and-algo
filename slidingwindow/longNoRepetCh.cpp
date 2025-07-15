
#include <iostream>
#include <unordered_map>
using namespace std;

int LongUnique(string s)
{
    unordered_map<char, int> mp;
    int start = 0, end = 0;
    int maxL = 0;
    while (end < s.size())
    {
        mp[s[end]]++;

        if (mp.size() == end-start+1)
        {
            maxL = max(maxL, (end - start + 1));
            
        }
        else if (mp.size() < end-start+1)
        {
            mp[s[start]]--;
            if (mp[s[start]] == 0)
            {
                mp.erase(s[start]);
            }
            start++;
            
        }
        end++;
    }
    return maxL;
}

int main()
{
    string str;
    cout << "Enter the string\n";
    cin >> str;
    int res = LongUnique(str);
    cout << "Hence the maximum toys would be " << res;

    return 0;
}