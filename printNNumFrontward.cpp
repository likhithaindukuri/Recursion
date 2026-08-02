#include <iostream>
using namespace std;

void printNumNTimes(int cnt, int n)
{
    if (cnt < 1)
    {
        return;
    }
    printNumNTimes(cnt - 1, n);
    cout << cnt << endl;
}

int main()
{
    int n;
    cin >> n;
    int cnt = n;
    printNumNTimes(cnt, n);
    return 0;
}