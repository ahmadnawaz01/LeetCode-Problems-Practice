#include<iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        if (x == 0)
        {
            return 0;
        }
        int temp = 0;
        int reverse = 0;
        if (x == -2147483648)
        {
            return 0;
        }
        const int max32 = 2147483647;
        const int min32 = -2147483648;

        if (x < 0)
        {
            int neg = -1;
            x = x * neg;
            while (x > 0)
            {
                temp = x % 10;
                if (reverse > (max32 - temp) / 10)
                {
                    return 0;
                }
                reverse = reverse * 10 + temp;
                x = x / 10;
            }

            reverse = reverse * neg;

            if (reverse < min32 || reverse > max32)
            {
                return 0;
            }

            return reverse;
        }
        else
        {
            while (x > 0)
            {
                temp = x % 10;
                if (reverse > (max32 - temp) / 10)
                {
                    return 0;
                }
                reverse = reverse * 10 + temp;
                x = x / 10;
            }

            if (reverse < min32 || reverse > max32)
            {
                return 0;
            }
            return reverse;
        }
    }
};
int main()
{
    int num = 0;
    cout << "Enter a number to reverse = ";
    cin >> num;
    Solution sl;
    cout << "Reverse is = " << sl.reverse(num) << endl;
    return 0;
}