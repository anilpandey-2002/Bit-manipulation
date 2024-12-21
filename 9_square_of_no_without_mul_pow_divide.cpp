
int without_MPD(int n)
{
    n = abs(n);
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n % 2)
    {
        return ((without_MPD(n / 2) << 2) + ((n / 2) << 2) + 1);
    }
    else
    {
        return (without_MPD(n / 2) << 2);
    }
}
