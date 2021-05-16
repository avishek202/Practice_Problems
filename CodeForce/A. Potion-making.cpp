
#include<bits/stdc++.h>
using namespace std;
#include<ratio>
typedef long long int lli;
//lli i,j;

#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define en "\n"

// reverse binary -> lli res = 0; while(n>0){ res <<= 1; res = res(n & 1); n >>= 1;}
// decimal to binary string -> string s = bitset<N>(n).to_string();
// binary string to decimal -> lli n = bitset<N>(s).to_ullong();
// Case output -> cout << "Case " << j << ": " << mx << endl;

void solve()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        if(100%n==0)cout<<100/n<<endl;
        else if(n%5==0&&n%2!=0)
        {
            if(n==75)cout<<4<<endl;
            else
                cout<<20<<endl;
        }
        else if(n%2!=0)cout<<100<<endl;
        else
        {
            lli hun=100;
            if(n%5==0)
            {
                n = n/2;
                if(n%2==0)cout<<5<<endl;
                else cout<<10<<endl;
            }
            else
            {
                while(1)
                {
                    if(hun%2==0&&n%2==0)
                    {
                        hun/=2;
                        n/=2;
                    }
                    else break;
                }
                cout<<hun<<endl;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

