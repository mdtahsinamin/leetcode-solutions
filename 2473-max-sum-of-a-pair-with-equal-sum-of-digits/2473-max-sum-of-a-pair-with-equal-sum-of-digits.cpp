class Solution {
public:
    map<int, priority_queue<int>> res;
    int sumOfDigit(int n) {
        long int sum = 0;
        while (n != 0) {
            int last = n % 10;
            sum += last;
            n /= 10;
        }
        return sum; // O(logn)
    }
    int maximumSum(vector<int>& nums) {
        int mx = -1;
        for (int i = 0; i < nums.size(); i++) {
            int x = sumOfDigit(nums[i]);
            res[x].push(nums[i]);
        }

        for (auto& pair : res) {
            int sum = 0;
            priority_queue<int> pq = pair.second;
            int cnt = 0;

            if (pq.size() >= 2) {
                sum += pq.top();
                pq.pop();
                sum += pq.top();
            }

            mx = max(mx, sum);
        }

        if (mx == 0)
            return -1;

        return mx;
    }
};