/*
Problem Description
 
 

A conveyor belt has packages that must be shipped from one port to another within B days.

The ith package on the conveyor belt has a weight of A[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.

Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within B days.



Problem Constraints
1 <= B <= |A| <= 5 * 105
1 <= A[i] <= 105


Input Format
First argument is array of integers A denoting the weights.

Second argument is the integer B denoting the number of days. 



Output Format
Return the least weight capacity of the ship.


Example Input
Input 1:
A = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
B = 5
Input 2:

A = [3, 2, 2, 4, 1, 4]
B = 3


Example Output
Ouput 1:
15
Ouput 2:

6
*/
int Solution::solve(vector<int> &arr, int B) {
    int n=arr.size();
    int mxElement=*max_element(arr.begin(),arr.end());
    int arrSum=0;
    for(auto x:arr) arrSum+=x;
    int l=mxElement, r=arrSum;
    int res=0;
    while(l<=r){
        int mid=(l+r)/2;
        int days=1;
        int i=0, load=0;
        while(i<n){
            if(load+arr[i]>mid){
                days++;
                load=0;
                i--;
            }else{
                load+=arr[i];
            }
            i++;
        }
        if(days<=B){
            res=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    return res;
}
