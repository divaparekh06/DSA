class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> candies(ratings.size(),1);

    //LEFT TO RIGHT
    for(int i=1; i<ratings.size();i++){
        if(ratings[i]>ratings[i-1]){
            candies[i] = candies[i-1]+1;
        }
    }
    //RIGHT TO LEFT
    for(int j=ratings.size()-2; j>=0;j--){
        if(ratings[j]>ratings[j+1]){
            candies[j]=max(candies[j+1]+1,candies[j]);
        }
    }
    int sum=0;
    for(int k=0; k<ratings.size();k++){
        sum+=candies[k];
    }
    return sum;
        
    }
};