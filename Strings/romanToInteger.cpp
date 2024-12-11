/*
Given a string A representing a roman numeral.

Convert A into integer.

A is guaranteed to be within the range from 1 to 3999.

NOTE: Read more 

details about roman numerals at Roman Numeric System




Input Format

The only argument given is string A.
Output Format

Return an integer which is the integer verison of roman numeral string.
For Example

Input 1:
    A = "XIV"
Output 1:
    14

Input 2:
    A = "XX"
Output 2:
    20
*/
int Solution::romanToInt(string s) {
     unordered_map<char,int> mymap{
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000},
        };
        int value = 0;
        for(int i=0;i<s.size();++i){
            if(mymap[s[i]] < mymap[s[i+1]])
                value -= mymap[s[i]];
            else
                value += mymap[s[i]];
        }
        return value;
}
