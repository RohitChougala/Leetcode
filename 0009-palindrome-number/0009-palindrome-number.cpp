class Solution {
public:
string rev(string s) {
    string n ;
    for(int i=s.length()-1; i>=0; i--)
      n+=s[i];

    return n;
}
    bool isPalindrome(int x) {
        if(x<0)
          return false;

        else{
            string s = to_string(x);
            if(s == rev(s))
              return true;
        }
        return false;
    }
};