#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,input,ans;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>input;
            if(input==1)
            {
               ans=abs(i-3)+abs(j-3);
            }
        }
    }
    cout<<ans<<endl;

}
