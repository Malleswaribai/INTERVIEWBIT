/*
Given an integer array A of size N.

You need to check that whether there exist a element which is strictly greater than all the elements on left of it and strictly smaller than all the elements on right of it.

If it exists return 1 else return 0.

NOTE:

Do not consider the corner elements i.e A[0] and A[N-1] as the answer.
Problem Constraints
3 <= N <= 105

1 <= A[i] <= 109



Input Format
First and only argument is an integer array A containing N integers.



Output Format
Return 1 if there exist a element that is strictly greater than all the elements on left of it and strictly  smaller than all the elements on right of it else return 0.



Example Input
Input 1:

 A = [5, 1, 4, 3, 6, 8, 10, 7, 9]
Input 2:

 A = [5, 1, 4, 4]


Example Output
Output 1:

 1
Output 2:

 0

*/
int Solution::perfectPeak(vector<int> &arr) {
    // here i took one vector for if maximum element found then we are are pushing in array as 1 else 0,same with another vector name right if minimum element found we are pushing 1 or else 
    //0 , then we are reversing the right vector to get side as elements as decresing, then we are chekching in both vectors that if element in left vector 1 and element in right vector
    // 1 then we return as 1 else 0
        int n=arr.size();
    int maxLeft=INT_MIN;
    vector<int>left;
    for(auto &x:arr){
        if(x>maxLeft){
            left.push_back(1);
        }else{
            left.push_back(0);
        }
        maxLeft=max(maxLeft,x);
    }
    vector<int>right;
    int mnRight=INT_MAX;
    for(int i=n-1; i>=0; i--){
        if(arr[i]<mnRight){
            right.push_back(1);
        }else{
            right.push_back(0);
        }
        mnRight=min(mnRight,arr[i]);
        
    }
    reverse(right.begin(),right.end());
    for(int j=1; j<n-1; j++){
        if(left[j]==1 && right[j]==1){
            return 1;
        }
    }
    return 0;
    
    
}
