/*
#include<iostream>
using namespace std;

inline int square(int a)
{
    return a*a;


}
inline int cube(int a)
{

    return a*a*a;
}
int main()
{
    cout <<"\n square of 5 ="<<square(5);
    cout <<"\n cube of 5 ="<<cube(5);
    return 0;
}
*/

#include<iostream>
using namespace std;

inline float mul (float x, float y)
{
    return (x*y);
}
inline double div (double p, double q)
{

    return(p/q);
}
int main ()
{

    float a=12.348;
    float b=9.85;

    cout << mul(a,b)<<"\n";
    cout <<div(a,b)<<"\n";
    return 0;
}
