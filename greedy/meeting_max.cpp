#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Data {
    public:
    int start;
    int end;
    int pos;

};

bool comp (Data val1, Data val2) {
    return val1.end < val2.end;
}

int maximumMeeting(vector<int>&start,vector<int>& end) {
   int n = start.size();
   Data arr[n];
   for (int i = 0;i<n;i++) {
        arr[i].start = start[i];
        arr[i].end = end[i];
        arr[i].pos = i+1;
   }
   sort(arr, arr + n, comp);
   int freeTime = arr[0].end;
   cout<<"\npos "<<arr[0].pos;
   int c = 1;
   for (int i = 1;i<n;i++) {
      if (arr[i].start> freeTime) {
          c++;
          freeTime = arr[i].end;
          cout<<"\npos "<<arr[i].pos;
      }
   }

  return c;
}

int main() {
   vector<int> start = {1, 3, 0, 5, 8, 5};
   vector<int> end   = {2, 4, 6, 7, 9, 9};
   int result = maximumMeeting(start,end);
   cout<<"\nMaximum Meeting that can be scheduled is "<<result<<endl;
   return 0;
}