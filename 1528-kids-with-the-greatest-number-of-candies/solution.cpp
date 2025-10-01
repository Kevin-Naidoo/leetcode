class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> enoughCandy;
        int maxCandy = candies[0];

        for(int i = 1; i < candies.size(); i++){
            if(maxCandy < candies[i]) maxCandy = candies[i];
        }
        for(int candy: candies){
            if (candy + extraCandies < maxCandy) enoughCandy.push_back(false);
            else enoughCandy.push_back(true); 
        }

    return enoughCandy;
    }
};
