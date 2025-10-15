#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
        {
            return false;
        }
        int temp = 0;
        int num = x;
        long long reverse = 0;
        while (x > 0)
        {
            temp = x % 10;
            reverse = reverse * 10 + temp;
            x = x / 10;

        }
        if (reverse == num)
        {
            return true;
        }
        else {
            return false;
        }
    }
};
int main()
{
    Solution pa;
    int num = 0;
    cout << "Enter Number to check it is pallindrome or not =";
    cin >> num;
    if (pa.isPalindrome(num)) {
        cout << "Number is Pallindrome" << endl;
    }
    else
    {
        cout << "Number is not a pallindrome " << endl;
    }
    return 0;
}