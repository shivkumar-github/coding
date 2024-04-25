/*
Leet Code
https://leetcode.com/problems/peak-index-in-a-mountain-array/
852. Peak Index in a Mountain Array
Medium
An array arr is a mountain if the following properties hold:
                                                   /\
                                                  /  \
                 arr[mid] < arr[mid + 1]    ==>  /    \  ==> arr[mid] > arr[mid + 1]
                                                /      \
                                               /        \
arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

You must solve it in O(log(arr.length)) ==> O(logn) time complexity.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int start = 0;
        int end = arr.size() - 1;
        int peakIndex;

        int mid = start + (end - start) / 2;
        while (start < end)
        {

            if (arr[mid] < arr[mid + 1])
            {
                start = mid + 1;
            }
            else
            { // if arr[mid] > arr[mid + 1]
                end = mid;
            }
            mid = start + (end - start) / 2;
        } // at this point start(when loop ends) and end will be equal
        return start;
    }
};

int main()
{

    vector<int> array = {1, 2, 3, 6, 7, 11, 8, 4, 3, 2, 1};
    Solution S1;
    cout << "Peak Index is : " << S1.peakIndexInMountainArray(array) << endl;

    return 0;
}