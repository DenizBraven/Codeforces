#include <cstdio>

using namespace std;

int main()
{
    int n, t, count[21] = {0};
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &t);
        count[t + 10] += 1;
    }
    long long result = static_cast<long long>(count[10]) * static_cast<long long>(count[10] - 1) /2;
    for (int i = 0; i < 10; ++i)
    {
        result += static_cast<long long>(count[i]) * static_cast<long long>(count[20 - i]);
    }
    printf("%I64d\n", result);
    return 0;
}