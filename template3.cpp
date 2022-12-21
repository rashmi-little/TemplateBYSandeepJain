#include<iostream>
using namespace std;
template <typename T>
bool equality(T a,T b)
{
    if(a==b)
    return true;
    else
    return false;
}
int main()
{
    cout<< equality<int>(7,10)<<endl;
    cout<<equality<int>(10,10)<<endl;
    cout<<equality<int>(7,10)<<endl;
}