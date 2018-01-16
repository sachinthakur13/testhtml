#include <iostream>

using namespace std;

int main()
{
    int a=0,b=1,c=1,d=0;
    for(int i=0;i<=3;i++)
    {
        c=a+b;
        a=b;
        b=c;


        if (c%2==0)
        {
            d+=c;
            cout<<c;
        }
    }
    cout<<endl;

    return 0;
}
