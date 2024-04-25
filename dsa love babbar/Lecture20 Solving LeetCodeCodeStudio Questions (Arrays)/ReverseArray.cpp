/*
Codint ninjas :
https://www.codingninjas.com/studio/problems/reverse-the-array_1262298
Problem statement
Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.

Example:

We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0
based indexing so the subarray {5, 6} will be reversed and our
output array will be {1, 2, 3, 4, 6, 5}.
*/

#include <iostream>
#include <vector>
using namespace std;

// code to reverse the whole array
// vector<int> reverse(vector<int> myVec)
// {
//     int start = 0, end = myVec.size() - 1;
//     while (start <= end)
//     {
//         swap(myVec[start], myVec[end]);
//         start++;
//         end++;
//     }
//     return myVec;
// }

void reverse(vector<int> &vec, int M)
{
    int start = M + 1, end = vec.size() - 1;
    while (start <= end)
    {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}

void printVec(vector<int> Vec)
{
    for (int i = 0; i < Vec.size(); i++)
    {
        cout << Vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    int M = 3;

    reverse(vec, M);
    printVec(vec);

    return 0;
}
