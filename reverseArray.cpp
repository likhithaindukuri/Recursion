class Solution
{
public:
    void reverseArray(vector<int> &arr)
    {
        // code here
        int p1 = 0, p2 = arr.size() - 1;
        for (int i = 0; i < arr.size() / 2; i++)
        {
            swap(arr[p1], arr[p2]);
            p1++;
            p2--;
        }
    }
};