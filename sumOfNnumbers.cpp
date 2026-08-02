#include <iostream>
using namespace std;

int printSum(int sum, int n)
{
    if (n < 1)
    {
        return sum;
    }
    return printSum(sum + n, n - 1);
}

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    sum = printSum(sum, n);
    cout << sum;
    return 0;
}