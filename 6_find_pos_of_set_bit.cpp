
int findPosition(int n)
{
    int count = 0, setBit = 0;
    while (n)
    {
        count++;
        if (n & 1)
            setBit++;
        n >>= 1;
    }
    if (setBit > 1 || setBit == 0)
        return -1;
    return count;
}
