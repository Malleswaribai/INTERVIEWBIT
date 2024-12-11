/*
Problem Description
 
 

Given an array of integers, find two numbers such that they add up to a specific target number.

 

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 < index2. Please note that your returned answers (both index1 and index2 ) are not zero-based. Put both these numbers in order in an array and return the array from your function ( Looking at the function signature will make things clearer ). Note that, if no pair exists, return an empty list.

If multiple solutions exist, output the one where index2 is minimum. If there are multiple solutions with the minimum index2, choose the one with minimum index1 out of them.



Problem Constraints
1 <= |A| <= 105
-108 <= Ai <= 108
-108 <= B <= 108


Input Format
The first argument is an integer array A.
The second argument is an integer B.


Output Format
Return an array of integer, representing the answer


Example Input
A: [2, 7, 11, 15]
B: 9


Example Output
[1, 2]
*/
vector<int> Solution::twoSum(const vector<int> &A, int B) {
int n = A.size();
    map<int, int> mp;
    int index1 = INT_MAX;
    int index2 = INT_MAX;
    for(int i = 0; i < n; i++){
        int number = A[i];
        int target = B - number;
        if(mp.find(target) != mp.end()){
            int tempIndex1 = mp[target] + 1;
            int tempIndex2 = i + 1;
            if(tempIndex2 < index2 || (tempIndex2 == index2 && tempIndex1 < index1)){
                index1 = tempIndex1;
                index2 = tempIndex2;
            }
        }
        if(mp.find(number) == mp.end()) {
            mp[number] = i;
        }
    }
    if(index1 == INT_MAX && index2 == INT_MAX){
        return {};
    }
    return {index1, index2};
}