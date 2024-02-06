#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, a, appear[5001] = {0};
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        if (a <= n)
        {
            appear[a] = 1;
        }
    }
    cout << count(appear + 1, appear + n + 1, 0) << endl;
    return 0;
}