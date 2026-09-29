#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    bool ok = a % b == 0 || b % a == 0;
    cout << ok << endl;
    return 0;
}
