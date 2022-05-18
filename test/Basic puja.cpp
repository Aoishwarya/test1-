//Aoishwarya ICE 15
#include<iostream>
#include<bits/stdc++.h>
//#define Max 10000000007
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
#define left(node) (node*2)
#define right(node) (node*2+1)
#define mx_int_prime 999999937

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define dbg(x,y) cout<<"x:"<<x<<" "<<"y:"<<y<<endl;
#define dbg1(a) cout<<"a:"<<a<<endl;
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1}; // 8-direction.......
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[]= {0,1,-1,0};
int dy4[]= {1,0,0,-1};


int main()

{
    optimize();

    int n;
    cin>>n;
    int arr[n];
    int police=0,crime=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0){
            police+=arr[i];
        }
        else{
            if(police<1)
            {
                ++crime;
            }
            else
            {
                --police;
            }


        }

    }
    cout<<crime<<endl;
}
