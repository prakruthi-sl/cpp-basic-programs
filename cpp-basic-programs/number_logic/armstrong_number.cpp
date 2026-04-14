// Question: Write a C++ program to check Armstrong number.

#include <iostream>
using namespace std;
int main()
{
    int n,sum=0,temp,r;
    cin>>n;
    temp=n;
    while(n!=0)
    {
        r=n%10;
        sum+=r*r*r;
        n/=10;
    }
    if(sum==temp)
        cout<<"Armstrong";
    else
        cout<<"Not Armstrong";
}