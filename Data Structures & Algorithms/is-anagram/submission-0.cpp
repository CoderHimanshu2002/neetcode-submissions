class Solution {
public:
    bool isAnagram(string s, string t) {
       int sLen=s.length();
       int tLen=t.length();
       
       if(sLen!=tLen){
        return false;
       }
       
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());

       for(int i=0;i<sLen;i++){
         if(s[i]!=t[i])
         return false;
       }

       return true;
    }
};
