#include<iostream>
using namespace std;

template <typename T>T Big(T x, T y)
{
   return (x>y)?x:y;
}
int main()
{
   cout << Big<int>(3, 7)
    << endl; // Call myMax for int
   cout << Big<double>(3.0, 7.0)
    << endl; // call myMax for double
   cout << Big<char>('7', 'e')<< endl;    
}
    