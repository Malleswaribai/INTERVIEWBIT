/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,2,3,4,5,6,7,8};
     int n=arr.size();
    vector<vector<int>>res;
    for(int i=0; i<n; i++){
        vector<int>temp={arr[i]};
        res.push_back(temp);
        for(int j=i+1; j<n; j++){
            temp.push_back(arr[j]);
            res.push_back(temp);
        }
    }
   for(auto x:res){
       for(auto ans:x){
           cout<<ans<<" ";
       }
       cout<<endl;
   }
    return 0;
}
*/