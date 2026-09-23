class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        //sort(bills.begin(),bills.end());
        int fives = 0;
        int tens = 0;
        int twentys = 0;

        for(int i=0; i<bills.size(); i++){
            if(bills[i]==5){
                fives++;
            }
            else if(bills[i]==10){
                if(fives==0){
                    return 0;
                }
                else{
                    tens++;
                    fives--;
                }
            }
            else{
                if(fives>0&&tens>0){
                    twentys++;
                    tens--;
                    fives--;
                }
                else if(fives>=3){
                    twentys++;
                    fives-=3;
                }
                else{
                    return 0;
                }
            }
        }
    
    return 1;
        
    }
};