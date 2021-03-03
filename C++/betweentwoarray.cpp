#include <iostream>
using namespace std;

int gcd(int a,int b)
    {
    if(b==0)return a;
    return gcd(b,a%b);
}
int lcm(int a,int b)
    {
    return a*b/gcd(a,b);
}

int main()
{
	int n,m,i,g,l,ans;

    cin >> n >> m;

    int a[n],b[m];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }


    l=a[0];
    for(i=1; i < n; i++)
        l=lcm(l,a[i]);

    g=b[0];
    for(i=0; i < m; i++)
        g=gcd(g,b[i]);
    
    
    if(g%l!=0)
        ans=0;
    else {
        for(i=l;i<=g;i++)
            {
            ans=0;
            if(g%i==0)ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}

// &&i%l==0