/**
 * @brief Reverses a vector of characters in-place using two pointers approach.
 * 
 * This function reverses the order of characters in the given vector by swapping
 * characters from both ends moving towards the center. The algorithm uses O(1)
 * extra space and O(n) time complexity.
 * 
 * @param s Reference to a vector of characters to be reversed in-place
 * 
 * @note The function modifies the original vector directly
 * @note Time complexity: O(n) where n is the size of the vector
 * @note Space complexity: O(1) as no additional space is used
 * 
 * @example
 * vector<char> chars = {'h', 'e', 'l', 'l', 'o'};
 * reverseString(chars);
 * // chars now contains {'o', 'l', 'l', 'e', 'h'}
 */
void reverseString(vector<char> &s)
{
    int left = 0, right = s.size() - 1;
    while (left < right)
    {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}