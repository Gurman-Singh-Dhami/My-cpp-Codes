#include <iostream>
#include <cmath>
using namespace std;

float square(float a)
{
 
    float ans;
    ans = pow(a,2);
    return ans;
}

float add(float a ,float b)
{
   
    float sum;
    sum = a+b;
    return sum;

}

float squareroot2(float a)
{
    float ans;
    ans = sqrt(a);
    return ans;
    
}

int main()
{
    cout << "Enter two integers:\n ";
    float a,b,n1,n2,sum,ans;
    cin >> a >> b;

    n1 =  square(a);
    n2 = square(b);

    sum = add (n1,n2);

    ans = squareroot2 (sum);

    cout << "\nThe answer is: " << ans << endl;







    return 0;
}