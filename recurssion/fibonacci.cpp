#include<iostream>
using namespace std;

int fibo(int n){
    if (n == 1 || n==0){
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}


int main() {
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    int result = fibo(n);
    cout<<"Hence the fibo is "<<result<<"\n";


    return 0;
}