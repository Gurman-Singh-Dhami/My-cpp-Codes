#include <iostream>
#include <cmath>
using namespace std;

float square(float a)
{
    float ans;
    ans = pow(a,2);
    return ans;
}

float add (float a,float b)
{
    float ans;
    ans = a+b;
    return ans;
}

float multiply(float a,float b)
{
    float ans;
    ans = a*2*b;
    return ans;
}


int main()
{
    float a,b,n1,n2,sum1,sum2,ans;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "\nEnter the value of b: ";
    cin >> b;

    n1 = square(a);
    n2 = square(b);
    sum1 = add(n1,n2);
    sum2 = multiply(a,b);

    ans = add(sum1,sum2);

    cout << "\nThe answer is: " << ans << endl;




    
    
    return 0;
}