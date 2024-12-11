/*
Problem Description
 
 

Given an unsorted integer array, find the first missing positive integer.
Your algorithm should run in O(n) time and use constant space.


Problem Constraints
1 <= |A| <= 106
-106 <= Ai <= 106


Input Format
The first argument is an integer array A.


Output Format
Return an integer equal to the first missing positive integer


Example Input
Input 1:
A = [1,2,0]
Input 2:
A = [3,4,-1,1]
Input 3:
A = [-8,-7,-6]


Example Output
Output 1:
3
Output 2:
2
Output 3:
1
*/

int Solution::firstMissingPositive(vector<int> &arr) {
    int n=arr.size();
    //approach-1: it is giving memory limit exceeded erros, beacuse we used O(n) space complexity
    set<int>s;
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }
    int res=n+1;
    for(int i=1; i<=n; i++){
        auto it=s.find(i);
        if(it==s.end()){
            res=i;
            return res;
        }
    }
    return res;
    
    // approach-2: it is giving time limmit exceeded error, it takes O(n*n) time complexity
    int res=n+1;
    for(int i=1; i<=n; i++){
        int ans=0;
        for(int j=0; j<n; j++){
            if(arr[j]==i){
                ans=1;
            }
        }
        if(ans==0){
            res=i;
            return res;
        }
    }
    return res;
    //approacch-3: which is quite optimized than previous approach it takes O(nlog(n)) timme complexity
    int res=n+1;
    sort(arr.begin(),arr.end());
    for(int i=1; i<=n; i++){
        int ans=0;
        int l=0, r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[mid]==i){
                ans=1;
                break;
            }else if(arr[mid]<i){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        if(ans==0){
            res=i;
            return res;
        }
    }
    return res;
}
