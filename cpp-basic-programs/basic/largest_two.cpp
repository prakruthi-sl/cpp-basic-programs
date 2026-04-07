// Question: Write a C++ program to find the largest of two numbers.

#include <iostream>
using namespace std;
int main() 
{
    int a,b;
    cin>>a>>b;
    if(a>b)
        cout<<"Largest = "<<a;
    else
        cout<<"Largest = "<<b;
}