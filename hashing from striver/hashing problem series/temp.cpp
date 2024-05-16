/*

*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
        double power(int num, int index)
        {
                double ans = 1;
                for (int i = 0; i < index; i++)
                {
                        ans *= num;
                }
                return ans;
        }
        string intToRoman(int num)
        {
                string ans = "";
                unordered_map<int, char> mpp;
                mpp.insert({1, 'I'});
                mpp.insert({5, 'V'});
                mpp.insert({10, 'X'});
                mpp.insert({50, 'L'});
                mpp.insert({100, 'C'});
                mpp.insert({500, 'D'});
                mpp.insert({1000, 'M'});
                int temp = num;
                int ndigit = 0;
                while (temp)
                {
                        ndigit++;
                        temp /= 10;
                }
                temp = num;
                map<int, int> nummp;
                for (int i = 0; i < ndigit; i++)
                {
                        int place = int(power(10, ndigit - i - 1));
                        nummp[place] = temp / place;
                        cout<< temp << endl;
                        temp %= place;
                }
                unordered_map<int, vector<char>> requirments;
                requirments.insert({1, {'I', 'V', 'X'}});
                requirments.insert({10, {'X', 'L', 'C'}});
                requirments.insert({100, {'C', 'D', 'M'}});
                requirments.insert({1000, {'M'}});
                for (auto i = nummp.rbegin(); i != nummp.rend(); i++)
                {
                        int place = i->first;
                        int digit = i->second;
                        if (digit == 0)
                        {
                                // do  nothing
                        }
                        else if (digit <= 3)
                        {
                                for (int j = 0; j < digit; j++)
                                {
                                        ans += requirments[place][0];
                                }
                        }
                        else if (digit == 4)
                        {
                                ans += requirments[place][0];
                                ans += requirments[place][1];
                        }
                        else if (digit == 5)
                        {
                                ans += requirments[place][1];
                        }
                        else if (digit <= 8)
                        {
                                ans += requirments[place][1];
                                for (int j = 0; j < digit - 5; j++)
                                {
                                        ans += requirments[place][0];
                                }
                        }
                        else if (digit == 9)
                        {
                                ans += requirments[place][0];
                                ans += requirments[place][2];
                        }
                }
                return ans;
        }
};
int main()
{

        int num = 3999;
        // cin >> num;
        Solution s;
        string ans = s.intToRoman(num);
        cout << ans << endl;

        return 0;
}