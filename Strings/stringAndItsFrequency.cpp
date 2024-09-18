/*
Problem Description
 
 

 Given a string A with lowercase english alphabets and you have to return a string in which, with each character its frequency is written in adjacent.



Problem Constraints
1 <= |A| <= 105


Input Format
First argument is the string A with lowercase english alphabets.


Output Format
Return a string in which each character frequency is written in adjacent.


Example Input
Input 1:
abbhuabcfghh
Input 2:

a


Example Output
Ouput 1:
a2b3h3u1c1f1g1
Ouput 2:

a1

*/
string Solution::solve(string s) {
    int n=s.size();
   unordered_map<char,int>m;
   for(auto &x:s) m[x]++;
    string res;
    int i=0;
    while(i<n){
        auto it=m.find(s[i]);
        if(it!=m.end()){
            res.push_back(s[i]);
            res+=to_string(it->second);
            i++;
            m.erase(it->first);
        }else{
            i++;
        }
    }
    return res;
}

