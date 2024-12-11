/*
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

Please make sure you try to solve this problem without using library functions. Make sure you only traverse the string once.
Input Format
The first argument is a string A


Output Format
Return an integer denoting the length of the last word in the string.


Example Input
Input 1:
A = " hello world "
Input 2:
A = "InterviewBit"


Example Output
Output 1:
5
Output 2:
12

*/
int Solution::lengthOfLastWord(const string s) {
    //approach-1: here the given string is const we cant do any changes so i copied in another string and i 
    //            removed all spaces from the last of the string then i took another string as 
    //            temp which is the last word of the given string i pushed untill the spaces came and i 
    //            return its length.here O(n) is the space complexity and we are traversing three times
    //            through the given string so O(n) is time complexity
    string temp;
    string given;
    for(auto x:s){
        given.push_back(x);
    }
    int n=given.size();
    int i=n-1;
    while(i>=0){
        if(given[i]==' '){
            given.pop_back();
        }else{
            break;
        }
        i--;
    }
    int m=given.size();
    for(int i=m-1; i>=0; i--){
        if(given[i]==' ' ){
            break;
        }else{
            temp.push_back(s[i]);
        }
    }
    int length=temp.size();
    return length;
    // approach-2:  this is the optimized approach for the given problem here we are traversing the string
    //               at only once and we are not changing anything in the given string because given string
    //               is const,O(1) is the space complexity and O(n) is the time complexity
    
    int ct=0;
    int n=s.size();
    int i=n-1;
    while(i>=0 && s[i]==' '){
        i--;
    }
    while(i>=0){
        if(s[i]==' '){
            break;
        }else{
            ct++;
        }
        i--;
    }
    return ct;
    
}
