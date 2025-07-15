
#include <iostream>
#include <unordered_map>
using namespace std;

int largestSub(string s, int types)
{
    unordered_map<char, int> mp;
    int start = 0, end = 0;
    int maxL = 0;
    while (end < s.size())
    {
        mp[s[end]]++;

        if (mp.size() == types)
        {
            maxL = max(maxL, (end - start + 1));
            
        }
        else if (mp.size() > types)
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
    cout<<"Enter the number of unique character\n";
    int n;
    cin>>n;
    int res = largestSub(str, n);
    cout << "Hence the maximum toys would be " << res;

    return 0;
}