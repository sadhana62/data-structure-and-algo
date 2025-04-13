#include<iostream>
using namespace std;
int sum (int n) {
    if (n == 1) {
        return 1;
    }
    return sum(n-1)+n;
}

int main() {
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    int result = sum(n);
    cout<<"Hence the sum is "<<result;


    return 0;
}