/*
 * @lc app=leetcode id=1909 lang=cpp
 *
 * [1909] Remove One Element to Make the Array Strictly Increasing
 */
// @lc code=start
class Solution
{
public:
    bool canBeIncreasing(vector<int> &nums)
    {
        bool flag = false;
        bool in = false;
        for (int i = 1; i < nums.size() - 1; i++)
        {
            int prev = nums[i - 1];
            int curr = nums[i];
            int next = nums[i + 1];
            if (next < prev)
            {
                flag = false;
                break;
            }
            else if ((curr >= prev && curr >= next) || (curr <= prev && curr <= next))
                {
                    in = true;
                    if (next > prev)
                    {
                        flag = true;
                        break;
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
                }
        }
        if (!in)
            return true;
        return flag;
    }
};
// @lc code=end
