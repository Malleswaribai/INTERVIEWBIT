/*
Problem Description
 
 

You are given a string A which is a serialized string. You have to restore the original array of strings.

The string in the output array should only have lowercase english alphabets.

Serialization: Scan each element in a string, calculate its length and append it with a string and a element separator or deliminator (the deliminator is ~). We append the length of the string so that we know the length of each element.

For example, for a string 'interviewbit', its serialized version would be 'interviewbit12~'.



Problem Constraints
1 <= |A| <= 106


Input Format
The first argument is the string A.


Output Format
Return an array of strings which are deserialized.


Example Input
Input 1:
A = 'scaler6~academy7~'
Input 2:

A = 'interviewbit12~'


Example Output
Output 1:
['scaler', 'academy']
Output 2:

['interviewbit']

*/
vector<string> Solution::deserialize(string s) {
    vector<string>res;
    int n=s.size();
    string temp;
    int i=0;
    while(i<n){
        if(!(s[i]<='z' && s[i]>='a') && !(s[i]<='Z' && s[i]>='A')){
            if(!temp.empty()){
                res.push_back(temp);
                temp.clear();
            }
            while(s[i]!='~'){
                    i++;
            }
        }else{
            temp.push_back(s[i]);
        }
        i++;
    }
    return res;
}
