vector<int> singleNumber(vector<int> nums)
{
    int main_xor = nums[0];
    for (int i = 1; i < nums.size(); i++)
        main_xor ^= nums[i];
    int least = main_xor & (~(main_xor - 1));
    int x = 0, y = 0;
    for (auto i : nums)
        if (i & least)
            x ^= i;
        else
            y ^= i;
    return x < y ? vector<int>{x, y} : vector<int>{y, x};
}
