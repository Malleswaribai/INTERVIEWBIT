/*
int brute force approach it takes O(n*n) time complexity
using stacks it takes O(n) as follows actually it is O(2n) so O(n)
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,6,9,3,10,100};
    stack<int>st;
    int n=v.size();
    vector<int>res;
    for(int i=0; i<n; i++){
      while(!st.empty() && st.top()<=arr[i]){
          st.pop();
      }
      if(st.empty()) res.push_back(-1);
      else res.push_back(st.top());
      st.push(arr[i]);
   }
   return res;
}