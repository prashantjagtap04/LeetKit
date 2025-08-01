#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int climbStairs(int n, unordered_map<int, int>& memo) {
        if (n == 0 || n == 1) {
            return 1;
        }
        if (memo.find(n) == memo.end()) {
            memo[n] = climbStairs(n-1, memo) + climbStairs(n-2, memo);
        }
        return memo[n];
    }

    int climbStairs(int n) {
        unordered_map<int, int> memo;
        return climbStairs(n, memo);
    }
};


int main()
{
    int n;
    cin >> n;
    Solution solution;
    cout << solution.climbStairs(n) << endl;
    return 0;
}
