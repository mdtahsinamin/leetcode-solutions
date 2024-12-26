class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<int> sortedCandies = candies;
        vector<bool> result;
        sort(sortedCandies.begin(), sortedCandies.end());

        int greatest = sortedCandies[sortedCandies.size() - 1];

        for (int i = 0; i < candies.size(); i++) {

            if (candies[i] + extraCandies >= greatest) {
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }

        return result;
    }
};