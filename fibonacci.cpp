class Solution
{
public:
    int Fibo(int n)
    {
        if (n <= 1)
        {
            return n;
        }
        return Fibo(n - 1) + fibonacci(n - 2);
    }
    int fibonacci(int n)
    {
        return Fibo(n);
    }
};