#include <iostream>
#include <stack>
using namespace std;

void insert(stack<int> &s, int temp)
{
    if (s.size() == 0)
    {
        s.push(temp);
        return;
    }
    int ele = s.top();
    s.pop();
    insert(s, temp);
    s.push(ele);
}

void reverse(stack<int> &s)
{
    if (s.size() == 0)
    {
        return;
    }
    int ele = s.top();
    s.pop();
    reverse(s);
    insert(s, ele);
}

int main()
{

    stack<int> s;
    cout << "Enter the total number elemens\n";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        s.push(ele);
    }

    if (!s.empty())
    {
        reverse(s);
        cout << "After reversing\n";
        for (int i = 0; i < n; i++)
        {
            cout << s.top();
            s.pop();
        }

        return 0;
    }
}