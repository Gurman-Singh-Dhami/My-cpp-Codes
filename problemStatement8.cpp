#include <iostream>
using namespace std;

int getValueFromUser()
{
    cout << "Enter the integer: ";
    int input{};
    cin >> input;
    return input;
}

int main()
{
    int n{getValueFromUser()};
    int t1, t2, nextTerm;
    t1 = 0, t2 = 1;

    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            cout << t1 << ", ";
            continue;
        }
        if (i == 2)
        {
            cout << t2 << ", ";
        }

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << ", ";
    }

    return 0;
}