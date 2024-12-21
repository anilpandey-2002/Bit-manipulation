int countBitsFlip(int a, int b)
{
    int count = 0;
    for (int i = 0; i < 32; i++)
        if ((a & (1 << i)) ^ (b & (1 << i)))
            count++;
    return count;
}

int countBitsFlip(int a, int b)
{
    return __builtin_popcount(a ^ b);
}
