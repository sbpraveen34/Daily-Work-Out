#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

vector<int> fact( int n)
{
    vector<int> a(1000,0);
    a[0]    =   1;
    int m=1;
    int temp=0,x;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<m;j++)
        {
            x       =   a[j]*i+temp;
            a[j]    =   x%10;
            temp    =   x/10;
        }
        while(temp>0)
        {
            a[m]=temp%10;
            temp=temp/10;
            m++;
        }
    }
    return a;
}

int main()
{
    vector<int> a;
    a   =   fact(6);
    int pos;
    for(int i=a.size()-1;i>=0;i--)
    {

        if(a[i]!=0)
        {
            pos =   i;
            break;
        }

    }
    for(int i=pos;i>=0;i--)
        cout<<a[i];
return 0;
}
