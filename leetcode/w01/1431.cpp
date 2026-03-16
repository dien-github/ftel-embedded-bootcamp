class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<int>::iterator max_it = max_element(candies.begin(), candies.end());
        vector<bool> ret;
        int index = 0;
        while (index < candies.size()) {
            if (*max_it - candies[index] > extraCandies)
                ret.push_back(false);
            else
                ret.push_back(true);
            index++;
        }
        return ret;
    }
};
