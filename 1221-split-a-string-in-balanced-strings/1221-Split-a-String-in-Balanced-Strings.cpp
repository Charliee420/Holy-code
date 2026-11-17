class Solution {
public:
    int balancedStringSplit(string s) {
        // stack<char> c;
        int count=0;
        int a=0;

        for (int i=0;i<s.size();i++){
            if(s[i]=='L') a++;
            if(s[i]=='R') a--;
            if(a==0) count++ ;
        }
        return count;

        
    }
};