bool isAlphaNum(char ch)
{
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
        return true;
    }
    return false;
}

bool isPalindrome(string s)
{
    int left = 0, right = s.size() - 1;

    while (left < right)
    {
        if (!isAlphaNum(s[left]))
        {
            left++;
            continue;
        }
        if (!isAlphaNum(s[right]))
        {
            right--;
            continue;
        }
        if (tolower(s[left]) != tolower(s[right]))
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}