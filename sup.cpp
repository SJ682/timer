#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter your choice 1 or 0 ";
    cin>>n;
    if(n==1)
        cout<<"Hello cmd";
    else if(n==0)
        exit(0);
    else
        cout<<"Wrong Choice";
    return 0;
}