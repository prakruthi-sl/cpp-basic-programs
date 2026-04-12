// Question: Write a C++ program to print multiplication table.

#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    for(int i=1;i<=10;i++)
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
}