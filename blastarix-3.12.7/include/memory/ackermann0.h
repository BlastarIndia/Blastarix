#include <iostream>
#include <string>
// Ackermann function by Orion Blastar 06/22/2001
// Using the naive version of the Ackermann algorithm, this program teaches how to calculate Ackermann numbers.
//It requires a large number class to work properly without stack overflow errors and other issues.
//I did not use the exponent method as this is for teaching about Ackermann numbers.
using namespace std;

double Ackermann(double m, double n)
{

   cout << "m= " << m << " n= " << n << endl;
   if (m == 0)
     {
       return(n+1);
     }
   
   if (m > 0 && n == 0)
     {
       return(Ackermann(m-1,1));
     }

   if (m > 0 && n > 0)
     {
       return(Ackermann(m-1,Ackermann(m,n-1)));
      }
}

int main()
{
    double result1;
    result1 = Ackermann(3,4);
    cout << "Ackermann(3,4) = " << result1 << endl;
    return 0;
}
