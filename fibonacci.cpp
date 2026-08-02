class Solution
{
public:
    int Fibo(int n)
    {
        if (n <= 1)
        {
            return n;
        }
        return Fibo(n - 1) + fib(n - 2);
    }
    int fib(int n)
    {
        return Fibo(n);
    }
};