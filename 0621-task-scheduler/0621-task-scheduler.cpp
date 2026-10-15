class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> hm;
        priority_queue<int> pq;
        for(char ch : tasks){
            hm[ch]++;
        }
        for(auto [k,v] : hm){
            pq.push(v);
        }
        int res=0;
        

        while(!pq.empty()){
            vector<int> temp;
            int time=0;
            for(int i=0; i<n+1 && !pq.empty(); i++){
                temp.push_back(pq.top()-1);
                pq.pop();
                time++;
            }
            for(int x : temp){
                if(x) pq.push(x);
            }
            if(!pq.empty()){
                res+=(n+1);
            }else{
                res+=time;
            }
        }
        return res;
    }
};