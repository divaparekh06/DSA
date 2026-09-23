class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(g.size()==0 ||s.size()==0 ){  //edge case 1
            return 0;
        }
    int i=0,j=0;
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    while(i<g.size() &&  j<s.size()){
        if(g[i]<=s[j]){
            i++;
        }
        j++;
    }
    return i;
    }
};