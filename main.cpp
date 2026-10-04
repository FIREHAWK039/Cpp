#include <iostream>
using namespace std;

class Solution
{
public:
     int subtractProductAndSum(int n)
    {

        int prod = 1;
        int sum = 0;

        while (n != 0)
        {

            int digit = n % 10;
            prod = prod * digit;
            sum = sum + digit;

            n = n / 10;
        }
        return prod - sum;
    }
   
};

 int main(){
    int num;
    cin>> num;
    Solution solution;
        cout <<solution.subtractProductAndSum(num)<< endl;
        return 0;
    }