#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int rev = x % 10 * 1000 + x / 10 % 10 * 100 + x / 100 % 10 * 10 + x / 1000;
    cout << (rev == x) << endl;
    return 0;
}
