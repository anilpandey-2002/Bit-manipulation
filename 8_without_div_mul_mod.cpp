
int without_DMM(int dividend, int divisor)
{
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

    dividend = abs(dividend);
    divisor = abs(divisor);

    int quotient = 0;
    int temp = 0;
    for (int i = 31; i >= 0; i--)
    {

        if (temp + (divisor << 1) <= dividend)
        {
            temp += divisor << 1;
            quotient |= 1 << i;
        }
    }

    return quotient * sign;
}
