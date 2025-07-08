#include <iostream>
#include <unordered_map>
using namespace std;

int countAnagram(string str, string ptr)
{
    unordered_map<char, int> mp;
    int ans = 0;
     for( auto c : ptr) {
        mp[c]++;
     }
    int count = mp.size();
    int i = 0;
    int j = 0;
    int n = str.size();
    int k = ptr.size();
    while (j < n)
    {
         if (mp.find(str[j]) != mp.end()){
            {
                mp[str[j]]--;
                if (mp[str[j]] == 0) {
                    count--;
                }
            }
        }
       
        if (j - i + 1 < k)
        {
          
            j++;
        }
        else if (j - i + 1 == k)
        {
            if (count == 0)
            {
                ans++;
            }
            if (mp.find(str[i]) != mp.end()) {
                if (mp[str[i]] == 0)
                    count++;
                mp[str[i]]++;
            }
            i++;
            j++;
        }
    }
    return ans;
}

int main()
{
    string str, ptr;
    cout << "Enter the string\n";
    cin >> str;
    cout << "Enter the pattern\n";
    cin >> ptr;
    int res = countAnagram(str, ptr);
    cout<<"\n Hence the number of anagram "<<res<<endl;
    return 0;
}