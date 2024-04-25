/*
Leet Code :-
https://leetcode.com/problems/string-compression/
Given an array of characters chars, compress it using the following algorithm:

Begin with an empty string s. For each group of consecutive repeating characters in chars:

If the group's length is 1, append the character to s.
Otherwise, append the character followed by the group's length.
The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

After you are done modifying the input array, return the new length of the array.

*You must write an algorithm that uses only constant extra space.*



Example 1:

Input: chars = ["a","a","b","b","c","c","c"]
Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".
Example 2:

Input: chars = ["a"]
Output: Return 1, and the first character of the input array should be: ["a"]
Explanation: The only group is "a", which remains uncompressed since it's a single character.
Example 3:

Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
Output: Return 4, and the first 4 characters of the input array should be: ["a","b","1","2"].
Explanation: The groups are "a" and "bbbbbbbbbbbb". This compresses to "ab12".


Constraints:

1 <= chars.length <= 2000
chars[i] is a lowercase English letter, uppercase English letter, digit, or symbol.
*/

#include <iostream>
#include <vector>
using namespace std;
void printVec(vector<char> vec);
class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int ansIndex = 0; // to store answers in the same input chars
        int n = chars.size();
        int i = 0;
        while (i < n) // i is not updated as we wan't to control the updation further
        {
            // instead of i and j we have used i and count
            int count = 1;
            // variable to store older character
            char temp = chars[i];
            while (i < n - 1 && (chars[i] == chars[i + 1]))
            {
                count++;
                i++;
            }
            // isse bahar ayein matlab ek to naya character mila ya phir i pura chars traverse karna hai

            // older character store karlo
            chars[ansIndex++] = temp;
            if (count > 1)
            {
                for (char ch : to_string(count))
                {
                    chars[ansIndex++] = ch;
                }
            }
            //increamenting the value of i becuase when we encounter a new element value of i won't be updated
            i++;
        }
        return ansIndex;
    }
};
void printVec(vector<char> vec)
{
    for (auto i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<char> chars = {'a', 'b', 'b', 'c', 'c', 'c'};
    Solution S1;
    cout << S1.compress(chars) << endl; 
    printVec(chars);
    return 0;
}