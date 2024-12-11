/*
You are given a read only array of n integers from 1 to n.

Each integer appears exactly once except A which appears twice and B which is missing.

Return A and B.

Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Note that in your output A should precede B.

Example:

Input:[3 1 2 5 3] 

Output:[3, 4] 

A = 3, B = 4
*/
vector<int> Solution::repeatedNumber(const vector<int> &arr) {
    int n=arr.size();
    /*naturalSum=arrSum+repeatedNumber-missingNumber
    repeatedNumber-missingNumber=arrSum-naturalSum;
    square on both side
    (repeatedNumber+missingNumber)(repeatedNumber-missingNumber)=(arrSum+naturalSum)(arrSum-naturalSum);
    repeatedNumber+missingNumber=arrSum+naturalSum;
    repeatedNumber-missingNumber=arrSum-naturalSum;
    add two equations
    2repeatedNumber=2arrSum
    repeatedNumber=arrSum//r value
    missingNumber=arrSum+repeatedNumber-naturalSum;
    */
    //
    int n=arr.size();
    set<int>s;
    int repeatedElement=0;
    for(int i=0; i<n; i++){
        auto it=s.find(arr[i]);
        if(it!=s.end()){
            repeatedElement=arr[i];
        }else{
            s.insert(arr[i]);
        }
    }
    int missingNumber=0;
    for(int i=1; i<=n; i++){
        auto it=s.find(i);
        if(it==s.end()){
            missingNumber=i;
        }
    }
    return {repeatedElement,missingNumber};
    //
    int n = arr.size();
    long long int arrSum = 0;
    long long int one_to_n_sum = n*1LL*(n+1)/2; 
    long long int arrSqrSum = 0 ;
    long long int one_to_n_sqr_sum = n*1LL*(n+1)*1LL*(2*n+1)/6;
    for(int i = 0 ;i<n ;i++) {
        arrSqrSum+=(arr[i]*1LL*arr[i]);
        arrSum+=arr[i];
    }
    long long int x = arrSum - one_to_n_sum ; // r - m 
    long long int y = arrSqrSum - one_to_n_sqr_sum ; // r^2 - m^2 => (r+m)*(r-m) => (r+m)*x => r+m = (y/x)
    long long int x1 = y/x ;
    /*
    x = r-m ;
    x1 = r+m
    r = (x+x1)/2;
    m = (x1 - x)/2;
    */
    return {(x+x1)/2 ,(x1 - x)/2};
}
