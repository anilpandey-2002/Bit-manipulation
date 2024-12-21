long long countSetBit(long long n)
{
    long long count = 0;
    while (n)
    {
        if (n & 1)
            count++;
        n >>= 1;
    }
    return count;
}