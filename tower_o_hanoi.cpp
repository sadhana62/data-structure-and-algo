#include<bits/stdc++.h>
using namespace std;

void solve(int n,int s,int d,int h,int &count){
    count++;
    if (n == 1){
        cout << "Move plate " << n << " from " << s << " to " << d << endl;
        return;
    }
    solve(n-1,s,h,d,count);
    cout << "Move plate " << n<< " from " << s << " to " << d << endl;
    solve(n-1,h,d,s,count);
    


}

int main(){
    int n;
    cout<<"Enter the number of plates\n";
    cin>>n;
    int count = 0;
    int s = 1,h=2,d=3;
    solve(n,s,d,h,count);

    return 0;
}