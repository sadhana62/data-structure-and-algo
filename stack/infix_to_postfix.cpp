#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

int priority(char ch) {
    if (ch == '+' || ch == '-') {
        return 1;
    } 
    else if (ch == '*' || ch == '/') {
        return 2;
    }
    else if (ch == '^') {
        return 3;
    }
    return -1;
}

string infix_to_prefix(string s) {
    reverse(s.begin(),s.end());
    cout<<"\nReverse String : "<<s<<endl;
    for (int i=0;i<s.size();i++) {
      if (s[i]=='(') {
        s[i] = ')';
      } 
      else if (s[i] == ')') {
        s[i] = '(';
      }
    }
    cout<<"\n after changing the brackets\n"<<s<<endl;
    int i = 0;
    string ans ="";
    stack<char> st;
    int n = s.size();
    while(i<n) {
        if ((s[i]>='a' && s[i]<= 'z') || (s[i]>='A' && s[i]<= 'Z') || (s[i]>='0' && s[i]<= '9') ){
            ans+=s[i];
        } else if (s[i] == '(') {
             st.push(s[i]);
        } else if (s[i] == ')') {
            while( !st.empty() && st.top()!='(') {
                ans+= st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop(); // Pop the '('
            }
        }
        else {
            while(!st.empty() && priority(s[i]) <= priority(st.top()) && st.top() != '(') {
                 ans+= st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        i++;
    }
    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }
    return ans;
}
string infix_to_post(string s) {
  int  i = 0;
  stack<char> st;
  string ans = "";
  int n = s.size();
  while(i<n) {
    if ((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')) {
        ans+= s[i];
    } else if(s[i] == '(') {
        st.push(s[i]);
    } else if(s[i] == ')'){
        while(!st.empty() && st.top() != '(') {
            ans+= st.top();
            st.pop();
        }
        if (!st.empty()) { 
            st.pop();
        }
    } else {
        while(!st.empty() && st.top() != '(' && priority(s[i]) <= priority(st.top())) {
            ans+= st.top();
            st.pop();
        }
        st.push(s[i]);
    }
    i++;
  }
 
  while(!st.empty()) {
    ans += st.top();
    st.pop();
  }
  return ans;
}

int main() {
    string str,str2;
    cout<<"Enter the infix string that you wish to convert it into postfix\n";
    cin>>str;
    cout<<"Your infix expression :"<<str<<endl;
    string result = infix_to_post(str);
    cout<<"Hence the postfix conversion is "<<result<<endl;
    cout<<"Enter the infix string that you wish to convert it into postfix\n";
    cin>>str2;
    cout<<"Your infix expression :"<<str2<<endl;
    string result2 = infix_to_prefix(str2);
    reverse(result2.begin(),result2.end());
    cout<<"Hence the postfix conversion is "<<result2<<endl;
    return 0;
}