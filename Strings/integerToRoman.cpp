/*
Given an integer A, convert it to a roman numeral, and return a string corresponding to its roman numeral version

Note : This question has a lot of scope of clarification from the interviewer. Please take a moment to think of all the needed clarifications and see the expected response using “See Expected Output”

For the purpose of this question, https://projecteuler.net/about=roman_numerals has very detailed explanations.




Input Format

The only argument given is integer A.
Output Format

Return a string denoting roman numeral version of A.
Constraints

1 <= A <= 3999
For Example

Input 1:
    A = 5
Output 1:
    "V"

Input 2:
    A = 14
Output 2:
    "XIV"
*/
string Solution::intToRoman(int n) {
    string res;
    map<int,string>m={
        {1,"I"},
        {4,"IV"},
        {5,"V"},
        {9,"IX"},
        {10,"X"},
        {40,"XL"},
        {50,"L"},
        {90,"XC"},
        {100,"C"},
        {400,"CD"},
        {500,"D"},
        {900,"CM"},
        {1000,"M"}
    };
    auto it=m.end();
    it--;
    while(n>0){
        if(n>=it->first){
            res+=it->second;
            n=n-(it->first);
        }else{
            it--;
        }
    }
    return res;
}
