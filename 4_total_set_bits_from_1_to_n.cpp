int total_popcount(int n)
{
    int count = 0;
    while (n)
    {
        if (n & 1)
            count++;
        n >>= 1;
    }
    return count;
}

int countSetBits(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
        count += total_popcount(i);
    return count;
}

int countSetBits(int n)
{
    int i = 0, ans = 0;
    while ((1 << i) <= n)
    {
        bool k = 0;
        int change = 1 << i;
        for (int j = 0; j <= n; j++)
        {
            ans += k;
            if (change == 1)
            {
                k = !k;
                change = 1 << i;
            }
            else
                change--;
        }
        i++;
    }
    return ans;
}

int findPower(int n)
{
    int count = 0;
    while ((1 << count) <= n)
        count++;
    return count - 1;
}

int countSetBits(int n)
{
    if (n == 0)
        return 0;
    int max_pow_of_2 = findPower(n);
    int till_pow_of_2 = max_pow_of_2 * (1 << (max_pow_of_2 - 1));
    int extra_line_of_bit = n - (1 << max_pow_of_2) + 1;
    return till_pow_of_2 + extra_line_of_bit + countSetBits(n - (1 << max_pow_of_2));
}
