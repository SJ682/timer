#include <iostream>

using namespace std;

int main()
{
    // #ifndef Online_Judge
    // freopen ("input.txt","r",stdin);
    // freopen ("output.txt","w",stdout);
    // #endif
    int n, a[100], p=0, val, t;
    cout<<"Enter the no of elements : \n";
    cin>>n;
    cout<<"Enter your "<<n<<" elemnts : \n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    do{
    cout<<"Enter the position you want to insert your element : \n";
    cin>>p;
    while(p>n)
    {
        cout<<"Invalid Position, Enter again between(1 to "<< n << " ) : \n";
        cin>>p;
    }
    cout<<"Enter the value to insert : \n";
    cin>>val;
    for(int i=n-1;i>=p-1;i--)
    {
        a[i+1]=a[i];
    }
    a[p-1]=val;
    n++;
    cout<<"Your element is inserted at position "<<p;
    cout<<"\nYour elements are : \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nif you want to exit press -1 else to continue press 1 : \n";
    cin>>t;
    if(t==-1)
    {
        p=t;
    }
    }
    while(p!=-1);
    cout<<"Thankyou for Visiting!!!";
    return 0;

}
