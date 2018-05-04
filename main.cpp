#include <iostream>

using namespace std;
int nr[1000][10];
int main()
{int n,x;bool found=true;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        while(x)
        {
            nr[i][x%10]++;
            x=x/10;
        }
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<(n-1);j++)
        {
            if(nr[j][i]!=nr[j+1][i])
                found=false;
        }
        if(found==true)
        {
            cout<<"DA";
        }
        found=true;
    }
    cout<<"NU";
    return 0;
}
