class Solution {
public:
    
      //To check if a string is a palindrome
        bool isPalindrome(const std::string &str , int start , int end  ){
            while(start<end){
                if(str[start] != str[end]){
                    return false;
                }
                start++;
                end--;
            }
            return true;
        }
    
    
    
    string longestPalindrome(string s) {
        
        int longestLength = 0;
        string longest;
        
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                if(isPalindrome(s,i,j)){
                    int currentLength = j - i + 1;
                    if(currentLength  >longestLength){
                        longestLength = currentLength;
                        longest = s.substr(i,currentLength);
                    }
                    
                }
            }
        }
        return longest;
    }
};