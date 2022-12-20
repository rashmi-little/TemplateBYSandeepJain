#include<iostream>
using namespace std;
template <typename req>
int swap(req x,req y)
{
    req temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"After swapping "<<x<<" "<<y;
    return 0;
}  
int main()
{
    swap<int>(10,15);
    swap<char>('c','k');
}