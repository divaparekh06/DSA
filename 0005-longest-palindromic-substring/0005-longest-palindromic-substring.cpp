class Solution {
public:
    string longestPalindrome(string s) {
        bool isPalindrome;
    string longest = "";
    for(int i=0; i<s.size();i++){
        for(int j=i; j<s.size(); j++){
            isPalindrome = true;
            int left = i;
            int right = j;
            while(left<right){
                if(s[left]==s[right]){
                    left++;
                    right--;
                    

                }
                else{
                    isPalindrome = false;
                    break;
                }
                
                
            }
            if (isPalindrome) {

                int length = j - i + 1;

                if (length > longest.length()) {
                    longest = s.substr(i, length);
                }

            }
            
            
        }
    }
    return longest;


        
    }
};