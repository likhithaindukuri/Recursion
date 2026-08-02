#include <iostream>
using namespace std;

void printNumNTimes(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    printNumNTimes(n - 1);
}

int main()
{
    int n;
    cin >> n;
    printNumNTimes(n);
    return 0;
}