        #include <bits/stdc++.h>
        #define mod 1000000007
        using namespace std;
        using ll = long long;

    int fun (int a )
    {

    if(a>0)
    fun (a/2);
        cout<<a/2 <<endl;
    }

    int gcd(int x, int y) {
        while (y != 0) {
            int temp = y;
            y = x % y;
            x = temp;
        }
        return x;
    }

    int binaryShr(int a[],int size1 , int key)
    {
        int low =0;
        int high = size1-1;

         while (low <=high )
         {

            int mid =(low+high)/2;
            if (a[mid] ==key )return mid ;
            else if (a[mid] < key )
                low =mid+1;

        else
               high = mid -1 ;


         }
         return -1 ;




    }
        ll expo(ll n, ll m)
        {
            ll ans = 1;
            while (m > 0)
            {
                if (m & 1)
                {
                    ans = (ans % mod * n % mod) % mod;
                }
                n = (n % mod * n % mod) % mod;
                m >>= 1;
            }
            return ans % mod;
        }

        ll mul(ll x, ll y)
        {
            return (x % mod * y % mod) % mod;
        }

        bool isPrime(ll x)
        {
            for (int i = 2; i * i <= x; i++)
                if (x % i == 0) return false;
            return true;
        }

        ll  valueof(const vector<int>&a)
        {
            ll sum=0;
            int mx=0;
            for (int x : a)
            {
                mx=max(mx,x);
                sum+=mx;

            }
        return sum;

        }


    void solve() {
        int n, s, x;
        cin >> n >> s >> x;

        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }

        if (sum > s) {
            cout << "NO\n";
            return;
        }

        int diff = s - sum;
        if (diff % x == 0) cout << "YES\n";
        else cout << "NO\n";
    }










        int main()
        {
            ios::sync_with_stdio(false);
            cin.tie(nullptr);
            cout.tie(nullptr);

            int t;
            cin>>t;
            while(t--)
            {
                solve();

            }



            return 0;
        }
