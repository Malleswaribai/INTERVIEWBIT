/**
Given an array S of n integers, are there elements a, b, c, and d in S such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.

Note:

Elements in a quadruplet (a,b,c,d) must be in non-descending order. (ie, a ≤ b ≤ c ≤ d)
The solution set must not contain duplicate quadruplets.
Example : 

Given array S = {1 0 -1 0 -2 2}, and target = 0

A solution set is:

    (-2, -1, 1, 2)
    (-2,  0, 0, 2)
    (-1,  0, 0, 1)
Also make sure that the solution set is lexicographically sorted.

Solution[i] < Solution[j] iff Solution[i][0] < Solution[j][0] OR (Solution[i][0] == Solution[j][0] AND ... Solution[i][k] < Solution[j][k])

 */

 vector<vector<int> > Solution::fourSum(vector<int> &arr, int B) {
    // 
    int n=arr.size();
    set<vector<int>>s;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                for(int l=k+1; l<n; l++){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==B){
                         vector<int>temp={arr[i],arr[j],arr[k],arr[l]};
                         sort(temp.begin(),temp.end());
                         s.insert(temp);
                    }
                }
            }
        }
    }
      vector<vector<int>>res(s.begin(),s.end());
    return res;
    //
    int n=arr.size();
    set<vector<int>>s;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            set<int>temp;
            for(int k=j+1; k<n; k++){
                int fourth=B-arr[i]-arr[j]-arr[k];
                auto it=temp.find(fourth);
                if(it!=temp.end()){
                    vector<int>list={arr[i],arr[j],arr[k],fourth};
                    sort(list.begin(),list.end());
                    s.insert(list);
                }else{
                    temp.insert(arr[k]);
                }
            }
        }
    }
      vector<vector<int>>res(s.begin(),s.end());
    return res;
    //time complexity is O(n^3)
    int n=arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int>>res;
    for(int i=0; i<n; i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        for(int j=i+1; j<n; j++){
            if(j!=(i+1) && arr[j]==arr[j-1])continue;
            int k=j+1, l=n-1;
            while(k<l){
                long long sum=arr[i];
                sum+=arr[j];
                sum+=arr[k];
                sum+=arr[l];
                if(sum==B){
                    vector<int>temp={arr[i],arr[j],arr[k],arr[l]};
                    res.push_back(temp);
                    k++;
                    l--;
                    while(k<l && arr[k]==arr[k-1]){
                        k++;
                    }
                    while(k<l && arr[l]==arr[l+1]){
                        l--;
                    }
                }else if(sum<B){
                    k++;
                }else l--;
            }
        }
    }
    return res;
}
