#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.find_first_of("HQ9") != string::npos)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}