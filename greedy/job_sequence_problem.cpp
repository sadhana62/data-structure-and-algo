#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Job {
public:
    int id, deadline, profit;
};

bool comp(const Job& a, const Job& b) {
    return a.profit > b.profit;
}

vector<int> maxProfit(vector<int>& id, vector<int>& deadline, vector<int>& profit) {
    int n = id.size();
    int maxDeadLine = deadline[0];
    for (int i = 1; i < n; i++) maxDeadLine = max(maxDeadLine, deadline[i]);

    vector<Job> obj(n);
    for (int i = 0; i < n; i++) {
        obj[i].id = id[i];
        obj[i].deadline = deadline[i];
        obj[i].profit = profit[i];
    }

    sort(obj.begin(), obj.end(), comp);

    vector<int> slot(maxDeadLine + 1, -1); // all -1

    int c = 0, totalProfit = 0;

    for (int i = 0; i < n; i++) {
        for (int j = min(maxDeadLine, obj[i].deadline); j >= 1; j--) {
            if (slot[j] == -1) {
                slot[j] = obj[i].id;
                c++;
                totalProfit += obj[i].profit;
                break;
            }
        }
    }

    return {c, totalProfit};
}

int main() {
    cout << "Maximum profit by performing task\n";
    vector<int> id = {1,2,3,4};
    vector<int> deadline = {4,1,2,2};
    vector<int> profit = {20,10,40,30};

    vector<int> res = maxProfit(id, deadline, profit);
    for (auto x : res) cout << x << " ";
    cout << endl;
}
