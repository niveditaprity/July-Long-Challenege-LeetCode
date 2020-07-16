class Solution {
public:
    string reverseWords(string s) {
        string str;
        stringstream ss(s);
        s="";
        while(ss>>str)
        {
            reverse(str.begin(),str.end());
            s+=str+" ";
        }
        if(!s.empty())
        {
            s.pop_back();
            reverse(s.begin(),s.end());
        }
        return s;
        
        
       
    }
};
