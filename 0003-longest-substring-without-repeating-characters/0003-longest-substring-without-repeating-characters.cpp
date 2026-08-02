class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0;
    bool repeated;
    for(int i=0; i<s.size();i++){
        int count = 1;
        for(int j=i+1; j<s.size();j++){
            repeated = false;
            for(int k=i; k<j; k++){
                if(s[k]==s[j]){
                    repeated = true;
                    break;
                }
                
            }
            if(repeated){
                break;
            }
            count++;
        }
        if(count > maxlen){
        maxlen = count;
    }

    }
    
    return maxlen;
    
        
    }
};