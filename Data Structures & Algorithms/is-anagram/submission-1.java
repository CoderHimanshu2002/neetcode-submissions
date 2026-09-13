class Solution {
    public boolean isAnagram(String s, String t) {
        
      int s1=s.length();
      int s2=t.length();

      if(s1!=s2)
      return false;

      char ch[]=s.toCharArray();
      char ch2[]=t.toCharArray();

      Arrays.sort(ch);
      Arrays.sort(ch2);

      for(int i=0;i<s1;i++){
        if(ch[i]!=ch2[i])
        return false;
      }

      return true;
    }
}
