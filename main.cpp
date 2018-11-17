#include <iostream>

using namespace std;
int DigitSum (int n)
{
    if (n==0)
        return 0;
    else
        return (n%10+DigitSum(n/10));
}
int main()
{
    while (true)
    {
        char choose;
        cout << "1- Digit sum a number\n0 -close program" << endl;
        cin >> choose;
        if (choose=='1')
        {
            int num;
            cout << "Enter the number: ";
            cin >> num;
            cout << "Result = " << DigitSum(num) << endl;
        }
        else if (choose=='0')
            return 0;
        else
            cout << "Not valid choice" << endl;
    }
}
