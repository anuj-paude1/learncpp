#include <iostream>
using namespace std;
int main(void)
{
    int a,b,c;
    cin>>a>>b>>c;
    // lazy to check the largest integer
    // Why is a^2 != a*a ?? Explain Please
    if( a*a==b+c*c || b*b==a*a+c*c || c*c==b*b+a*a)
    {
        cout<<"yes";

    }
    // if( a*a == b*b+c*c )
    // {
    //     cout<<"yes";

    // }
    // else if(b*b==a*a+c*c)
    // {
    //     cout<<"yes";

    // }
    
    // else if( c*c == a*a +b*b )
    // {
    //     cout<<"yes";

    // }
    else{
        cout<<"no";
    }
}