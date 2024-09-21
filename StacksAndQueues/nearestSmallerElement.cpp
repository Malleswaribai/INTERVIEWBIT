/*
Given an array, find the nearest smaller element G[i] for every element A[i] in the array such that the element has an index smaller than i.

More formally,

    G[i] for an element A[i] = an element A[j] such that 
    j is maximum possible AND 
    j < i AND
    A[j] < A[i]
Elements for which no smaller element exist, consider next smaller element as -1.

Input Format

The only argument given is integer array A.
Output Format

Return the integar array G such that G[i] contains nearest smaller number than A[i].If no such element occurs G[i] should be -1.
For Example

Input 1:
    A = [4, 5, 2, 10, 8]
Output 1:
    G = [-1, 4, -1, 2, 2]
*/
vector<int> Solution::prevSmaller(vector<int> &arr) {
    //Basically it is a next smaller element
   int n=arr.size();
   stack<int>st;
   vector<int>res;
   for(int i=0; i<n; i++){
      while(!st.empty() && st.top()>=arr[i]){
          st.pop();
      }
      if(st.empty()) res.push_back(-1);
      else res.push_back(st.top());
      st.push(arr[i]);
   }
   return res;
}

