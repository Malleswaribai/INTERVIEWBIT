/*
Problem Description
 
 

Given a read-only array of n + 1 integers between 1 and n, find one number that repeats in linear time using less than O(n) space and traversing the stream sequentially O(1) times.
If there are multiple possible answers ( like in the sample case ), output any one, if there is no duplicate, output -1



Problem Constraints
1 <= |A| <= 105
1 <= Ai <= |A|


Input Format
The first argument is an integer array A.


Output Format
Return the integer that repeats in array A


Example Input
Input 1:
A = [3, 4, 1, 4, 2]
Input 2:
A = [1, 2, 3]
Input 3:
A = [3, 4, 1, 4, 1]


Example Output
Output 1:
4
Output 2:
-1
Output 3:
1
*/
int Solution::repeatedNumber(const vector<int> &arr) {
    int n=arr.size();
    unordered_set<int>s;
    for(int i=0; i<n; i++){
        auto it=s.find(arr[i]);
        if(it!=s.end()){
            return arr[i];
        }else{
            s.insert(arr[i]);
        }
    }
    return -1;
}
