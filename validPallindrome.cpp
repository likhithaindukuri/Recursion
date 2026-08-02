class Solution
{
public:
    bool isPalindrome(string s)
    {
        int n = s.length();
        if (n == 0 || n == 1)
        {
            return true;
        }
        int start = 0;
        int last = n - 1;
        while (start <= last)
        {
            if (!isalnum(s[start]))
            {
                start++;
                continue;
            }
            if (!isalnum(s[last]))
            {
                last--;
                continue;
            }
            if (tolower(s[start]) != tolower(s[last]))
            {
                return false;
            }
            else
            {
                start++;
                last--;
            }
        }
        return true;
    }
};