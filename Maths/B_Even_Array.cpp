#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define mod 1000000007
#define PI 3.1415926535897932384626433832795
#define endl '\n'

#define ha cout << "YES \n";
#define na cout << "NO\n";
#define all(z) z.begin(), z.end()
#define pt(s) cout << s << endl;
#define ff first
#define ss second
#define um unordered_map
#define us unordered_set
#define nline cout << "\n";
#define pb emplace_back

/*Keep learning
Keep doing
keep upsolving*/
template <typename T>
void input(T a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

template <typename O>
void output(O a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void ans()
{
    int n;
    cin >> n;
    int one = 0, zero = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if ((i & 1) == 0 && arr[i] % 2 != 0)
        {
            one++;
        }
        if ((i & 1) && arr[i] % 2 != 1)
        {
            zero++;
        }
    }
    if (one == zero)
    {
        pt(one)
    }
    else
    {
        pt(-1)
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // srand(time(NULL));
    int s = 1;
    bool ray = 0;
    int t = 1;
    cin >> t;
    while (t--)
    {
        if (ray)
            cout << "Case #" << s << "\n";
        ans();
        s++;
    }
    return 0;
}