

int newNum(int x, int y, int l, int r)
{
    for (int i = l; i <= r; i++)
    {
        int temp = 1 << i - 1;
        if (temp & y)
        {
            if (temp & x)
                continue;
            else
                x |= temp;
        }
    }
    return x;
}
