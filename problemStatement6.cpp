#include <iostream>
using namespace std;

int getValueFromUser()
{
    cout << "Enter an integer: ";
    int input{};
    cin >> input;
    return input;
}

int main()
{
    int a{getValueFromUser()};
    int b{getValueFromUser()};

    char o;
    cin >> o;

    switch (o)
    {
    case '+':
        cout << "The answer is : " << a + b << endl;
        break;

    case '-':
        cout << "The answer is : " << a - b << endl;
        break;

    case '*':
        cout << "The answer is : " << a * b << endl;
        break;

    case '/':
        cout << "The answer is : " << a / b << endl;
        break;

    default:
        cout << " Error: The operator is invalid " << endl;
        break;
    }

    return 0;
}