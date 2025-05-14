#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>& people,int index,int k) {

    if (people.size() == 1){
        cout<<people[0];
        return;
    }
    int i = (index+k)%people.size();
    people.erase(people.begin()+i);
    solve(people,i,k);


}

int main(){
    int tolPerson;
    int k;
    cout<<"Eneter the number of peoples\n";
    cin>>tolPerson;
    cout<<"Enter the k value\n";
    cin>>k;
    k  = k-1;
    vector<int> people;
    for (int i = 1 ;i<=tolPerson;i++){
        people.push_back(i);
    }
   
    int index = 0;
    solve(people,index,k);
    return 0;    
}