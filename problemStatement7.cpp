#include <iostream>
using namespace std;

int getValueFromUser()
{
cout << "Enter the integer:";
int input{};
cin >> input;
return input;
}

int main()
{
    int n {getValueFromUser()};
    int i {1};

    while (i<=10)
    {
        cout << n << " * " << i << " = " << n*i << endl;
        i++;
    }
    
    
    return 0;
}