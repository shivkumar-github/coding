/*
This is the theory lecture for binary search.
=> We apply binary search when searching a key in a sorted array
=> In binary search we improve time complexity from O(n) to O(log n) (base of log is 2)
=> It has three main steps
   1. Finding the index of middle term
   2. Compairing that with element at the middle index of array.
   3. If both are equal then index of that element is answer.
   4. else If key > middle term then pick array after the middle term
   5. else pick array before middle term
   6. Then again back to step 1
*/

#include <iostream>
using namespace std;

int binary_search(int *arr, int size, int key)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2; // => equivalent to (n+1)/2 /* We must not use (s+e)/2 directly as sum(s+e) may exceed the limit of integers  when s and e are laarger but when we use the whole condition then there are no chances of the exceeding limit value of integer*/
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int even[6] = {1, 3, 5, 7, 9, 24};
    int odd[7] = {1, 2, 4, 5, 6, 8, 22};
    cout << binary_search(odd, 7, 6);
    return 0;
}