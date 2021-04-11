#include<bits/stdc++.h>
using namespace std;
int n = 300000000;
bool prime[300000001];
int main(){
    int a, b;
    cin>>a>>b;
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    prime[0] = false;
    prime[1] = false;
    int res =0;
    for (int i = a; i<=b; i++)
        if (i == 2 or (prime[i] == true and i%4==1))
            res +=1;
    cout<<res;

}
