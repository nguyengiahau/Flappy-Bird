#include <iostream>
using namespace std;
int result()
{
    int n, k, i = 0, ans = 0;
    cin >> n >> k;
    for (i = 1; ans <= k; i++)
    {
        if (i % k != 0)
            ans++;
    }
    return i;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << result() << endl;
    }
}